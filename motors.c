//------------------------------------------------------------------------------
//  File Name : motors.c
//
//  Description: This file contains the functions for motot control
//
//  Evan Noble
//  Feb 2016
//  Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------

#include "macros.h"
#include "globals.h"
#include "msp430.h"

void RightMotorForward(void) {
  P3OUT |= R_FORWARD;
}

void LeftMotorForward(void) {
  P3OUT |= L_FORWARD;
}

void RightMotorOff(void) {
  P3OUT &= ~R_FORWARD;
}

void LeftMotorOff(void) {
  P3OUT &= ~L_FORWARD;
}

void RightTurn(void) {
  LeftMotorForward();
  RightMotorOff();
}

void LeftTurn(void) {
  RightMotorForward();
  LeftMotorOff();
}
