//////////// Standard Header file for the PIC24FJ256GB108 device ////////////////
///////////////////////////////////////////////////////////////////////////
////        (C) Copyright 1996, 2020 Custom Computer Services          ////
//// This source code may only be used by licensed users of the CCS C  ////
//// compiler.  This source code may only be distributed to other      ////
//// licensed users of the CCS C compiler.  No other use, reproduction ////
//// or distribution is permitted without written permission.          ////
//// Derivative programs created using this software in object code    ////
//// form are not restricted in any way.                               ////
///////////////////////////////////////////////////////////////////////////
#device PIC24FJ256GB108

#nolist
//////// Program memory: 87548x24  Data RAM: 16384  Stack: 31
//////// I/O: 69   Analog Pins: 16
//////// Fuses: WPOSTS1,WPOSTS2,WPOSTS3,WPOSTS4,WPOSTS5,WPOSTS6,WPOSTS7
//////// Fuses: WPOSTS8,WPOSTS9,WPOSTS10,WPOSTS11,WPOSTS12,WPOSTS13,WPOSTS14
//////// Fuses: WPOSTS15,WPOSTS16,WDT32,WDT128,WINDIS,WDT,ICSP3,ICSP2,ICSP1
//////// Fuses: DEBUG,WRT,PROTECT,JTAG,EC,XT,HS,NOPR,DISUVREG,IOL1WAY,OSCIO
//////// Fuses: CKSFSM,CKSNOFSM,NOCKSFSM,FRC,FRC_PLL,PR,PR_PLL,SOSC,LPRC
//////// Fuses: FRC_PS,PLL1,PLL2,PLL3,PLL4,PLL5,PLL6,PLL10,PLL12,IESO,NOWPFP
//////// Fuses: WPFP,WPDIS,WPCFG,WPBEG,WPEND
//////// 
#if (!defined(__PCD__)||defined(__ISNT_CCS__))
#define _bif
#define int8 char
#define int16 int
#define int32 long
#define int48 long
#define int64 long long
#define float32 float
#define float48 float
#define float64 double
#define int1 char

#endif
////////////////////////////////////////////////////////////////// PIN_SELECT
// #pin_select function=pin
// Valid Pins: 
//    PIN_B0,PIN_B1,PIN_D8,PIN_D10,PIN_D9,PIN_D15,PIN_B6,PIN_B7,PIN_B8,PIN_B9,
//    PIN_F4,PIN_D0,PIN_D11,PIN_B2,PIN_B14,PIN_F8,PIN_F3,PIN_F5,PIN_B5,PIN_G8,
//    PIN_D5,PIN_G6,PIN_D3,PIN_D2,PIN_D1,PIN_D4,PIN_G7,PIN_G9,PIN_B4,PIN_B15,
//    PIN_F2,PIN_E8,PIN_E9,PIN_A15,PIN_A14,PIN_C14,PIN_C1,PIN_C3,PIN_D12,PIN_D14,
//    PIN_F7,PIN_F6
// Input Functions: 
//    INT1,INT2,INT3,INT4,T1CK,T2CK,T3CK,T4CK,T5CK,IC1,IC2,IC3,IC4,IC5,IC6,IC7,
//    IC8,IC9,OCFA,OCFB,SCK1IN,SDI1,SS1IN,SCK2IN,SDI2,SS2IN,SCK3IN,SDI3,SS3IN,
//    U1CTS,U1RX,U2CTS,U2RX,U3CTS,U3RX,U4CTS,U4RX
// Output Functions: 
//    NULL,C1OUT,C2OUT,U1TX,U1RTS,U2TX,U2RTS,SDO1,SCK1OUT,SS1OUT,SDO2,SCK2OUT,
//    SS2OUT,OC1,OC2,OC3,OC4,OC5,OC6,OC7,OC8,U3TX,U3RTS,U4TX,U4RTS,SDO3,SCK3OUT,
//    SS3OUT,OC9
//

////////////////////////////////////////////////////////////////// I/O
// Discrete I/O Functions: SET_TRIS_x(), OUTPUT_x(), INPUT_x(),
//                         SET_PULLUP(), INPUT(),
//                         OUTPUT_LOW(), OUTPUT_HIGH(),
//                         OUTPUT_FLOAT(), OUTPUT_BIT()
// Discrete I/O Prototypes:
_bif void set_tris_a(unsigned int16 value);  
_bif void set_tris_b(unsigned int16 value);  
_bif void set_tris_c(unsigned int16 value);  
_bif void set_tris_d(unsigned int16 value);  
_bif void set_tris_e(unsigned int16 value);  
_bif void set_tris_f(unsigned int16 value);  
_bif void set_tris_g(unsigned int16 value);  
_bif void set_open_drain_a(unsigned int16 value); 
_bif void set_open_drain_b(unsigned int16 value); 
_bif void set_open_drain_c(unsigned int16 value); 
_bif void set_open_drain_d(unsigned int16 value); 
_bif void set_open_drain_e(unsigned int16 value); 
_bif void set_open_drain_f(unsigned int16 value); 
_bif void set_open_drain_g(unsigned int16 value); 
_bif unsigned int16 get_tris_a(void);  
_bif unsigned int16 get_tris_b(void);  
_bif unsigned int16 get_tris_c(void);  
_bif unsigned int16 get_tris_d(void);  
_bif unsigned int16 get_tris_e(void);  
_bif unsigned int16 get_tris_f(void);  
_bif unsigned int16 get_tris_g(void);  
_bif void output_a(unsigned int16 value);  
_bif void output_b(unsigned int16 value);  
_bif void output_c(unsigned int16 value);  
_bif void output_d(unsigned int16 value);  
_bif void output_e(unsigned int16 value);  
_bif void output_f(unsigned int16 value);  
_bif void output_g(unsigned int16 value);  
_bif unsigned int16 input_a(void);  
_bif unsigned int16 input_b(void);  
_bif unsigned int16 input_c(void);  
_bif unsigned int16 input_d(void);  
_bif unsigned int16 input_e(void);  
_bif unsigned int16 input_f(void);  
_bif unsigned int16 input_g(void);  
_bif int16 input_change_a(void);  
_bif int16 input_change_b(void);  
_bif int16 input_change_c(void);  
_bif int16 input_change_d(void);  
_bif int16 input_change_e(void);  
_bif int16 input_change_f(void);  
_bif int16 input_change_g(void);  
_bif void set_pullup(int1 state);   
_bif void set_pullup(int1 state, unsigned int16 pin); 
_bif void set_pulldown(int1 state); 
_bif void set_pulldown(int1 state, unsigned int16 pin);  
_bif int1 input(unsigned int16 pin);
_bif int1 input_state(unsigned int16 pin);
_bif void output_low(unsigned int16 pin);
_bif void output_high(unsigned int16 pin);
_bif void output_toggle(unsigned int16 pin);
_bif void output_bit(unsigned int16 pin, int1 level);
_bif void output_float(unsigned int16 pin);
_bif void output_drive(unsigned int16 pin);
// Constants used to identify pins in the above are:

#define PIN_A9  5657
#define PIN_A10  5658
#define PIN_A14  5662
#define PIN_A15  5663

#define PIN_B0  5712
#define PIN_B1  5713
#define PIN_B2  5714
#define PIN_B3  5715
#define PIN_B4  5716
#define PIN_B5  5717
#define PIN_B6  5718
#define PIN_B7  5719
#define PIN_B8  5720
#define PIN_B9  5721
#define PIN_B10  5722
#define PIN_B11  5723
#define PIN_B12  5724
#define PIN_B13  5725
#define PIN_B14  5726
#define PIN_B15  5727

#define PIN_C1  5777
#define PIN_C3  5779
#define PIN_C12  5788
#define PIN_C13  5789
#define PIN_C14  5790
#define PIN_C15  5791

#define PIN_D0  5840
#define PIN_D1  5841
#define PIN_D2  5842
#define PIN_D3  5843
#define PIN_D4  5844
#define PIN_D5  5845
#define PIN_D6  5846
#define PIN_D7  5847
#define PIN_D8  5848
#define PIN_D9  5849
#define PIN_D10  5850
#define PIN_D11  5851
#define PIN_D12  5852
#define PIN_D13  5853
#define PIN_D14  5854
#define PIN_D15  5855

