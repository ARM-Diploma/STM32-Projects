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

#include "../../4-LIB/STD_TYPES.h"



/***	Bases Addresses	***/
#define RCC_BASE		0x40023800
#define RCC_APB1ENR		*((volatile u32 *)0x40023840)
#define RCC_APB2ENR		*((volatile u32 *)0x40023844)

#define TIM1_BASE		0x40010000
#define TIM2_BASE		0x40000000
#define TIM3_BASE		0x40000400
#define TIM4_BASE		0x40000800


/***	Typedef Structures	***/
typedef struct
{
	volatile u32 CR;
	volatile u32 CFGR;
	volatile u32 CIR;
	volatile u32 APB2RSTR;
	volatile u32 APB1RSTR;
	volatile u32 AHBENR;
	volatile u32 APB2ENR;
	volatile u32 APB1ENR;
	volatile u32 BDCR;
	volatile u32 CSR;

}RCC_TD;

typedef struct
{
	volatile u32 CR1;
	volatile u32 CR2;
	volatile u32 SMCR;
	volatile u32 DIER;
	volatile u32 SR;
	volatile u32 EGR;
	volatile u32 CCMR1;
	volatile u32 CCMR2;
	volatile u32 CCER;
	volatile u32 CNT;
	volatile u32 PSC;
	volatile u32 ARR;
	volatile u32 Reserved1;
	volatile u32 CCR[4];
	volatile u32 Reserved2;
	volatile u32 DCR;
	volatile u32 DMAR;

}TIMERS_TD;


/***	APB Registers Bits	***/
#define RCC_APB1ENR_TIM2_EN		0	/*Enable TIM2 bus*/
#define RCC_APB1ENR_TIM3_EN		1	/*Enable TIM3 bus*/
#define RCC_APB1ENR_TIM4_EN		2	/*Enable TIM4 bus*/

#define RCC_APB2ENR_TIM1_EN		11	/*Enable TIM1 bus*/

/***	Timer CTRL1 Register Bits	***/
#define TIM_CR1_CEN				0	/*Enable Counter*/
#define TIM_CR1_DIR				4	/*Set Count Direction : Up/Down*/

/***	Timer Status Register Bits	***/
#define TIM_SR_UIF				0	/*OverFLow flag bit*/

#define RCC		((volatile RCC_TD *)RCC_BASE)

#define TIM1 	((volatile TIMERS_TD *)TIM1_BASE)
#define TIM2 	((volatile TIMERS_TD *)TIM2_BASE)
#define TIM3 	((volatile TIMERS_TD *)TIM3_BASE)
#define TIM4 	((volatile TIMERS_TD *)TIM4_BASE)

#endif
