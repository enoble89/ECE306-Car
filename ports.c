//------------------------------------------------------------------------------
//  File Name : ports.c
//
//  Description:  This file contains the Initialization for all port pins
//
//  Evan Noble
//  Jan 2016
//  Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
#include "macros.h"
#include  "globals.h"
#include  "msp430.h"


//function declaration
  void Init_Port1(void);
  void Init_Port2(void);
  void Init_Port3(void);
  void Init_Port4(void);
  void Init_PortJ(void);

//------------------------------------------------------------------------------
// Function Name: Init_Ports
//
// Description: inits all the ports
//
// Passed: none
// Locals: none
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Init_Ports(void){
  Init_Port1();
  Init_Port2();
  Init_Port3();
  Init_Port4();
  Init_PortJ();
}

//------------------------------------------------------------------------------
// Function Name: Init_Ports1
//
// Description: Setups port1
//
// Passed: none
// Locals: none
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Init_Port1(void){
//------------
  // V_DETECT_R          (0x01)//
  // V_DETECT_L          (0x02)//
  // IR_LED              (0x04)//
  // V_THUMB             (0x08)//
  // SPI_CS_LCD          (0x10) // LCD Chip Select 
  // RESET_LCD           (0x20) // LCD Reset
  // SIMO_B              (0x40) // SPI mode - slave in/master out of USCI_B0 
  // SOMI_B              (0x80) // SPI mode - slave out/master in of USCI_B0 
//---------------  
  P1SEL0 = CLEAR_PIN;
  P1SEL1 = CLEAR_PIN;
  P1OUT = CLEAR_PIN;
  P1DIR = CLEAR_PIN;
  
  P1SEL0 |= V_DETECT_R;
  P1SEL1 |= V_DETECT_R;
    
  P1SEL0 |= V_DETECT_L;
  P1SEL1 |= V_DETECT_L;
    
  P1SEL0 &= ~IR_LED;
  P1SEL1 &= ~IR_LED;
  P1OUT &= ~IR_LED; 
  P1DIR |= IR_LED;
    
  P1SEL0 |= V_THUMB;
  P1SEL1 |= V_THUMB;
  
  P1SEL0 &= ~SPI_CS_LCD;
  P1SEL1 &= ~SPI_CS_LCD;
  P1OUT |= SPI_CS_LCD;
  P1DIR |= SPI_CS_LCD;
  
  P1SEL0 &= ~RESET_LCD;
  P1SEL1 &= ~RESET_LCD;
  P1OUT &= ~RESET_LCD;
  P1DIR |= RESET_LCD;
  
  P1SEL0 &= ~SIMO_B;
  P1SEL1 |= SIMO_B;
  P1DIR |= SIMO_B;
  
  P1SEL0 &= ~SOMI_B;
  P1SEL1 |= SOMI_B;
  P1DIR &= ~SOMI_B;
  P1REN |= SOMI_B;   
}
//------------------------------------------------------------------------------
// Function Name: Init_Ports2
//
// Description: Setups port2
//
// Passed: none
// Locals: none
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Init_Port2(void){

//------------------------------------------------------------------------------

//Configure Port 2

// Port 2 Pins

//USB_TXD                 (0x01) // 

//USB_RXD                 (0x02) // 

//SPI_SCK                 (0x04) // 

//UNKNOWN1                 (0x08) //

//UNKNOWN2                 (0x10) //

//CPU_TXD                 (0x20) //

//CPU_RXD                 (0x40) //

//UNKNOWN3                 (0x80) // 

//------------------------------------------------------------------------------

  P2SEL0 = CLEAR_PIN;         // P2 Port Pins as I/O

  P2SEL1 = CLEAR_PIN;         // P2 Port Pins as I/O

  P2DIR = CLEAR_PIN;          // P2 Port Pins all set default to inputs

  P2OUT = CLEAR_PIN;          // P2 Port Pins all set default to low

  

// Port P2.0

  P2SEL0 &= ~USB_TXD;       // function

  P2SEL1 |= USB_TXD;       // function

  //P2OUT ?? ?????;        // initial value for output or if input set pull down or pull up 

  P2DIR |= USB_TXD;        // direction

  //P2REN ?? ?????;        // enable resistors for input signals?

 

// Port P2.1

  P2SEL0 &= ~USB_RXD;       // function

  P2SEL1 |= USB_RXD;       // function

  P2OUT &= ~USB_RXD;        // initial value for output or if input set pull down or pull up 

  P2DIR &= ~USB_RXD;        // direction

  //P2REN ?? ?????;        // enable resistors for input signals?

 

// Port P2.2

  P2SEL0 &= ~SPI_SCK;       // function

  P2SEL1 |= SPI_SCK;       // function

  P2OUT |= SPI_SCK;        // initial value for output or if input set pull down or pull up 

  P2DIR |= SPI_SCK;        // direction

  //P2REN ?? ?????;        // enable resistors for input signals?

 

// Port P2.3

  P2SEL0 &= ~UNKNOWN1;       // function

  P2SEL1 &= ~UNKNOWN1;       // function

  P2OUT &= ~UNKNOWN1;        // initial value for output or if input set pull down or pull up 

  P2DIR &= ~UNKNOWN1;        // direction

  P2REN &= ~UNKNOWN1;        // enable resistors for input signals?

 

// Port P2.4

  P2SEL0 &= ~UNKNOWN2;      // function

  P2SEL1 &= ~UNKNOWN2;       // function

  P2OUT &= ~UNKNOWN2;        // initial value for output or if input set pull down or pull up 

  P2DIR &= ~UNKNOWN2;        // direction

  P2REN &= ~UNKNOWN2;        // enable resistors for input signals?

 

// Port P2.5

  P2SEL0 &= ~CPU_TXD;        // function

  P2SEL1 |= CPU_TXD;        // function

  P2OUT &= ~CPU_TXD;        // initial value for output or if input set pull down or pull up 

  P2DIR |= CPU_TXD;        // direction

  //P2REN ?? ?????;        // enable resistors for input signals?

 // Port P2.6

  P2SEL0 &= ~CPU_RXD;        // function

  P2SEL1 |= CPU_RXD;        // function

  P2OUT &= ~CPU_RXD;        // initial value for output or if input set pull down or pull up 

  P2DIR &= ~CPU_RXD;        // direction

  //P2REN ?? ?????;        // enable resistors for input signals?

// Port P2.7

  P2SEL0 &= ~UNKNOWN3;       // function

  P2SEL1 &= ~UNKNOWN3;      // function

  P2OUT &= ~UNKNOWN3;        // initial value for output or if input set pull down or pull up 

  P2DIR &= ~UNKNOWN3;        // direction

  P2REN &= ~UNKNOWN3;        // enable resistors for input signals?

//------------------------------------------------------------------------------

}
//------------------------------------------------------------------------------
// Function Name: Init_Ports3
//
// Description: Setups port3
//
// Passed: none
// Locals: none
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Init_Port3(void){

//------------------------------------------------------------------------------

//Configure Port 3

// Port 3 Pins

//X                 (0x01) // 

//Y                 (0x02) // 

//Z                 (0x04) // 

//LCD_BACKLITE                 (0x08) //

//R_FORWARD                 (0x10) //

//R_REVERSE                 (0x20) //

//L_FORWARD                 (0x40) //

//L_REVERSE                 (0x80) // 

//------------------------------------------------------------------------------

  P3SEL0 = CLEAR_PIN;         // P? Port Pins as I/O

  P3SEL1 = CLEAR_PIN;         // P? Port Pins as I/O

  P3DIR = CLEAR_PIN;          // P? Port Pins all set default to inputs

  P3OUT = CLEAR_PIN;          // P? Port Pins all set default to low

  

// Port P3.0

  P3SEL0 &= ~X;       // function

  P3SEL1 &= ~X;       // function

  P3OUT &= ~X;        // initial value for output or if input set pull down or pull up 

  P3DIR &= ~X;        // direction

  P3REN &= ~X;        // enable resistors for input signals?

 

// Port P3.1

  P3SEL0 &= ~Y;       // function

  P3SEL1 &= ~Y;       // function

  P3OUT &= ~Y;        // initial value for output or if input set pull down or pull up 

  P3DIR &= ~Y;        // direction

  P3REN &= ~Y;        // enable resistors for input signals?

 

// Port P3.2

  P3SEL0 &= ~ACC_Z;       // function

  P3SEL1 &= ~ACC_Z;       // function

  P3OUT &= ~ACC_Z;        // initial value for output or if input set pull down or pull up 

  P3DIR &= ~ACC_Z;        // direction

  P3REN &= ~ACC_Z;        // enable resistors for input signals?

 

// Port P3.3

  P3SEL0 &= ~LCD_BACKLITE;       // function

  P3SEL1 &= ~LCD_BACKLITE;       // function

  P3OUT &= ~LCD_BACKLITE;        // initial value for output or if input set pull down or pull up 

  P3DIR |= LCD_BACKLITE;        // direction

  //P3REN ?? ?????;        // enable resistors for input signals?

 

// Port P3.4

  P3SEL0 &= ~R_FORWARD;       // function

  P3SEL1 &= ~R_FORWARD;       // function

  P3OUT &= ~R_FORWARD;        // initial value for output or if input set pull down or pull up 

  P3DIR |= R_FORWARD;        // direction

  //P3REN ?? ?????;        // enable resistors for input signals?

 

// Port P3.5

  P3SEL0 &= ~R_REVERSE;       // function

  P3SEL1 &= ~R_REVERSE;      // function

  P3OUT &= ~R_REVERSE;        // initial value for output or if input set pull down or pull up 

  P3DIR |= R_REVERSE;        // direction

  //P3REN ?? ?????;        // enable resistors for input signals?

 

// Port P3.6

  P3SEL0 &= ~L_FORWARD;       // function

  P3SEL1 &= ~L_FORWARD;       // function

  P3OUT &= ~L_FORWARD;        // initial value for output or if input set pull down or pull up 

  P3DIR |= L_FORWARD;        // direction

  //P3REN ?? ?????;        // enable resistors for input signals?


 

// Port P3.7

  P3SEL0 &= ~L_REVERSE;       // function

  P3SEL1 &= ~L_REVERSE;      // function

  P3OUT &= ~L_REVERSE;        // initial value for output or if input set pull down or pull up 

  P3DIR |= L_REVERSE;        // direction

  //P3REN ?? ?????;        // enable resistors for input signals?


 

//------------------------------------------------------------------------------

}
//------------------------------------------------------------------------------
// Function Name: Init_Ports4
//
// Description: Setups port4
//
// Passed: none
// Locals: none
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Init_Port4(void){

//------------------------------------------------------------------------------

//Configure Port 4

// Port 4 Pins

//SW1                 (0x01) // 

//SW2                 (0x02) // 


//------------------------------------------------------------------------------

  P4SEL0 = CLEAR_PIN;         // P? Port Pins as I/O

  P4SEL1 = CLEAR_PIN;         // P? Port Pins as I/O

  P4DIR = CLEAR_PIN;          // P? Port Pins all set default to inputs

  P4OUT = CLEAR_PIN;          // P? Port Pins all set default to low

  

// Port P4.0

  P4SEL0 &= ~SW1;       // function

  P4SEL1 &= ~SW1;       // function

  P4OUT |= SW1;        // initial value for output or if input set pull down or pull up 

  P4DIR &= ~SW1;        // direction

  P4REN |= SW1;        // enable resistors for input signals?

 

// Port P4.1

  P4SEL0 &= ~SW2;       // function

  P4SEL1 &= ~SW2;       // function

  P4OUT |= SW2;        // initial value for output or if input set pull down or pull up 

  P4DIR &= ~SW2;        // direction

  P4REN |= SW2;        // enable resistors for input signals?



//------------------------------------------------------------------------------

}
//------------------------------------------------------------------------------
// Function Name: Init_PortsJ
//
// Description: Setups portJ
//
// Passed: none
// Locals: none
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Init_PortJ(void){

//------------------------------------------------------------------------------

//Configure Port J

// Port J Pins

//IOT_WAKEUP                 (0x01) // 

//IOT_FACTORY                 (0x02) // 

//IOT_STA_MINIAP                 (0x04) // 

//IOT_RESET                 (0x08) //


//------------------------------------------------------------------------------

  PJSEL0 = CLEAR_PIN;         // P? Port Pins as I/O

  PJSEL1 = CLEAR_PIN;         // P? Port Pins as I/O

  PJDIR = CLEAR_PIN;          // P? Port Pins all set default to inputs

  PJOUT = CLEAR_PIN;          // P? Port Pins all set default to low

  

// Port PJ.0

  PJSEL0 &= ~IOT_WAKEUP;       // function

  PJSEL1 &= ~IOT_WAKEUP;       // function

  PJOUT &= ~IOT_WAKEUP;        // initial value for output or if input set pull down or pull up 

  PJDIR |= IOT_WAKEUP;        // direction

  //PJREN ?? ?????;        // enable resistors for input signals?

 

// Port PJ.1

  PJSEL0 &= ~IOT_FACTORY;       // function

  PJSEL1 &= ~IOT_FACTORY;       // function

  PJOUT &= ~IOT_FACTORY;        // initial value for output or if input set pull down or pull up 

  PJDIR |= IOT_FACTORY;        // direction

  //PJREN ?? ?????;        // enable resistors for input signals?

 

// Port PJ.2

  PJSEL0 &= ~IOT_STA_MINIAP;       // function

  PJSEL1 &= ~IOT_STA_MINIAP;       // function

  PJOUT &= ~IOT_STA_MINIAP;        // initial value for output or if input set pull down or pull up 

  PJDIR |= IOT_STA_MINIAP;        // direction

  //PJREN ?? ?????;        // enable resistors for input signals?

 

// Port PJ.3

  PJSEL0 &= ~IOT_RESET;       // function

  PJSEL1 &= ~IOT_RESET;       // function

  PJOUT &= ~IOT_RESET;        // initial value for output or if input set pull down or pull up 

  PJDIR |= IOT_RESET;        // direction

  //PJREN ?? ?????;        // enable resistors for input signals?
 

//------------------------------------------------------------------------------

}