#define PIN_E0  5904
#define PIN_E1  5905
#define PIN_E2  5906
#define PIN_E3  5907
#define PIN_E4  5908
#define PIN_E5  5909
#define PIN_E6  5910
#define PIN_E7  5911
#define PIN_E8  5912
#define PIN_E9  5913

#define PIN_F0  5968
#define PIN_F1  5969
#define PIN_F2  5970
#define PIN_F3  5971
#define PIN_F4  5972
#define PIN_F5  5973
#define PIN_F6  5974
#define PIN_F7  5975
#define PIN_F8  5976

#define PIN_G0  6032
#define PIN_G1  6033
#define PIN_G2  6034
#define PIN_G3  6035
#define PIN_G6  6038
#define PIN_G7  6039
#define PIN_G8  6040
#define PIN_G9  6041

////////////////////////////////////////////////////////////////// Useful defines
#define FALSE 0
#define TRUE 1

#define BYTE unsigned int8
#define BOOLEAN int1

#define getc getch
#define fgetc getch
#define getchar getch
#define putc putchar
#define fputc putchar
#define fgets gets
#define fputs puts

////////////////////////////////////////////////////////////////// UART
// UART Prototypes:
_bif void setup_uart(unsigned int32 baud);
_bif void setup_uart(unsigned int32 baud, unsigned int8 stream);
_bif void setup_uart(unsigned int32 baud, unsigned int8 stream, unsigned int32 clock);
_bif void set_uart_speed(unsigned int32 baud);
_bif void set_uart_speed(unsigned int32 baud, unsigned int8 stream);
_bif void set_uart_speed(unsigned int32 baud, unsigned int8 stream, unsigned int32 clock);
// Constants used in setup_uart() are:
// FALSE - Turn UART off
// TRUE  - Turn UART on
#define UART_ADDRESS           2
#define UART_DATA              4
#define UART_AUTODETECT        8
#define UART_AUTODETECT_NOWAIT 9
#define UART_WAKEUP_ON_RDA     10
#define UART_SEND_BREAK        13

////////////////////////////////////////////////////////////////// WDT
// Watch Dog Timer Functions: SETUP_WDT() and RESTART_WDT()
// WDT Prototypes:
_bif void setup_wdt(unsigned int8 mode);
_bif void restart_wdt(void);
// Constants used for SETUP_WDT() are:
#define WDT_ON      1
#define WDT_OFF     0

#define  WDT_1MS    0x002
#define  WDT_2MS    0x003
#define  WDT_4MS    0x004
#define  WDT_8MS    0x005
#define  WDT_16MS   0x006
#define  WDT_32MS   0x007
#define  WDT_64MS   0x008
#define  WDT_128MS  0x009
#define  WDT_256MS  0x00A
#define  WDT_512MS  0x00B
#define  WDT_1S     0x00C
#define  WDT_2S     0x00D
#define  WDT_4S     0x00E
#define  WDT_8S     0x00F
#define  WDT_16S    0x010
#define  WDT_33S    0x011
#define  WDT_65S    0x030
#define  WDT_131S   0x031

////////////////////////////////////////////////////////////////// Control
// Control Functions:  RESET_CPU(), SLEEP(), RESTART_CAUSE()
// Prototypes:
_bif unsigned int8 restart_cause(void); 
_bif void reset_cpu(void);
_bif void sleep(void);
_bif void sleep(unsigned int8 mode);
// Constants passed into RESTART_CAUSE() are:
#define RESTART_POWER_UP      0
#define RESTART_BROWNOUT      1
#define RESTART_WATCHDOG      4
#define RESTART_SOFTWARE      6
#define RESTART_MCLR          7
#define RESTART_ILLEGAL_OP    14
#define RESTART_TRAP_CONFLICT 15
#define RESTART_NONE          16 //No restart occurred, most common cause for returning this is restart_cause() was called multiple times, or wake-up from sleep from interrupt. 

// Constants passed into SLEEP() are:
#define SLEEP_FULL      0  // Default
#define SLEEP_IDLE      1  // Clock and peripherals don't stop



////////////////////////////////////////////////////////////////// INTERNAL RC
// Oscillator Prototypes:
_bif void setup_oscillator(unsigned int8 type, unsigned int32 target);
_bif void setup_oscillator(unsigned int8 type, unsigned int32 target, unsigned int32 source);
// Constants used in setup_oscillator() are:
#define OSC_INTERNAL     32   //Internal FRC and LPRC
#define OSC_CRYSTAL       1   //External Crystal
#define OSC_CLOCK         2   //External Oscillator
#define OSC_SECONDARY    16   //External SOSC

////////////////////////////////////////////////////////////////// Timer
// Timer Functions: SETUP_TIMERx, GET_TIMERx, GET_TIMERxy,
// SET_TIMERx, SET_TIMERxy
// Timer x Prototypes:
_bif void setup_timer1(unsigned int16 mode);
_bif void setup_timer1(unsigned int16 mode, unsigned int16 period);
_bif unsigned int16 get_timer1(void);
_bif void set_timer1(unsigned int16 value);
_bif void setup_timer2(unsigned int16 mode);  
_bif void setup_timer2(unsigned int16 mode, unsigned int16 period);  
_bif unsigned int16 get_timer2(void);  
_bif void set_timer2(unsigned int16 value);  
_bif void setup_timer3(unsigned int16 mode);  
_bif void setup_timer3(unsigned int16 mode, unsigned int16 period);   
_bif unsigned int16 get_timer3(void);   
_bif void set_timer3(unsigned int16 value);   
_bif unsigned int32 get_timer23(void);   
_bif void set_timer23(unsigned int32 value);   
_bif void setup_timer4(unsigned int16 mode);  
_bif void setup_timer4(unsigned int16 mode, unsigned int16 period);  
_bif unsigned int16 get_timer4(void);  
_bif void set_timer4(unsigned int16 value);  
_bif void setup_timer5(unsigned int16 mode);  
_bif void setup_timer5(unsigned int16 mode, unsigned int16 period);  
_bif unsigned int16 get_timer5(void);  
_bif void set_timer5(unsigned int16 value);  
_bif unsigned int32 get_timer45(void);  
_bif void set_timer45(unsigned int32 value);  
// Constants used for SETUP_TIMERx() are:
// Use one of the following
#define TMR_DISABLED                0x0000
#define TMR_INTERNAL                0x8000
#define TMR_EXTERNAL                0x8002       
#define TMR_EXTERNAL_SYNC           0x8006 //This only applies to Timer1       
#define TMR_EXTERNAL_RTC            0xC002 //This only applies to Timer1          

// One of the following may be or'd in with the above using |
#define TMR_DIV_BY_1                0x0000
#define TMR_DIV_BY_8                0x0010
#define TMR_DIV_BY_64               0x0020
#define TMR_DIV_BY_256              0x0030
// One of the following may be or'd in with the above using |
#define TMR_HALT_IDLE               0x2000
#define TMR_CONTINUE_IDLE           0x0000
// Any of the following may be or'd in with the above using |
#define TMR_32_BIT                  0x0008 //Only for even numbered timers  
#define TMR_GATE                    0x0040  

/////////////////////////////////////////////////////////// INPUT CAPTURE
// Functions: SETUP_CAPTURE, GET_CAPTURE, GET_CAPTURE32
// IC Prototypes:
_bif void setup_capture(unsigned int8 module, unsigned int16 mode);
_bif unsigned int16 get_capture(unsigned int8 module);
_bif unsigned int16 get_capture(unsigned int8 module, int1 wait);
_bif unsigned int32 get_capture32(unsigned int8 module);
_bif unsigned int32 get_capture32(unsigned int8 module, int1 wait);
// Constants used for SETUP_CAPTURE() are:
#define CAPTURE_OFF                 0x0000  // Capture OFF
#define CAPTURE_EE                  0x0001  // Capture Every Edge
#define CAPTURE_FE                  0x0002  // Capture Falling Edge
#define CAPTURE_RE                  0x0003  // Capture Rising Edge
#define CAPTURE_DIV_4               0x0004  // Capture Every 4th Rising Edge
#define CAPTURE_DIV_16              0x0005  // Capture Every 16th Rising Edge
#define CAPTURE_INTERRUPT_ONLY      0x0007  // Interrupt on Rising Edge when in Sleep or Idle

