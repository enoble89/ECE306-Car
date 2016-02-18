//------------------------------------------------------------------------------
//  File Name : shapes.c
//
//  Description: This file contains the functions for doing the shapes for 
//               project. 3
//
//  Evan Noble
//  Feb 2016
//  Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------

#include "macros.h"
#include "globals.h"
#include "msp430.h"
#include "functions.h"

//------------------------------------------------------------------------------
// Function Name: StraightLine
//
// Description: Corrects for motor error, goes forward for a certain time 
//
// Passed: straightLineTime
// Locals: x
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void StraightLine(int straightLineTime) {
  int x;
  for(x=CLEAR;x<straightLineTime;x++) {
    RightMotorForward();
    LeftMotorForward();
    five_msec_sleep(BOTH_MOTOR_ON_TIME_STRAIGHT);
    LeftMotorOff();
    five_msec_sleep(RIGHT_MOTOR_ON_TIME_STRAIGHT);
    RightMotorOff();
  }
 
}
//------------------------------------------------------------------------------
// Function Name: LeftCircle
//
// Description: turns motors on and off to perform a circle going in the left dir
//
// Passed: circleTime
// Locals: x
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void LeftCircle(int circleTime) {
  int x;
  for(x=CLEAR;x<circleTime;x++) {
    RightMotorForward();
    LeftMotorForward();
    five_msec_sleep(BOTH_MOTOR_ON_TIME_LEFT_CIRCLE);
    LeftMotorOff();
    five_msec_sleep(RIGHT_MOTOR_ON_TIME_LEFT_CIRCLE);
    RightMotorOff();
  }
}
//------------------------------------------------------------------------------
// Function Name: RightCircle
//
// Description: performs a circle in the right direction
//
// Passed: circleTime
// Locals: x
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void RightCircle(int circleTime) {
  int x;
  for(x=CLEAR;x<circleTime;x++) {
    RightMotorForward();
    LeftMotorForward();
    five_msec_sleep(BOTH_MOTOR_ON_TIME_RIGHT_CIRCLE);
    RightMotorOff();
    five_msec_sleep(LEFT_MOTOR_ON_TIME_RIGHT_CIRCLE);
    LeftMotorOff();
  }
}
//------------------------------------------------------------------------------
// Function Name: TriangleTurn
//
// Description: turns for a given ammount of time, intended for a 120 degree turn
//
// Passed: turnTime
// Locals: none
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void TriangleTurn(int turnTime) {
  RightMotorForward();
  five_msec_sleep(turnTime);
  RightMotorOff();
}
//------------------------------------------------------------------------------
// Function Name: Triangle
//
// Description: completes two triangles
//
// Passed: none
// Locals: triangleSides
// Returned: none
// Globals: none
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Triangle(void) {
  int triangleSides;
  for(triangleSides=CLEAR;triangleSides<TRIANGLE_SIDES_TO_COMPLETE;triangleSides++) {
    StraightLine(TRIANGLE_SIDE_TIME);
    TriangleTurn(TRIANGLE_TURN_TIME);
  }
}
//------------------------------------------------------------------------------
// Function Name: FigureEight
//
// Description: performs 2 figure eights
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
void FigureEight() {
  RightCircle(RIGHT_CIRCLE_ONE_TIME);
  LeftCircle(LEFT_CIRCLE_ONE_TIME);
  RightCircle(RIGHT_CIRCLE_ONE_TIME);
  LeftCircle(LEFT_CIRCLE_ONE_TIME);
}
