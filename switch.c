//------------------------------------------------------------------------------
//  File Name : switch.c
//
//  Description: This file contains the code to change what the swicthes do
//
//  Evan Noble
//  Jan 2016
//  Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
#include "macros.h"
#include "globals.h"
#include  "msp430.h"
#include "functions.h"

//------------------------------------------------------------------------------
// Function Name: Switches_Process
//
// Description: changes what is on the display depending what switch is pushed
//
// Passed: none
// Locals: none
// Returned: none
// Globals: char* display_1,display_2,display_3,display_4
//          posL1,posL2,posL3,posL4
//
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void Switches_Process(void){
//------------------------------------------------------------------------------
  if (!(P4IN & SW1)){
    start = 1;
    five_msec_sleep(15);
    //display_2 = "WOLFPACK";
    //posL2 = BLOCK_1;
    //display_3 = "ECE306";
    //posL3 = BLOCK_2;
    //display_4 = "E Noble";
    //posL4 = BLOCK_1;
  }
  if (!(P4IN & SW2)) {
    if(cycleNumber == 0) {
      display_1 = "Triangle";
      display_2 = "    ";
      cycleNumber++;
    } else if (cycleNumber == 1) {
      display_1 = "Figure";
      display_2 = "Eight";
      cycleNumber++;
    } else if(cycleNumber == 2) {
      display_1 = "Circle";
      display_2 = "    ";
      cycleNumber = 0;
    }
    posL1 = BLOCK_1;
    five_msec_sleep(15);
   // display_2 = "   ";
    //posL2 = BLOCK_2;
    //display_3 = "  ";
    //posL3 = BLOCK_3;
    //display_4 = "    ";
    //posL4 = BLOCK_1;
  }
//------------------------------------------------------------------------------
}