// The following defines can be ORed | with above to configure interrupts
#define INTERRUPT_EVERY_CAPTURE     0x0000  // Interrupt on every capture event
#define INTERRUPT_SECOND_CAPTURE    0x0020  // Interrupt on every second capture event
#define INTERRUPT_THIRD_CAPTURE     0x0040  // Interrupt on every third capture event
#define INTERRUPT_FOURTH_CAPTURE    0x0060  // Interrupt on every fourth capture event

// The following defines can be ORed | with above to select timer
#define CAPTURE_TIMER1              0x1000
#define CAPTURE_TIMER2              0x0400
#define CAPTURE_TIMER3              0x0000
#define CAPTURE_TIMER4              0x0800
#define CAPTURE_TIMER5              0x0C00
#define CAPTURE_SYSTEM_CLOCK        0x1C00

// The following defines can be ORed | with above to select idle operation mode
#define CAPTURE_HALT_IDLE           0x2000  // Capture module halts during idle mode
#define CAPTURE_CONTINUE_IDLE       0x0000  // Capture module continues during idle mode

// The following defines can be ORed | with above to select # of bits
#define CAPTURE_32_BIT              0x01000000  //Only used with odd number capture units
#define CAPTURE_16_BIT                       0

// The following defines can be ORed | with above and determines whether the next block
// of defines are the capture unit's trigger or syncronize source
#define CAPTURE_TRIGGER             0x00800000
#define CAPTURE_SYNCHRONIZE                  0

// The following defines can be ORed | with above and selects the capture unit's
// trigger or synchronization source
#define CAPTURE_TRIG_SYNC_OC1       0x00010000
#define CAPTURE_TRIG_SYNC_OC2       0x00020000
#define CAPTURE_TRIG_SYNC_OC3       0x00030000
#define CAPTURE_TRIG_SYNC_OC4       0x00040000
#define CAPTURE_TRIG_SYNC_OC5       0x00050000
#define CAPTURE_TRIG_SYNC_OC6       0x00060000
#define CAPTURE_TRIG_SYNC_OC7       0x00070000
#define CAPTURE_TRIG_SYNC_OC8       0x00080000
#define CAPTURE_TRIG_SYNC_OC9       0x00090000
#define CAPTURE_TRIG_SYNC_IC5       0x000A0000
#define CAPTURE_TRIG_SYNC_TIMER1    0x000B0000
#define CAPTURE_TRIG_SYNC_TIMER2    0x000C0000
#define CAPTURE_TRIG_SYNC_TIMER3    0x000D0000
#define CAPTURE_TRIG_SYNC_TIMER4    0x000E0000
#define CAPTURE_TRIG_SYNC_TIMER5    0x000F0000
#define CAPTURE_TRIG_SYNC_IC7       0x00120000
#define CAPTURE_TRIG_SYNC_IC8       0x00130000
#define CAPTURE_TRIG_SYNC_IC1       0x00140000
#define CAPTURE_TRIG_SYNC_IC2       0x00150000
#define CAPTURE_TRIG_SYNC_IC3       0x00160000
#define CAPTURE_TRIG_SYNC_IC4       0x00170000
#define CAPTURE_TRIG_SYNC_COMP1     0x00180000  //Trigger Source only
#define CAPTURE_TRIG_SYNC_COMP2     0x00190000  //Trigger Source only
#define CAPTURE_TRIG_SYNC_COMP3     0x001A0000  //Trigger Source only
#define CAPTURE_TRIG_SYNC_ADC       0x001B0000  //Trigger Source only
#define CAPTURE_TRIG_SYNC_CTMU      0x001C0000  //Trigger Source only
#define CAPTURE_TRIG_SYNC_IC6       0x001D0000
#define CAPTURE_TRIG_SYNC_IC9       0x001E0000
#define CAPTURE_TRIG_SYNC_NONE               0

/////////////////////////////////////////////////////////// OUTPUT COMPARE
// Functions: SETUP_COMPARE, SET_PWM_DUTY, SET_COMPARE_TIME
//            SET_PWM_PERIOD
// OC Prototypes:
_bif void setup_compare(unsigned int8 module, unsigned int32 mode);
_bif void set_pwm_duty(unsigned int8 module, unsigned int16 duty);
_bif void set_compare_time(unsigned int8 module, unsigned int16 ocr);
_bif void set_compare_time(unsigned int8 module, unsigned int16 ocr, unsigned int16 ocrs);
_bif void set_pwm_period(unsigned int8 module, unsigned int16 period);
// Constants used for SETUP_COMPARE() are:
#define COMPARE_OFF               0x0000  // Compare OFF
#define COMPARE_SET_ON_MATCH      0x0001  // Pin from low to high on match
#define COMPARE_CLR_ON_MATCH      0x0002  // Pin from high to low on match
#define COMPARE_TOGGLE            0x0003  // Pin will toggle on every match occurrence
#define COMPARE_SINGLE_PULSE      0x0004  // Pin will generate single pulse on first match
#define COMPARE_CONT_PULSE        0x0005  // Pin will pulse for every match
#define COMPARE_PWM_EDGE          0x0006
#define COMPARE_PWM_CENTER        0x0007

// The following defines can be ORed | with above
#define COMPARE_TIMER2            0x0000
#define COMPARE_TIMER3            0x0400
#define COMPARE_TIMER4            0x0800
#define COMPARE_TIMER5            0x0C00
#define COMPARE_TIMER1            0x1000
#define COMPARE_SYSTEM_CLOCK      0x1C00

#define COMPARE_FAULT0            0x0080
#define COMPARE_NO_FAULT0         0x0000

#define COMPARE_FAULT_CLEAR       0x80000000
#define COMPARE_FAULT_NEW         0x00000000
#define COMPARE_PWM_HIGH_ON_FAULT 0x40000000
#define COMPARE_PWM_LOW_ON_FAULT  0x00000000
#define COMPARE_FAULT_OUTPUT      0x20000000
#define COMPARE_INVERT_OC_PIN     0x10000000
#define COMPARE_32_BIT            0x01000000
#define COMPARE_TRIGGER           0x00800000
#define COMPARE_SYNCHRONIZE       0x00000000
#define COMPARE_OC_PIN_TRISTATED  0x00200000
#define COMPARE_TRIG_SYNC_SELF    0x001F0000
#define COMPARE_TRIG_SYNC_CAP9    0x001E0000
#define COMPARE_TRIG_SYNC_CAP6    0x001D0000
#define COMPARE_TRIG_SYNC_CTMU    0x001C0000
#define COMPARE_TRIG_SYNC_ADC     0x001B0000
#define COMPARE_TRIG_SYNC_COMP3   0x001A0000
#define COMPARE_TRIG_SYNC_COMP2   0x00190000
#define COMPARE_TRIG_SYNC_COMP1   0x00180000
#define COMPARE_TRIG_SYNC_CAP4    0x00170000
#define COMPARE_TRIG_SYNC_CAP3    0x00160000
#define COMPARE_TRIG_SYNC_CAP2    0x00150000
#define COMPARE_TRIG_SYNC_CAP1    0x00140000
#define COMPARE_TRIG_SYNC_CAP8    0x00130000
#define COMPARE_TRIG_SYNC_CAP7    0x00120000
#define COMPARE_TRIG_SYNC_TIMER5  0x000F0000
#define COMPARE_TRIG_SYNC_TIMER4  0x000E0000
#define COMPARE_TRIG_SYNC_TIMER3  0x000D0000
#define COMPARE_TRIG_SYNC_TIMER2  0x000C0000
#define COMPARE_TRIG_SYNC_TIMER1  0x000B0000
#define COMPARE_TRIG_SYNC_CAP5    0x000A0000
#define COMPARE_TRIG_SYNC_OC9     0x00090000
#define COMPARE_TRIG_SYNC_OC8     0x00080000
#define COMPARE_TRIG_SYNC_OC7     0x00070000
#define COMPARE_TRIG_SYNC_OC6     0x00060000
#define COMPARE_TRIG_SYNC_OC5     0x00050000
#define COMPARE_TRIG_SYNC_OC4     0x00040000
#define COMPARE_TRIG_SYNC_OC3     0x00030000
#define COMPARE_TRIG_SYNC_OC2     0x00020000
#define COMPARE_TRIG_SYNC_OC1     0x00010000
#define COMPARE_TRIG_SYNC_NONE    0x00000000

