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

void StraightLine(int straightLineTime) {
  int x;
  for(x=0;x<straightLineTime;x++) {
    RightMotorForward();
    LeftMotorForward();
    five_msec_sleep(5);
    LeftMotorOff();
    five_msec_sleep(4);
    RightMotorOff();
  }
 
}

void Circle(int circleTime) {
  int x;
  for(x=0;x<circleTime;x++) {
    RightMotorForward();
    LeftMotorForward();
    five_msec_sleep(2);
    LeftMotorOff();
    five_msec_sleep(4);
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
    StraightLine(10);
    five_msec_sleep(50);
    switch(triangleSides) {
    case 0:
        TriangleTurn(37);
        break;
    case 1:
        TriangleTurn(33);
        break;
    case 2:
        TriangleTurn(37);
        break;
    case 3:
        TriangleTurn(33);
        break;
    case 4:
        TriangleTurn(37);
        break;
    case 5:
        TriangleTurn(33);
        break;
    }
  }
}

void FigureEight() {
  Circle(185);
  StraightLine(20);
  Circle(185);
  StraightLine(20);
}
