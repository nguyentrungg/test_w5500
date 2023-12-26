#include <p24FJ256GB108.h>
#include <xc.h>
#include "Socket.h"
#include "W5500.h"
#include "Wizchip_Conf.h"
#include "mcc_generated_files/system.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/spi1.h"




#define SOCK_ID_TCP       0
#define SOCK_ID_UDP       1
#define PORT_TCP          5000
#define PORT_UDP          10001

#define DATA_BUF_SIZE     1024
uint8_t gDATABUF[DATA_BUF_SIZE];

volatile wiz_NetInfo gWIZNETINFO =
{
  {0x00, 0x14, 0xA3, 0x72, 0x17, 0x3f},    // Source Mac Address
  {192, 168,  1, 53},                      // Source IP Address
  {255, 255, 254, 0},                      // Subnet Mask
  {192, 168,  1, 1},                       // Gateway IP Address
  {192, 168,  1, 99},                      // DNS server IP Address
  NETINFO_STATIC
 };

volatile wiz_PhyConf phyConf =
{
  PHY_CONFBY_HW,       // PHY_CONFBY_SW
  PHY_MODE_MANUAL,     // PHY_MODE_AUTONEGO
  PHY_SPEED_10,        // PHY_SPEED_100
  PHY_DUPLEX_FULL,     // PHY_DUPLEX_HALF
};

volatile wiz_NetInfo pnetinfo;

// brief Call back function for WIZCHIP select.
void CB_ChipSelect(void)
{
    SS1OUT_SetLow();
}

// brief Call back function for WIZCHIP deselect.
void CB_ChipDeselect(void)
{
    SS1OUT_SetHigh();
}

// brief Callback function to read byte using SPI.
uint8_t CB_SpiRead(void)
{
    return SPI1_Exchange8bit(0xAA);
}

// brief Callback function to write byte usig SPI.
void CB_SpiWrite(uint8_t wb)
{
    SPI1_Exchange8bit(wb);
}

// brief Handle TCP socket state.
void TCP_Server(void)
{
    int32_t ret;
    uint16_t size = 0, sentsize = 0;

    // Get status of socket
    switch(getSn_SR(SOCK_ID_TCP))
    {
        // Connection established
        case SOCK_ESTABLISHED :
        {
            // Check interrupt: connection with peer is successful
            if(getSn_IR(SOCK_ID_TCP) & Sn_IR_CON)
            {
                // Clear corresponding bit
                setSn_IR(SOCK_ID_TCP,Sn_IR_CON);
            }

            // Get received data size
            if((size = getSn_RX_RSR(SOCK_ID_TCP)) > 0)
            {
                // Cut data to size of data buffer
                if(size > DATA_BUF_SIZE)
                {
                    size = DATA_BUF_SIZE;
                }

                // Get received data
                ret = recv(SOCK_ID_TCP, gDATABUF, size);

                // Check for error
                if(ret <= 0)
                {
                    return;
                }

                // Send echo to remote
                sentsize = 0;
                while(size != sentsize)
                {
                    ret = send(SOCK_ID_TCP, gDATABUF + sentsize, size - sentsize);
                    
                    // Check if remote close socket
                    if(ret < 0)
                    {
                        close(SOCK_ID_TCP);
                        return;
                    }

                    // Update number of sent bytes
                    sentsize += ret;
                }
            }
            break;
        }

        // Socket received the disconnect-request (FIN packet) from the connected peer
        case SOCK_CLOSE_WAIT :
        {
            // Disconnect socket
            if((ret = disconnect(SOCK_ID_TCP)) != SOCK_OK)
            {
                return;
            }

            break;
        }

        // Socket is opened with TCP mode
        case SOCK_INIT :
        {
            // Listen to connection request
            if( (ret = listen(SOCK_ID_TCP)) != SOCK_OK)
            {
                return;
            }

            break;
        }

        // Socket is released
        case SOCK_CLOSED:
        {
            // Open TCP socket
            if((ret = socket(SOCK_ID_TCP, Sn_MR_TCP, PORT_TCP, 0x00)) != SOCK_ID_TCP)
            {
                return;
            }

           break;
        }

        default:
        {
            break;
        }
    }
}

// brief Handle UDP socket state.
void UDP_Server(void)
{
    int32_t  ret;
    uint16_t size, sentsize;
    uint8_t  destip[4];
    uint16_t destport;

    // Get status of socket
    switch(getSn_SR(SOCK_ID_UDP))
    {
        // Socket is opened in UDP mode
        case SOCK_UDP:
        {
            // Get received data size
            if((size = getSn_RX_RSR(SOCK_ID_UDP)) > 0)
            {
                // Cut data to size of data buffer
                if(size > DATA_BUF_SIZE)
                {
                    size = DATA_BUF_SIZE;
                }

                // Get received data
                ret = recvfrom(SOCK_ID_UDP, gDATABUF, size, destip, (uint16_t*)&destport);

                // Check for error
                if(ret <= 0)
                {
                    return;
                }

                // Send echo to remote
                size = (uint16_t) ret;
                sentsize = 0;
                while(sentsize != size)
                {
                    ret = sendto(SOCK_ID_UDP, gDATABUF + sentsize, size - sentsize, destip, destport);
                    if(ret < 0)
                    {
                        return;
                    }
                    // Update number of sent bytes
                    sentsize += ret;
                }
            }
            break;
        }

        // Socket is not opened
        case SOCK_CLOSED:
        {
            // Open UDP socket
            if((ret=socket(SOCK_ID_UDP, Sn_MR_UDP, PORT_UDP, 0x00)) != SOCK_ID_UDP)
            {
                return;
            }

            break;
        }

        default :
        {
           break;
        }
    }
}

// brief Initialize modules
static void W5500_Init(void)
{
    // Set Tx and Rx buffer size to 2KB
    uint8_t buffsize[8] = { 2, 2, 2, 2, 2, 2, 2, 2 };

    IO_RB13_SetDigitalOutput();                        // Set Rst pin to be output
    SS1OUT_SetDigitalOutput();                         // Set CS pin to be output
    
    CB_ChipDeselect();                                // Deselect module

    // Reset module
    IO_RB13_SetLow();
    //delay(1000);
    IO_RB13_SetHigh();
   //delay(1000);
    //SPI1_Init();

    // Wizchip initialize
    wizchip_init(buffsize, buffsize, 0, 0, CB_ChipSelect, CB_ChipDeselect, 0, 0, CB_SpiRead, CB_SpiWrite);
    
    // Wizchip netconf
    ctlnetwork(CN_SET_NETINFO, (void*) &gWIZNETINFO);
    ctlwizchip(CW_SET_PHYCONF, (void*) &phyConf);
}