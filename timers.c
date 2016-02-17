//------------------------------------------------------------------------------
//  File Name : timers.c
//
//  Description: This file contains the timers
//
//  Evan Noble
//  Jan 2016
//  Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
#include "macros.h"
#include "globals.h"
#include "functions.h"
//------------------------------------------------------------------------------
// Function Name: Init_Timers
//
// Description: init timers
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
void Init_Timers(void){
//------------------------------------------------------------------------------
// Timer Configurations
//------------------------------------------------------------------------------
  Init_Timer_A0(); //
//  Init_Timer_A1(); // 
//  Init_Timer_B0(); // 
//  Init_Timer_B1(); //  
//  Init_Timer_B2();   //  Required for provided compiled code to work
//------------------------------------------------------------------------------
}
//------------------------------------------------------------------------------
// Function Name: Timer_code
//
// Description: Setups the leds
//
// Passed: none
// Locals: none
// Returned: none
// Globals: Time_Sequence,one_time,five_msec_count
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Timer_code(void){
//------------------------------------------------------------------------------
// Timer A0 interrupt code
//------------------------------------------------------------------------------
  Time_Sequence++;
  one_time = ON;
  if (five_msec_count < VERY_BIG){
    five_msec_count++;
  }
//------------------------------------------------------------------------------
}
//------------------------------------------------------------------------------
// Function Name: five_msec_sleep
//
// Description: sleeps for 5ms
//
// Passed: fivemsec
// Locals: none
// Returned: none
// Globals: five_msec_count
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void five_msec_sleep(unsigned int fivemsec){
//------------------------------------------------------------------------------
//Each count passed is at least x times 5 milliseconds
  five_msec_count = CLEAR;
  while(fivemsec > (five_msec_count+INCREASE));
//------------------------------------------------------------------------------
}