// The following defines can be ORed | with above to select idle operation mode
#define COMPARE_HALT_IDLE         0x2000  // Compare module halts during idle mode
#define COMPARE_CONTINUE_IDLE     0x0000  // Compare module continues during idle mode

// The following defines can be ORed | with above to set Trigger Status Mode
#define COMPARE_TRIGSTAT_HW_CLEAR 0x0008  // TRIGSTAT is cleared when OCxRS = OCxTMR or in software
#define COMPARE_TRIGSTAT_SOFTWARE 0x0000  // TRIGSTAT is cleared only in software

#bit OC1_TRIGSTAT = getenv("SFR:OC1CON2").6 
#bit OC2_TRIGSTAT = getenv("SFR:OC2CON2").6 
#bit OC3_TRIGSTAT = getenv("SFR:OC3CON2").6 
#bit OC4_TRIGSTAT = getenv("SFR:OC4CON2").6 
#bit OC5_TRIGSTAT = getenv("SFR:OC5CON2").6 
#bit OC6_TRIGSTAT = getenv("SFR:OC6CON2").6 
#bit OC7_TRIGSTAT = getenv("SFR:OC7CON2").6 
#bit OC8_TRIGSTAT = getenv("SFR:OC8CON2").6 
#bit OC9_TRIGSTAT = getenv("SFR:OC9CON2").6 

////////////////////////////////////////////////////////////////// SPI
// SPI Functions: SETUP_SPI, SPI_WRITE, SPI_READ, SPI_DATA_IS_IN
// SPI Prototypes:
_bif void setup_spi(unsigned int16 mode);
_bif void spi_write(unsigned int8 data);
_bif void spi_write(int1 wait, unsigned int8 data);
_bif void spi_write_16(unsigned int16 data);  
_bif void spi_write_16(int1 wait, unsigned int16 data);  
_bif unsigned int8 spi_read(void);
_bif unsigned int8 spi_read(unsigned int8 data);
_bif unsigned int16 spi_read_16(void);  
_bif unsigned int16 spi_read_16(unsigned int16 data);  
_bif int1 spi_data_is_in(void);
_bif void setup_spi2(unsigned int16 mode);  
_bif void spi_write2(unsigned int8 data);  
_bif void spi_write2(int1 wait, unsigned int8 data); 
_bif void spi_write2_16(unsigned int16 data);   
_bif void spi_write2_16(int1 wait, unsigned int16 data);   
_bif unsigned int8 spi_read2(void);  
_bif unsigned int8 spi_read2(unsigned int8 data);  
_bif unsigned int16 spi_read2_16(void);   
_bif unsigned int16 spi_read2_16(unsigned int16 data);   
_bif int1 spi_data_is_in2(void);  
_bif void setup_spi3(unsigned int16 mode);  
_bif void spi_write3(unsigned int8 data);  
_bif void spi_write3(int1 wait, unsigned int8 data); 
_bif void spi_write3_16(unsigned int16 data);   
_bif void spi_write3_16(int1 wait, unsigned int16 data);   
_bif unsigned int8 spi_read3(void);  
_bif unsigned int8 spi_read3(unsigned int8 data);  
_bif unsigned int16 spi_read3_16(void);   
_bif unsigned int16 spi_read3_16(unsigned int16 data);   
_bif int1 spi_data_is_in3(void);  
// Constants used in SETUP_SPI() are:
//      (or (via |) together constants from each group)
#define SPI_MASTER                 0x0020
#define SPI_SLAVE                  0x0000

#define SPI_SCK_IDLE_HIGH          0x0040
#define SPI_SCK_IDLE_LOW           0x0000

#define SPI_XMIT_L_TO_H            0x0100
#define SPI_XMIT_H_TO_L            0x0000

#define SPI_MODE_16B               0x0400
#define SPI_MODE_8B                0x0000

#define SPI_SAMPLE_AT_END          0x0200
#define SPI_SAMPLE_AT_MIDDLE       0x0000

#define SPI_SS_ENABLED             0x0000
#define SPI_SS_DISABLED            0x0080
 
//or (via |) one of the following when operating as MASTER 
#define SPI_CLK_DIV_1              0x001F 
#define SPI_CLK_DIV_2              0x001B 
#define SPI_CLK_DIV_3              0x0017 
#define SPI_CLK_DIV_4              0x001E 
#define SPI_CLK_DIV_5              0x000F 
#define SPI_CLK_DIV_6              0x000B 
#define SPI_CLK_DIV_7              0x0007 
#define SPI_CLK_DIV_8              0x0003 
#define SPI_CLK_DIV_12             0x0016 
#define SPI_CLK_DIV_16             0x001D 
#define SPI_CLK_DIV_20             0x000E 
#define SPI_CLK_DIV_24             0x000A 
#define SPI_CLK_DIV_28             0x0006 
#define SPI_CLK_DIV_32             0x0002 
#define SPI_CLK_DIV_48             0x0015 
#define SPI_CLK_DIV_64             0x001C 
#define SPI_CLK_DIV_80             0x000D 
#define SPI_CLK_DIV_96             0x0009 
#define SPI_CLK_DIV_112            0x0005 
#define SPI_CLK_DIV_128            0x0001 
#define SPI_CLK_DIV_192            0x0014 
#define SPI_CLK_DIV_256            0x0010 
#define SPI_CLK_DIV_320            0x000C 
#define SPI_CLK_DIV_384            0x0008 
#define SPI_CLK_DIV_448            0x0004 
#define SPI_CLK_DIV_512            0x0000 

//The following defines are provided for compatibility
#define SPI_L_TO_H         SPI_SCK_IDLE_LOW
#define SPI_H_TO_L         SPI_SCK_IDLE_HIGH

////////////////////////////////////////////////////////////////// ADC
// ADC Functions: SETUP_ADC(), SETUP_ADC_PORTS()
//                SET_ADC_CHANNEL(), READ_ADC()
// ADC Prototypes:
_bif void setup_adc(unsigned int32 mode);
_bif void setup_adc_ports(unsigned int32 pins);
_bif void setup_adc_ports(unsigned int32 pins, unsigned int16 reference);
_bif void set_adc_channel(unsigned int8 channel);
_bif void set_adc_channel(unsigned int8 channel, unsigned int8 neg_channel); 
_bif unsigned int16 read_adc(void);
_bif unsigned int16 read_adc(unsigned int8 mode);
_bif int1 adc_done(void);
// Constants used for SETUP_ADC() are:
// Clock is at ADCS<5:0> of ADCON3 Reg. (0x02A4)       
// Tad = (Tcy/2)*(ADCS<5:0>+1)       
#define ADC_OFF                 0x10000
#define ADC_CLOCK                0x0000
#define ADC_CLOCK_DIV_2          0x0001
#define ADC_CLOCK_DIV_4          0x0003
#define ADC_CLOCK_DIV_8          0x0007
#define ADC_CLOCK_DIV_16         0x000F
#define ADC_CLOCK_DIV_32         0x001F
#define ADC_CLOCK_DIV_64         0x003F   
#define ADC_CLOCK_INTERNAL       0x8000     // Internal

// One of the following may be OR'ed in with the above using |
// Auto-Sample Time bits
#define ADC_TAD_MUL_0            0x1F00
#define ADC_TAD_MUL_2            0x1D00
#define ADC_TAD_MUL_4            0x1B00
#define ADC_TAD_MUL_8            0x1700
#define ADC_TAD_MUL_16           0x0F00
#define ADC_TAD_MUL_31           0x0000

// Constants used in READ_ADC() are:
#define ADC_START_AND_READ       0x07
#define ADC_START_ONLY           0x01
#define ADC_READ_ONLY            0x06

// Constants used in SET_ADC_CHANNEL() second parameter are: 
#define VSS                      0    

