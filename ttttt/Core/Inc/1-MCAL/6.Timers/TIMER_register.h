/***********************************************************************/
/***********************************************************************/
/************************ AUTHER : Hanin Anwar  ************************/
/************************ LAYER  : MCAL         ************************/
/************************ SWC    : TIMER          ************************/
/************************ VERSION : 1.00         ************************/
/***********************************************************************/
/***********************************************************************/

#ifndef  TIMER_REGISTER_H_
#define  TIMER_REGISTER_H_

/*APB Registers*/

#define RCC_APB1ENR				*((volatile u8 *)0x1C)

#define RCC_APB1ENR_TIM2_EN		0	/*Enable TIM2 bus*/
#define RCC_APB1ENR_TIM3_EN		1	/*Enable TIM3 bus*/
#define RCC_APB1ENR_TIM4_EN		2	/*Enable TIM4 bus*/

#define RCC_APB2ENR				*((volatile u16 *)0x18)

#define RCC_APB2ENR_TIM1_EN		11	/*Enable TIM1 bus*/



/***	Timer CTRL1 Register	***/

#define TIM_CR1				*((volatile u16 *)0x00)
#define TIM_CR1_CEN			0	/*Enable Counter*/
#define TIM_CR1_DIR			4	/*Set Count Direction : Up/Down*/

/***	Timer CTRL2 Register	***/
#define TIM_CR2				*((volatile u16 *)0x04)

/***	Timer Status Register	***/
#define TIM_SR				*((volatile u16 *)0x10)
#define TIM_SR_UIF			0	/*OverFLow flag bit*/
/***	Timer Count Register	***/
#define TIM_CNT				*((volatile u32 *)0x24)	/*Counts from 0 to 0xFFFF if 16bit timer is used

/***	Timer Auto Reload Register	***/
#define TIM_ARR				*((volatile u32 *)0x2C)	/*Timers count up from 0 to Auto Reload value*/

/***	Timer Prescaler Register	***/
#define TIM_PSC				*((volatile u16	*)0x28)

#endif
