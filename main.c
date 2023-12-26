/*
 * File:   main.c
 * Author: trungnguyen
 *
 * Created on December 20, 2023, 9:42 AM
 */
#include "tcp_udp_server.h"
#include <string.h>
#include "my_debug.h"
#include "mcc_generated_files/tmr1.h"



void main() 
{
    SYSTEM_Initialize();
    IO_RB15_SetDigitalOutput();
    IO_RB13_SetDigitalOutput();
    //ADPCFG = 0xFFFF;                                  // configure AN pins as digital I/O

    W5500_Init();
    wizchip_getnetinfo(&pnetinfo);

    while(1){
        my_print("Xin chao %d %f %c %s\n", 1, 3.14, 'c', "hello");
        Delay_ms(1000);
    }
}