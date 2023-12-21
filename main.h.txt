#include <24FJ128GB108.h>
#device ICSP=1
#use delay(internal=8000000)

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled


#pin_select SCK1OUT=PIN_B7
#pin_select SDI1=PIN_B2
#pin_select SDO1=PIN_B1
#use spi(MASTER, SPI1, BAUD=1000000, MODE=0, BITS=8, ENABLE=PIN_B0, stream=SPI_PORT1)