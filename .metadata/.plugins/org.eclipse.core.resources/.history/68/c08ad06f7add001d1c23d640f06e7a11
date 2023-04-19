/***********************************************************************/
/***********************************************************************/
/************************ AUTHER : Hanin Anwar  ************************/
/************************ LAYER  : MCAL         ************************/
/************************ SWC    : TIMER          ************************/
/************************ VERSION : 1.00         ************************/
/***********************************************************************/
/***********************************************************************/


#include "../../4-LIB/STD_TYPES.h"
#include "../../4-LIB/BIT_MATH.h"

#include "TIMER_register.h"
#include "TIMER_config.h"
#include "TIMER_private.h"
#include "TIMER_interface.h"


u8 TIMER_u8Init(u8 Copy_u8Timer , u8 Copy_u8TimerCountDir , u16 Copy_u16Prescaler,u16 Copy_u16TopValue)
{
	u8 Local_u8ErrorState = OK;

	/*Enable APB*/
	switch(Copy_u8Timer)
	{
	case TIMER_1 : SET_BIT(RCC_APB2ENR,RCC_APB2ENR_TIM1_EN); break;
	case TIMER_2 : SET_BIT(RCC_APB1ENR,RCC_APB1ENR_TIM2_EN); break;
	case TIMER_3 : SET_BIT(RCC_APB1ENR,RCC_APB1ENR_TIM3_EN); break;
	case TIMER_4 : SET_BIT(RCC_APB1ENR,RCC_APB1ENR_TIM4_EN); break;
	default : Local_u8ErrorState = NOK;
	}

	/*Set Counting Direction*/
	if (Copy_u8TimerCountDir == UP)
	{
		CLR_BIT(TIM_CR1,TIM_CR1_DIR);

	}
	else if (TIMER_COUNT_DIR == DOWN)
	{
		SET_BIT(TIM_CR1,TIM_CR1_DIR);
	}
	else
	{
		Local_u8ErrorState = NOK;
	}

	/*Set Prescaler Value*/
	TIM_PSC = Copy_u16Prescaler-1;

	/*Set Auto Reload Value :*/
	TIM_ARR = Copy_u16TopValue-1;


	/*Enable Timer/Counter*/
	SET_BIT(TIM_CR1,TIM_CR1_CEN);

}

u8 TIMER_u8GetOverflowFlag(void)
{
	return GET_BIT(TIM_SR,TIM_SR_UIF);

}