// Constants used in SETUP_ADC_PORTS() are:
// First argument:
// OR together desired pins
#define NO_ANALOGS      0           // None
#define ALL_ANALOG      0xFFFFFFFF  // All
#define sAN0      0x00000001 //| B0
#define sAN1      0x00000002 //| B1
#define sAN2      0x00000004 //| B2
#define sAN3      0x00000008 //| B3
#define sAN4      0x00000010 //| B4
#define sAN5      0x00000020 //| B5
#define sAN6      0x00000040 //| B6
#define sAN7      0x00000080 //| B7
#define sAN8      0x00000100 //| B8
#define sAN9      0x00000200 //| B9
#define sAN10      0x00000400 //| B10
#define sAN11      0x00000800 //| B11
#define sAN12      0x00001000 //| B12
#define sAN13      0x00002000 //| B13
#define sAN14      0x00004000 //| B14
#define sAN15      0x00008000 //| B15

// Optional Second argument:
#define VSS_VDD            0x0000 // Range 0-Vdd
#define VREF_VREF          0x6000 // Range VrefL-VrefH
#define VREF_VDD           0x4000 // Range VrefL-Vdd
#define VSS_VREF           0x2000 // Range 0-VrefH

////////////////////////////////////////////////////////////////// COMP
// Comparator Functions: setup_comparator()
// Comparator Prototypes:
_bif void setup_comparator(unsigned int8 comparator, unsigned int16 mode);
// Constants used in setup_comparator() second param are: - first param is the comparator number.
#define NC_NC            0x00
#define CXINB_CXINA      0x8000
#define CXINC_CXINA      0x8001
#define CXIND_CXINA      0x8002
#define VBG2_CXINA       0x8003  
#define CXINB_VREF       0x8010
#define CXINC_VREF       0x8011
#define CXIND_VREF       0x8012
#define VBG2_VREF        0x8013  

      // OR in any of the following
#define COMP_INVERT      0x2000   // Invert output
#define COMP_OUTPUT      0x4000   // Output on pin
#define COMP_INTR        0x0040   // Generate interrupt on high
#define COMP_INTR_INV    0x0080   // Generate interrupt on low
#define COMP_INTR_CHANGE 0x00C0   // Generate interrupt on change

#bit C1OUT = 0x634.8
#bit C1ENV = 0x634.9  // User must clear
#bit C2OUT = 0x636.8
#bit C2ENV = 0x636.9  // User must clear
#bit C3OUT = 0x638.8
#bit C3ENV = 0x638.9  // User must clear

////////////////////////////////////////////////////////////////// VREF
// VREF Prototypes:
_bif void setup_vref(unsigned int16 mode);
// Constants used in setup_vref() are:
#define VREF_DISABLED  0x0000
#define VREF_VSS_VDD   0x0080
#define VREF_ANALOG    0x0090
// One of the following maybe OR'ed in with the above using |
#define VREF_HIGH      0x0080
#define VREF_LOW       0x00A0
// The following maybe OR'ed in with the above using |
#define VREF_OUTPUT    0x0040
// Or (with |) the above with a number 0-15

////////////////////////////////////////////////////////////////// PMP
// PMP Functions: setup_pmp(), pmp_address(), psp_read(), pmp_read(),
//                psp_write(), pmp_write(), psp_output_full(),
//                psp_input_full(), psp_overflow(), pmp_output_full(),
//                pmp_input_full(), pmp_overflow()
// PMP Prototypes:
_bif void setup_pmp(unsigned int32 mode, unsigned int16 address_mask);
_bif void pmp_address(unsigned int16 address);
_bif unsigned int8 pmp_read(void);
_bif void pmp_write(unsigned int8 data);
_bif int1 pmp_output_full(void);
_bif int1 pmp_input_full(void);
_bif int1 pmp_overflow(void);
_bif void setup_psp(unsigned int32 mode, unsigned int16 address_mask);
_bif unsigned int8 psp_read(void);
_bif unsigned int8 psp_read(unsigned int16 address);
_bif void psp_write(unsigned int8 data);
_bif void psp_write(unsigned int8 data, unsigned int16 address);
_bif int1 psp_output_full(void);
_bif int1 psp_input_full(void);
_bif int1 psp_overflow(void);
// Constants used in SETUP_PMP() and SETUP_PSP() are:
#define PAR_ENABLE                        0x8000
#define PAR_DISABLE                       0x0000
// One of the following may be OR'ed in with the above using |
#define PAR_STOP_IN_IDLE                  0x2000
#define PAR_CONTINUE_IN_IDLE              0x0000
// One of the following may be OR'ed in with the above using |
#define PAR_ADDR_NOT_MULTIPLEXED          0x0000
#define PAR_LOW_ADDR_MULTIPLEXED          0x0800
#define PAR_FULL_ADDR_MULTIPLEXED         0x1000
// Any of the following may be OR'ed in with the above using |
#define PAR_PTBEEN_ENABLE                 0x0400 // Byte Enable Port Enable bit 
#define PAR_PTWREN_ENABLE                 0x0200 // Write Enable Strobe bit
#define PAR_PTRDEN_ENABLE                 0x0100 // Read/Write Strobe Port bit
#define PAR_ALP_ACTIVE_HIGH               0x0020 // Address latch polarity high
#define PAR_BEP_ACTIVE_HIGH               0x0004 // Byte Enable Polarity 
#define PAR_WRSP_ACTIVE_HIGH              0x0002 // Write strobe Polarity bit
#define PAR_RDSP_ACTIVE_HIGH              0x0001 // Read strobe Polarity bit
// One of the following may be OR'ed in with the above using |
#define PAR_CS_XX                         0x0000 // Chip select pins used for address
#define PAR_CS_X1                         0x0008 // Chip select pin 1 used, active high 
#define PAR_CS_X0                         0x0000 // Chip select pin 1 used, active low 
#define PAR_CS_1X                         0x0050 // Chip select pin 2 used, active high
#define PAR_CS_0X                         0x0040 // Chip select pin 2 used, active low
#define PAR_CS_00                         0x0080 // Chip select pins 1,2 used, active low
#define PAR_CS_11                         0x0098 // Chip select pins 1,2 used, active high
#define PAR_CS_10                         0x0090 // Chip select pins 1,2 used, 1 is active low, 2 is high
#define PAR_CS_01                         0x0088 // Chip select pins 1,2 used, 1 is active high, 2 is low
// One of the following may be OR'ed in with the above using |
#define PAR_INTR_ON_3_RW_BUF          0x60000000 // Interrupt on write to Buffer 3 or read from Buffer 3 
#define PAR_NO_INTR_STALL_ACTIVATED   0x40000000 // No interrupt, processor stall activated 
#define PAR_INTR_ON_RW                0x20000000 // Interrupt on read write
#define PAR_NO_INTR                   0x00000000 // No interrupt
// One of the following may be OR'ed in with the above using |
#define PAR_PSP_AUTO_INC              0x18000000 // Read write buffers auto increment
#define PAR_DEC_ADDR                  0x10000000 // Decrement the address
#define PAR_INC_ADDR                  0x08000000 // Increment the address
#define PAR_NO_INC_DEC_ADDR           0x00000000 // No increment or decrement of the address
// One of the following may be OR'ed in with the above using |
#define PAR_MASTER_MODE_1             0x03000000 // Master mode 1
#define PAR_MASTER_MODE_2             0x02000000 // Master mode 2
#define PAR_ENHANCED_PSP_MODE         0x01000000 // Enhanced PSP control signals
#define PAR_LEGACY_PSP_MODE           0x00000000 // Legacy Parallel Slave Port
// One of the following may be OR'ed in with the above using |
#define PAR_WAITB1                    0x00000000 // 1 wait states for data setup R/W
#define PAR_WAITB2                    0x00400000 // 2 wait states for data setup R/W
#define PAR_WAITB3                    0x00800000 // 3 wait states for data setup R/W
#define PAR_WAITB4                    0x00C00000 // 4 wait states for data setup R/W
// One of the following may be OR'ed in with the above using |
#define PAR_WAITM0                    0x00000000 // 0 wait states 
#define PAR_WAITM1                    0x00040000 // 1 wait states 
#define PAR_WAITM2                    0x00080000 // 2 wait states 
#define PAR_WAITM3                    0x000C0000 // 3 wait states 
#define PAR_WAITM4                    0x00100000 // 4 wait states 
#define PAR_WAITM5                    0x00140000 // 5 wait states 
#define PAR_WAITM6                    0x00180000 // 6 wait states 
#define PAR_WAITM7                    0x001C0000 // 7 wait states 
#define PAR_WAITM8                    0x00200000 // 8 wait states 
#define PAR_WAITM9                    0x00240000 // 9 wait states 
#define PAR_WAITM10                   0x00280000 // 10 wait states 
#define PAR_WAITM11                   0x002C0000 // 11 wait states 
#define PAR_WAITM12                   0x00300000 // 12 wait states 
#define PAR_WAITM13                   0x00340000 // 13 wait states 
#define PAR_WAITM14                   0x00380000 // 14 wait states 
#define PAR_WAITM15                   0x003C0000 // 15 wait states 
// One of the following may be OR'ed in with the above using |
#define PAR_WAITE1                    0x00000000 // 1 wait states for data hold after strobe
#define PAR_WAITE2                    0x00010000 // 2 wait states for data hold after strobe
#define PAR_WAITE3                    0x00020000 // 3 wait states for data hold after strobe
#define PAR_WAITE4                    0x00030000 // 4 wait states for data hold after strobe

