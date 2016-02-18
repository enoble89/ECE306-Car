//------------------------------------------------------------------------------
//  File Name : main.c
//
//  Description: This file contains the Main Routine - "While" Operating System
//
//  Evan Noble
//  Jan 2016
//  Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
#include  "msp430.h"
#include  "functions.h"
#include  "macros.h" 
#include  "globals.h"

// Global Variables
volatile unsigned char control_state[CNTL_STATE_INDEX];
volatile unsigned int Time_Sequence;
char led_smclk;
volatile char one_time;
volatile unsigned int five_msec_count;
extern char display_line_1[MAX_CHAR];
extern char display_line_2[MAX_CHAR];
extern char display_line_3[MAX_CHAR];
extern char display_line_4[MAX_CHAR];
extern char *display_1;
extern char *display_2;
extern char *display_3;
extern char *display_4;
char posL1;
char posL2;
char posL3;
char posL4;
char size_count;
char big;
int cycleNumber;
int start;
//------------------------------------------------------------------------------
// Function Name: main
//
// Description: This function contains the while loop that runs continuously to act
//              for the operating system. It also calls all the funstions to initialize
//              the system
//
// Passed: none
// Locals: none
// Returned: none
// Globals: display_1
//          display_2
//          display_3
//          display_4
//          posL1,posL2,posL3,posL4  
//          big
//          
// Evan Noble
// Jan 2016
// Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------
void main(void){
//------------------------------------------------------------------------------
// Main Program
// This is the main routine for the program. Execution of code starts here.
// The operating system is Back Ground Fore Ground.
// 
//------------------------------------------------------------------------------
  Init_Ports();                             // Initialize Ports
  Init_Clocks();                            // Initialize Clock System 
  Init_Conditions();
  Time_Sequence = CLEAR;                    
  Init_Timers();                            // Initialize Timers
  five_msec_sleep(SMALL);                   // 250 msec delay for the clock to settle
  Init_LCD();                               // Initialize LCD
  
//             1234567890
  display_1 = "Circle";
  posL1 = BLOCK_1;
  display_2 = "    ";
  posL2 = BLOCK_1;
  display_3 = "   ";
  posL3 = BLOCK_2;
  display_4 = "   ";
  posL4 = BLOCK_1;
  big = CLEAR;
  Display_Process();
  
//------------------------------------------------------------------------------
// Begining of the "While" Operating System
//------------------------------------------------------------------------------
 while(ALWAYS) {                            // Can the Operating system run
   
   //check for change in switch
   Switches_Process();
   
   //update the display after a period of time
   if(Time_Sequence > LCD_REFRESH_RATE) {
     Display_Process();
     Time_Sequence = CLEAR;
   }
   
   //performs shape depending on selection in menu
   if(start == TRUE && cycleNumber == CIRCLE_ON_DISPLAY) {
    RightCircle(TWO_CIRCLE_TIME);
    start = FALSE;
   } else if(start == TRUE && cycleNumber == TRIANGLE_ON_DISPLAY) {
    Triangle();
    start = FALSE;
   } else if(start == TRUE && cycleNumber == FIRGURE_EIGHT_ON_DISPLAY) {
    FigureEight();
    start = FALSE;
   }
   
 }
//------------------------------------------------------------------------------
}















