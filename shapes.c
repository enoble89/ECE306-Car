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

void RightCircle(int circleTime) {
  int ecn;
  for(ecn=0;ecn<circleTime;ecn++) {
    RightMotorForward();
    LeftMotorForward();
    five_msec_sleep(2);
    LeftMotorOff();
    five_msec_sleep(4);
    RightMotorOff();
  }
}

void LeftCircle(int circleTime) {
  int lcx;
  for(lcx=0;lcx<circleTime;lcx++) {
    RightMotorForward();
    LeftMotorForward();
    five_msec_sleep(2);
    RightMotorOff();
    five_msec_sleep(4);
    LeftMotorOff();
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
    TriangleTurn(37);
  }
}

void FigureEight() {
  RightCircle(1);
  LeftCircle(1);
}