////////////////////////////////////////////////////////////////// CRC
// CRC Functions: setup_crc(), crc_init(), crc_calc16(),
//                crc_calc8(), crc_calc()
// CRC Prototypes:
_bif void setup_crc(unsigned int8 poly_terms, ...);
_bif void crc_init(unsigned int16 value);
_bif unsigned int16 crc_calc16(unsigned int16 data);
_bif unsigned int16 crc_calc16(unsigned int8 data, unsigned int8 width);
_bif unsigned int16 crc_calc16(unsigned int16 data, unsigned int8 width);
_bif unsigned int16 crc_calc16(unsigned int16 *ptr, unsigned int16 count);
_bif unsigned int16 crc_calc16(unsigned int8 *ptr, unsigned int16 count, unsigned int8 width);
_bif unsigned int16 crc_calc16(unsigned int16 *ptr, unsigned int16 count, unsigned int8 width);
_bif unsigned int8 crc_calc8(unsigned int8 data);
_bif unsigned int8 crc_calc8(unsigned int8 data, unsigned int8 width);
_bif unsigned int8 crc_calc8(unsigned int16 data, unsigned int8 width);
_bif unsigned int8 crc_calc8(unsigned int8 *ptr, unsigned int16 count);
_bif unsigned int8 crc_calc8(unsigned int8 *ptr, unsigned int16 count, unsigned int8 width);
_bif unsigned int8 crc_calc8(unsigned int16 *ptr, unsigned int16 count, unsigned int8 width);
_bif unsigned int16 crc_calc(unsigned int16 data);
_bif unsigned int16 crc_calc(unsigned int8 data, unsigned int8 width);
_bif unsigned int16 crc_calc(unsigned int16 data, unsigned int8 width);
_bif unsigned int16 crc_calc(unsigned int16 *ptr, unsigned int16 count);
_bif unsigned int16 crc_calc(unsigned int8 *ptr, unsigned int16 count, unsigned int8 width);
_bif unsigned int16 crc_calc(unsigned int16 *ptr, unsigned int16 count, unsigned int8 width);

////////////////////////////////////////////////////////////////// RTC
// RTC Functions: setup_rtc(), setup_rtc_alarm(), rtc_read(),
//                rtc_write(), rtc_alarm_read(), rtc_alarm_write()
// Structure used in read and write functions (pass pointer):
typedef struct {
   unsigned int8 tm_year;
   unsigned int8 tm_temp;  // Not used by built in functions, place holder only do not use
   unsigned int8 tm_mday;
   unsigned int8 tm_mon;
   unsigned int8 tm_hour;
   unsigned int8 tm_wday;
   unsigned int8 tm_sec;
   unsigned int8 tm_min;
   unsigned int8 tm_isdst; // Not used by built in functions
} rtc_time_t;
// RTC Prototypes:
_bif void setup_rtc(unsigned int16 mode, unsigned int8 calibration);
_bif void setup_rtc_alarm(unsigned int16 mode, unsigned int16 mask, unsigned int8 repeat);
_bif void rtc_read(rtc_time_t *time);
_bif void rtc_write(rtc_time_t *time);
_bif void rtc_alarm_read(rtc_time_t *time);
_bif void rtc_alarm_write(rtc_time_t *time);
// Constants used in setup_rtc() are:  // Second param is calibration
#define RTC_ENABLE           0x8000
#define RTC_DISABLE          0
#define RTC_OUTPUT_SECONDS   0x20400
#define RTC_OUTPUT_ALARM     0x00400
//
// Constants used in setup_rtc_alarm() first param are:  
#define RTC_ALARM_ENABLE     0x8000
#define RTC_ALARM_DISABLE    0
#define RTC_CHIME_ENABLE     0x4000
#define RTC_CHIME_DISABLE    0
// Constants used in setup_rtc_alarm() second param are:  // Third param is repeat#
#define RTC_ALARM_HALFSECOND 0x0000
#define RTC_ALARM_SECOND     0x0400
#define RTC_ALARM_10_SECONDS 0x0800
#define RTC_ALARM_MINUTE     0x0C00
#define RTC_ALARM_10_MINUTES 0x1000
#define RTC_ALARM_HOUR       0x1400
#define RTC_ALARM_DAY        0x1800
#define RTC_ALARM_WEEK       0x1C00
#define RTC_ALARM_MONTH      0x2000
#define RTC_ALARM_YEAR       0x2400

////////////////////////////////////////////////////////////////// BIF
// Built In Functions Prototypes
//
// Math Prototypes:
_bif signed int8 abs(signed int8 x);
_bif signed int16 abs(signed int16 x);
_bif signed int32 abs(signed int32 x);
_bif float32 abs(float32 x);
_bif unsigned int16 _mul(unsigned int8, unsigned int8);
_bif signed int16 _mul(signed int8, signed int8);
_bif unsigned int32 _mul(unsigned int16, unsigned int16);
_bif signed int32 _mul(signed int16, signed int16);
_bif signed int48 abs(signed int48 x);
_bif signed int64 abs(signed int64 x);
_bif float48 abs(float48 x);
_bif float64 abs(float64 x);
_bif unsigned int64 _mul(unsigned int32, unsigned int32);
_bif signed int64 _mul(signed int32, signed int32);
_bif unsigned int64 _mul(unsigned int48, unsigned int48);
_bif signed int64 _mul(signed int48, signed int48);

// Memory Manipulation Prototypes:
_bif void strcpy(char* dest, char* src);
_bif void memset(unsigned int8* destination, unsigned int8 value, unsigned int16 num);
_bif void memcpy(unsigned int8* destination, unsigned int8* source, unsigned int16 num);

// Data Manipulators Prototypes:
_bif int1 shift_left(unsigned int8* address, unsigned int8 bytes, int1 value);
_bif int1 shift_right(unsigned int8* address, unsigned int8 bytes, int1 value);
_bif void rotate_left(unsigned int8* address, unsigned int8 bytes);
_bif void rotate_right(unsigned int8* address, unsigned int8 bytes);
_bif void swap(unsigned int8 value);
_bif unsigned int8 make8(unsigned int16 var, unsigned int8 offset);
_bif unsigned int8 make8(unsigned int32 var, unsigned int8 offset);
_bif unsigned int16 make16(unsigned int8 varhigh, unsigned int8 varlow);
_bif unsigned int32 make32(unsigned int16 var1);
_bif unsigned int32 make32(unsigned int16 var1, unsigned int16 var2);
_bif unsigned int32 make32(unsigned int16 var1, unsigned int8 var2);
_bif unsigned int32 make32(unsigned int16 var1, unsigned int8 var2, unsigned int8 var3);
_bif unsigned int32 make32(unsigned int8 var1);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int8 var2);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int8 var2, unsigned int8 var3);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int8 var2, unsigned int8 var3, unsigned int8 var4);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int16 var2);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int16 var2, unsigned int8 var3);
_bif unsigned int32 make32(unsigned int8 var1, unsigned int8 var2, unsigned int16 var3);
_bif void bit_set(unsigned int8 var, unsigned int8 bit);
_bif void bit_set(unsigned int16 var, unsigned int8 bit);
_bif void bit_set(unsigned int32 var, unsigned int8 bit);
_bif void bit_clear(unsigned int8 var, unsigned int8 bit);
_bif void bit_clear(unsigned int16 var, unsigned int8 bit);
_bif void bit_clear(unsigned int32 var, unsigned int8 bit);
_bif int1 bit_test(unsigned int8 var, unsigned int8 bit);
_bif int1 bit_test(unsigned int16 var, unsigned int8 bit);
_bif int1 bit_test(unsigned int32 var, unsigned int8 bit);
_bif void bit_set(unsigned int48 var, unsigned int8 bit);
_bif void bit_set(unsigned int64 var, unsigned int8 bit);
_bif void bit_clear(unsigned int48 var, unsigned int8 bit);
_bif void bit_clear(unsigned int64 var, unsigned int8 bit);
_bif int1 bit_test(unsigned int48 var, unsigned int8 bit);
_bif int1 bit_test(unsigned int64 var, unsigned int8 bit);
_bif unsigned int8 bit_first(int1 value, unsigned int16 var);
_bif unsigned int8 bit_last(int16 var);
_bif unsigned int8 bit_last(int1 value, int16 var);

