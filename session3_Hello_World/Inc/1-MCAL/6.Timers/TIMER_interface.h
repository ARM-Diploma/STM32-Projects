/***********************************************************************/
/***********************************************************************/
/************************ AUTHER : Hanin Anwar  ************************/
/************************ LAYER  : MCAL         ************************/
/************************ SWC    : TIMER          ************************/
/************************ VERSION : 1.00         ************************/
/***********************************************************************/
/***********************************************************************/

#ifndef  TIMER_INTERFACE_H_
#define  TIMER_INTERFACE_H_

/************ Timer Number ************/

#define TIMER_1						1
#define TIMER_2						2
#define TIMER_3						3
#define TIMER_4						4

#define UP							1
#define DOWN						2

/*Counting Direction :
 * 1. UP
 * 2. Down
 * */
#define TIMER_COUNT_DIR		UP







u8 TIMER_u8Init(u8 Copy_u8Timer , u8 Copy_u8TimerCountDir , u16 Copy_u16Prescaler,u16 Copy_u16TopValue);

u8 TIMER_u8GetOverflowFlag(u8 Copy_u8Timer,u8 *Copy_pu8Value);

u8 TIMER_u8ClearOverflowFlag(u8 Copy_u8Timer);

#endif
