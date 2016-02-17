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

void StraightLine(void) {
  Time_Sequence = 0;
  while(Time_Sequence < 100) {
    RightMotorForward();
    LeftMotorForward();
    five_msec_sleep(4);
    LeftMotorOff();
    five_msec_sleep(7);
  }
  RightMotorOff();
  LeftMotorOff();
}

void Circle(int circleTime) {
  Time_Sequence = 0;
  while(Time_Sequence < circleTime) {
    RightMotorForward();
    LeftMotorForward();
    five_msec_sleep(5);
    LeftMotorOff();
    five_msec_sleep(20);
    RightMotorOff();
  }
}

void TriangleTurn(int turnTime) {
  RightMotorForward();
  five_msec_sleep(turnTime);
  RightMotorOff();
}

void Triangle(void) {
  int triangleSides;
  for(triangleSides=0;triangleSides<6;triangleSides++) {
    five_msec_sleep(50);
    StraightLine();
    five_msec_sleep(50);
    TriangleTurn(53);
  }
}

void FigureEight() {
  Circle(185);
  StraightLine();
  Circle(185);
  StraightLine();
}