// #use delay() Prototypes:
_bif void delay_cycles(unsigned int16 count);
_bif void delay_ms(unsigned int16 time);
_bif void delay_us(unsigned int16 time);

// #use rs232() Prototypes:
_bif void putchar(char cdata);
_bif void putchar(char cdata, unsigned int8 stream);
_bif void puts(char* string);
_bif void puts(char* string, unsigned int8 stream);
_bif char getch(void);
_bif char getch(unsigned int8 stream);
_bif void gets(char* string);
_bif void gets(char* string, unsigned int8 stream);
_bif int1 kbhit(void);
_bif int1 kbhit(unsigned int8 stream);
_bif void printf(char* string, ...);
_bif void fprintf(unsigned int8 stream, char* string, ...);
_bif void putc_send(void);
_bif void fputc_send(unsigned int8 stream);
_bif int1 rcv_buffer_full(void);
_bif int1 rcv_buffer_full(unsigned int8 stream);
_bif unsigned int16 rcv_buffer_bytes(void);
_bif unsigned int16 rcv_buffer_bytes(unsigned int8 stream);
_bif int1 tx_buffer_full(void);
_bif int1 tx_buffer_full(unsigned int8 stream);
_bif unsigned int16 tx_buffer_bytes(void);
_bif unsigned int16 tx_buffer_bytes(unsigned int8 stream);
_bif unsigned int8 linbus_header(unsigned int8 identifier);
_bif unsigned int8 linbus_header(unsigned int8 stream, unsigned int8 identifier);
_bif int1 linbus_header_hit(void);
_bif int1 linbus_header_hit(unsigned int8 stream);
_bif unsigned int8 linbus_header_get(void);
_bif unsigned int8 linbus_header_get(unsigned int8 stream);
_bif unsigned int8 linbus_rx_response(unsigned int8 *DataPtr, unsigned int8 Count);
_bif unsigned int8 linbus_rx_response(unsigned int8 stream, unsigned int8 *DataPtr, unsigned int8 Count);
_bif void linbus_tx_response(unsigned int8 *DataPtr, unsigned int8 Count);
_bif void linbus_tx_response(unsigned int8 stream, unsigned int8 *DataPtr, unsigned int8 Count);
_bif void linbus_checksum_type(unsigned int8 type);
_bif void linbus_checksum_type(unsigned int8 stream, unsigned int8 type);

// #use i2c() Prototypes:
_bif unsigned int8 i2c_read(void);
_bif unsigned int8 i2c_read(unsigned int8 ack);
_bif unsigned int8 i2c_read(unsigned int8 stream, unsigned int8 ack);
_bif int1 i2c_write(unsigned int8 data);
_bif int1 i2c_write(unsigned int8 stream, unsigned int8 data);
_bif void i2c_start(void);
_bif void i2c_start(unsigned int8 stream);
_bif void i2c_start(unsigned int8 stream, unsigned int8 restart);
_bif void i2c_stop(void);
_bif void i2c_stop(unsigned int8 stream);
_bif int8 i2c_isr_state(void);
_bif void i2c_slaveaddr(unsigned int8 addr);
_bif void i2c_slaveaddr(unsigned int8 stream, unsigned int8 addr);
_bif int1 i2c_poll(void);
_bif int1 i2c_poll(unsigned int8 stream);
_bif void i2c_init(unsigned int32 baud);
_bif void i2c_init(unsigned int8 stream, unsigned int32 baud);
_bif unsigned int8 i2c_transfer(unsigned int8 Address, unsigned int8 *wData, unsigned int8 wCount);
_bif unsigned int8 i2c_transfer(unsigned int8 Address, unsigned int8 *wData, unsigned int8 wCount, unsigned int8 *rData, unsigned int8 *rCount);
_bif unsigned int8 i2c_transfer(unsigned int8 stream, unsigned int8 Address, unsigned int8 *wData, unsigned int8 wCount);
_bif unsigned int8 i2c_transfer(unsigned int8 stream, unsigned int8 Address, unsigned int8 *wData, unsigned int8 wCount, unsigned int8 *rData, unsigned int8 *rCount);
_bif unsigned int8 i2c_transfer_out(unsigned int8 Address, unsigned int8 *wData, unsigned int8 wCount);
_bif unsigned int8 i2c_transfer_out(unsigned int8 stream, unsigned int8 Address, unsigned int8 *wData, unsigned int8 wCount);
_bif unsigned int8 i2c_transfer_in(unsigned int8 Address, unsigned int8 *rData, unsigned int8 rCount);
_bif unsigned int8 i2c_transfer_in(unsigned int8 stream, unsigned int8 Address, unsigned int8 *rData, unsigned int8 rCount);

// #use spi() Prototypes:
_bif unsigned int8 spi_xfer(void);
_bif unsigned int16 spi_xfer(void);
_bif unsigned int32 spi_xfer(void);
_bif unsigned int8 spi_xfer(unsigned int8 data);
_bif unsigned int16 spi_xfer(unsigned int16 data);
_bif unsigned int32 spi_xfer(unsigned int32 data);
_bif unsigned int8 spi_xfer(unsigned int8 stream, unsigned int8 data);
_bif unsigned int16 spi_xfer(unsigned int8 stream, unsigned int16 data);
_bif unsigned int32 spi_xfer(unsigned int8 stream, unsigned int32 data);
_bif unsigned int8 spi_xfer(unsigned int8 stream, unsigned int8 data, unsigned int8 bits);
_bif unsigned int16 spi_xfer(unsigned int8 stream, unsigned int16 data, unsigned int8 bits);
_bif unsigned int32 spi_xfer(unsigned int8 stream, unsigned int32 data, unsigned int8 bits);
_bif void spi_init(unsigned int32 baud);
_bif void spi_init(unsigned int8 stream, unsigned int32 baud);
_bif void spi_speed(unsigned int32 baud);
_bif void spi_speed(unsigned int8 stream, unsigned int32 baud);
_bif void spi_speed(unsigned int8 stream, unsigned int32 baud, unsigned int32 clock);
_bif void spi_prewrite(unsigned int8 data);
_bif void spi_prewrite(unsigned int16 data);
_bif void spi_prewrite(unsigned int32 data);
_bif void spi_prewrite(unsigned int8, unsigned int8 data);
_bif void spi_prewrite(unsigned int8, unsigned int16 data);
_bif void spi_prewrite(unsigned int8, unsigned int32 data);
_bif unsigned int8 spi_xfer_in(void);
_bif unsigned int16 spi_xfer_in(void);
_bif unsigned int32 spi_xfer_in(void);
_bif unsigned int8 spi_xfer_in(unsigned int8 bits);
_bif unsigned int16 spi_xfer_in(unsigned int8 bits);
_bif unsigned int32 spi_xfer_in(unsigned int8 bits);
_bif unsigned int8 spi_xfer_in(unsigned int8 stream, unsigned int8 bits);
_bif unsigned int16 spi_xfer_in(unsigned int8 stream, unsigned int8 bits);
_bif unsigned int32 spi_xfer_in(unsigned int8 stream, unsigned int8 bits);
_bif void spi_transfer(unsigned int8 *wData, unsigned int8 *rData, unsigned int16 Count);
_bif void spi_transfer(unsigned int8 stream, unsigned int8 *wData, unsigned int8 *rData, unsigned int16 Count);
_bif void spi_transfer_write(unsigned int8 *wData, unsigned int16 Count);
_bif void spi_transfer_write(unsigned int8 stream, unsigned int8 *wData, unsigned int16 Count);
_bif void spi_transfer_read(unsigned int8 *rData, unsigned int16 Count);
_bif void spi_transfer_read(unsigned int8 stream, unsigned int8 *rData, unsigned int16 Count);

