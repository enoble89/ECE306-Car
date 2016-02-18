//------------------------------------------------------------------------------
//  File Name : motors.c
//
//  Description: This file contains the functions for motor control
//
//  Evan Noble
//  Feb 2016
//  Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------

#include "macros.h"
#include "globals.h"
#include "msp430.h"


//------------------------------------------------------------------------------
// Function Name: RightMotorForward
//
// Description: turns right motor on in the forward direction
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
void RightMotorForward(void) {
  P3OUT |= R_FORWARD;
}
//------------------------------------------------------------------------------
// Function Name: LeftMotorForward
//
// Description: turns left motor on in the forward direction
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
void LeftMotorForward(void) {
  P3OUT |= L_FORWARD;
}
//------------------------------------------------------------------------------
// Function Name: RightMotorOff
//
// Description: turns right motor off
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
void RightMotorOff(void) {
  P3OUT &= ~R_FORWARD;
}
//------------------------------------------------------------------------------
// Function Name: LeftMotorOff
//
// Description: turns left motor off
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
void LeftMotorOff(void) {
  P3OUT &= ~L_FORWARD;
}

