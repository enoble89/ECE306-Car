//------------------------------------------------------------------------------
//  File Name : macros.h
//
//  Description: This file contains the macros to be used in other files
//
//  Evan Noble
//  Jan 2016
//  Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
#define WAIT_TIME               (5)
#define SMALL                   (50) 
#define MEDIUM_SMALL            (100)  
#define MEDIUM                  (150)
#define MEDIUM_BIG              (200)
#define BIG                     (250)
#define VERY_BIG                (1000)
#define INCREASE             (0x01)
#define ON                   (0x01)
#define BLOCK_1              (0x01)   
#define BLOCK_2              (0x02)   
#define BLOCK_3              (0x03)
#define BLOCK_4              (0x04)
#define MAX_CHAR             (0x0B)
#define CLEAR                (0x00)
#define CLEAR_PIN            (0x00)
#define ALWAYS                  (1)
#define CNTL_STATE_INDEX        (3) // Control States
#define SW1                  (0x01) // Switch 1
#define SW2                  (0x02) // Switch 2
#define CNTL_STATE_INDEX        (3)
// LCD
#define LCD_HOME_L1	        0x80
#define LCD_HOME_L2         	0xA0
#define LCD_HOME_L3         	0xC0
#define LCD_HOME_L4         	0xE0
//Port1
#define V_DETECT_R          (0x01)//
#define V_DETECT_L          (0x02)//
#define IR_LED              (0x04)//
#define V_THUMB             (0x08)//
#define SPI_CS_LCD          (0x10) // LCD Chip Select 
#define RESET_LCD           (0x20) // LCD Reset
#define SIMO_B              (0x40) // SPI mode - slave in/master out of USCI_B0 
#define SOMI_B              (0x80) // SPI mode - slave out/master in of USCI_B0
//Port2
#define USB_TXD                 (0x01) // 
#define USB_RXD                 (0x02) // 
#define SPI_SCK                 (0x04) // 
#define UNKNOWN1                 (0x08) //
#define UNKNOWN2                 (0x10) //
#define CPU_TXD                 (0x20) //
#define CPU_RXD                 (0x40) //
#define UNKNOWN3                 (0x80) // 
//Port3
#define X                 (0x01) // 
#define Y                 (0x02) // 
#define ACC_Z                 (0x04) // 
#define LCD_BACKLITE                 (0x08) //
#define R_FORWARD                 (0x10) //
#define R_REVERSE                 (0x20) //
#define L_FORWARD                 (0x40) //
#define L_REVERSE                 (0x80) // 
//Port4
#define SW1                 (0x01) // 
#define SW2                 (0x02) //
//PortJ
#define IOT_WAKEUP                 (0x01) // 
#define IOT_FACTORY                 (0x02) // 
#define IOT_STA_MINIAP                 (0x04) // 
#define IOT_RESET                 (0x08) //