// #use rtos() Prototypes:
_bif void rtos_run(void);
_bif void rtos_yield(void);
_bif void rtos_enable(unsigned int8 task);
_bif void rtos_disable(unsigned int8 task);
_bif void rtos_terminate(void);
_bif void rtos_await(int1 flag);
_bif void rtos_wait(unsigned int8 sem);
_bif void rtos_signal(unsigned int8 sem);
_bif void rtos_msg_send(unsigned int8 task, unsigned int8 msg);
_bif unsigned int8 rtos_msg_read(void);
_bif unsigned int8 rtos_msg_poll(void);
_bif int1 rtos_overrun(unsigned int8 task);
_bif void rtos_stats(unsigned int8 task, unsigned int8* stat);

// #use timer() Prototypes:
_bif unsigned int8 get_ticks(void);
_bif unsigned int16 get_ticks(void);
_bif unsigned int32 get_ticks(void);
_bif unsigned int64 get_ticks(void);
_bif unsigned int8 get_ticks(unsigned int8 stream);
_bif unsigned int16 get_ticks(unsigned int8 stream);
_bif unsigned int32 get_ticks(unsigned int8 stream);
_bif unsigned int64 get_ticks(unsigned int8 stream);
_bif void set_ticks(unsigned int8 value);
_bif void set_ticks(unsigned int16 value);
_bif void set_ticks(unsigned int32 value);
_bif void set_ticks(unsigned int64 value);
_bif void set_ticks(unsigned int8 stream, unsigned int8 value);
_bif void set_ticks(unsigned int8 stream, unsigned int16 value);
_bif void set_ticks(unsigned int8 stream, unsigned int32 value);
_bif void set_ticks(unsigned int8 stream, unsigned int64 value);

// #use pwm() Prototypes:
_bif void pwm_on(void);
_bif void pwm_on(unsigned int8 stream);
_bif void pwm_off(void);
_bif void pwm_off(unsigned int8 stream);
_bif void pwm_set_duty(unsigned int16 duty);
_bif void pwm_set_duty(unsigned int8 stream, unsigned int16 duty);
_bif void pwm_set_duty_percent(unsigned int16 percent);
_bif void pwm_set_duty_percent(unsigned int8 stream, unsigned int16 percent);
_bif void pwm_set_frequency(unsigned int32 frequency);
_bif void pwm_set_frequency(unsigned int8 stream, unsigned int32 frequency);
_bif unsigned int16 pwm_get_duty_period(void);
_bif unsigned int16 pwm_get_duty_period(unsigned int8 stream);

// #use capture() Prototypes:
_bif unsigned int16 get_capture_time(void);
_bif unsigned int16 get_capture_time(unsigned int8 stream);
_bif int1 get_capture_event(void);
_bif int1 get_capture_event(unsigned int8 stream);

// Environment Prototypes:
//_bif unsigned int8 getenv(char* cstring);

// Address Prototypes:
#ifndef __ADDRESS__
 #define __ADDRESS__ unsigned int32
#endif
_bif void goto_address(__ADDRESS__ address);
_bif __ADDRESS__ label_address(__ADDRESS__ label);

// Program Memory Prototypes:
_bif void read_program_memory(__ADDRESS__ address, unsigned int8* dataptr, unsigned int16 count);
_bif void erase_program_memory(__ADDRESS__ address);
_bif void write_program_memory(__ADDRESS__ address, unsigned int8* dataptr, unsigned int16 count);
_bif void read_configuration_memory(unsigned int8* dataptr, unsigned int8 count);
_bif void write_configuration_memory(unsigned int8* dataptr, unsigned int8 count);

// #use touchpad() Prototypes:
_bif void touchpad_state(unsigned int8 state);
_bif char touchpad_getc(void);
_bif int1 touchpad_hit(void);
////////////////////////////////////////////////////////////////// INT
// Interrupt Functions: ENABLE_INTERRUPTS(), DISABLE_INTERRUPTS(),
//                      CLEAR_INTERRUPT(), INTERRUPT_ACTIVE(),
//                      EXT_INT_EDGE()
// INT Prototypes:
_bif void enable_interrupts(unsigned int16 interrupt);
_bif void disable_interrupts(unsigned int16 interrupt);
_bif void clear_interrupt(unsigned int16 interrupt);
_bif int1 interrupt_active(unsigned int16 interrupt);
_bif int1 interrupt_enabled(unsigned int16 interrupt);
_bif void ext_int_edge(unsigned int8 source, unsigned int8 edge);
_bif void jump_to_isr(unsigned int16 address);
// Constants used in EXT_INT_EDGE() are:
#define L_TO_H              0x40
#define H_TO_L                 0
//
// Constants used in other interrupt functions are:
#if getenv("VERSION") > 5.061
#define INTR_GLOBAL              0x0800
#define GLOBAL                   0x0800 // For compatibility with PIC16/18
#define INTR_NORMAL              0x1000 
#define INTR_ALTERNATE           0x2000 
#define INTR_LEVEL0              0x3000
#define INTR_LEVEL1              0x3001
#define INTR_LEVEL2              0x3002
#define INTR_LEVEL3              0x3003
#define INTR_LEVEL4              0x3004
#define INTR_LEVEL5              0x3005
#define INTR_LEVEL6              0x3006
#define INTR_LEVEL7              0x3007
#else
#define INTR_GLOBAL              0x0400
#define GLOBAL                   0x0400 // For compatibility with PIC16/18
#define INTR_NORMAL              0x0100 
#define INTR_ALTERNATE           0x0200 
#define INTR_LEVEL0              0x0500
#define INTR_LEVEL1              0x0501
#define INTR_LEVEL2              0x0502
#define INTR_LEVEL3              0x0503
#define INTR_LEVEL4              0x0504
#define INTR_LEVEL5              0x0505
#define INTR_LEVEL6              0x0506
#define INTR_LEVEL7              0x0507
#endif

#define INTR_CN_PIN              0x8000  // or in a PIN_xx constant (enable/disable only)

#define INT_OSCFAIL               1
#define INT_ADDRERR               2
#define INT_STACKERR              3
#define INT_MATHERR               4
#define INT_EXT0                  6
#define INT_IC1                   7
#define INT_OC1                   8
#define INT_TIMER1                9
#define INT_IC2                   70
#define INT_OC2                   71
#define INT_TIMER2                72
#define INT_TIMER3                73
#define INT_SPI1E                 74
#define INT_SPI1                  75
#define INT_RDA                   76
#define INT_TBE                   77
#define INT_ADC1                  78
#define INT_SI2C                  81
#define INT_MI2C                  82
#define INT_CNI                   84
#define INT_EXT1                  85
#define INT_IC7                   87
#define INT_IC8                   88
#define INT_OC3                   90
#define INT_OC4                   91
#define INT_TIMER4                92
#define INT_TIMER5                93
#define INT_EXT2                  94
#define INT_RDA2                  95
#define INT_TBE2                  96
#define INT_SPI2E                 97
#define INT_SPI2                  98
#define INT_IC3                   102
#define INT_IC4                   103
#define INT_IC5                   104
#define INT_IC6                   105
#define INT_OC5                   106
#define INT_OC6                   107
#define INT_OC7                   108
#define INT_OC8                   109
#define INT_SI2C2                 114
#define INT_MI2C2                 115
#define INT_EXT3                  118
#define INT_EXT4                  119
#define INT_UART1E                130
#define INT_UART2E                131
#define INT_SPI3                  137
#define INT_UART3E                141
#define INT_RDA3                  142
#define INT_TBE3                  143
#define INT_UART4E                144
#define INT_RDA4                  145
#define INT_TBE4                  146
#define INT_USB                   147
#define INT_SI2C3                 148
#define INT_MI2C3                 149
#define INT_COMP                  152
#define INT_OC9                   162
#define INT_IC9                   163
#define INT_PMP                   164
#define INT_SPI3E                 172
#define INT_RTC                   173
#define INT_CRC                   174
#define INT_CTMU                  176
#define INT_LVD                   179

#list
