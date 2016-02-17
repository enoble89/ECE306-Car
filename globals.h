//------------------------------------------------------------------------------
//  File Name : globals.h
//
//  Description: This file contains the extern globals to be used in other files
//
//  Evan Noble
//  Jan 2016
//  Built with IAR Embedded Workbench Version: V7.3.1.3987 (6.40.1)
//------------------------------------------------------------------------------

extern volatile unsigned char control_state[CNTL_STATE_INDEX];
extern volatile unsigned int Time_Sequence;
extern char led_smclk;
extern volatile char one_time;
extern volatile unsigned int five_msec_count;
extern char display_line_1[MAX_CHAR];
extern char display_line_2[MAX_CHAR];
extern char display_line_3[MAX_CHAR];
extern char display_line_4[MAX_CHAR];
extern char *display_1;
extern char *display_2;
extern char *display_3;
extern char *display_4;
extern char posL1;
extern char posL2;
extern char posL3;
extern char posL4;
extern char size_count;
extern char big;
extern int start;
extern int cycleNumber;