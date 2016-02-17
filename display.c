//------------------------------------------------------------------------------
// File Name : display.c
//
//  Description: This file contains the controls for the lcd display
//
//  Evan Noble
//  Jan 2016
//  Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
#include "macros.h"
#include "globals.h"
#include "msp430.h"
#include "functions.h"
//------------------------------------------------------------------------------
// Function Name: Init_Conditions
//
// Description: Setups the lcd
//
// Passed: none
// Locals: none
// Returned: none
// Globals: char* display_1,display_2,display_3,display_4
//          char display_line_1[0],display_line_2[0],display_line_3[0],display_line_4[0]
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Init_Conditions(void){
//------------------------------------------------------------------------------
// Initializations Configurations
//------------------------------------------------------------------------------
// Interrupts are disabled by default, enable them. 
  enable_interrupts();
  display_1 = &display_line_1[CLEAR];
  display_2 = &display_line_2[CLEAR];
  display_3 = &display_line_3[CLEAR];
  display_4 = &display_line_4[CLEAR];
 
//------------------------------------------------------------------------------
}
//------------------------------------------------------------------------------
// Function Name: Display_Process
//
// Description: clears the lcd and then writes to it
//
// Passed: none
// Locals: none
// Returned: none
// Globals: display_1, LCD_HOME_L1, posL1
//          display_2, LCD_HOME_L2, posL2
//          display_3, LCD_HOME_L3, posL3
//          display_4, LCD_HOME_L4, posL4
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Display_Process(void){
  ClrDisplay();
  lcd_out(display_1, LCD_HOME_L1, posL1);
  lcd_out(display_2, LCD_HOME_L2, posL2);
  lcd_out(display_3, LCD_HOME_L3, posL3);
  lcd_out(display_4, LCD_HOME_L4, posL4);
}