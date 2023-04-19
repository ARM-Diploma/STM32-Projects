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

	switch(Copy_u8Timer)
	{
	case TIMER_1 :
		/*Enable APB*/
		SET_BIT(RCC_APB2ENR,RCC_APB2ENR_TIM1_EN);

		/*Set Counting Direction*/
		if (Copy_u8TimerCountDir == UP)
		{
			CLR_BIT(TIM1->CR1,TIM_CR1_DIR);
		}
		else if (TIMER_COUNT_DIR == DOWN)
		{
			SET_BIT(TIM1->CR1,TIM_CR1_DIR);
		}
		else
		{
			Local_u8ErrorState = NOK;
		}
		break;


	case TIMER_2 :

		/*Enable APB*/
//		SET_BIT(RCC_APB1,RCC_APB1ENR_TIM2_EN);
		SET_BIT(RCC_APB1ENR,RCC_APB1ENR_TIM2_EN);

		/*Set Counting Direction*/
		if (Copy_u8TimerCountDir == UP)
		{
			CLR_BIT(TIM2->CR1,TIM_CR1_DIR);
		}
		else if (TIMER_COUNT_DIR == DOWN)
		{
			SET_BIT(TIM2->CR1,TIM_CR1_DIR);
		}
		else
		{
			Local_u8ErrorState = NOK;
		}
		/*Set Prescaler Value*/
		TIM2->PSC = Copy_u16Prescaler-1;

		/*Set Auto Reload Value :*/
		TIM2->ARR = Copy_u16TopValue-1;

		/*Clear Counter */
		TIM2->CNT = 0;

		/*Enable Timer/Counter*/
		SET_BIT(TIM2->CR1,TIM_CR1_CEN);
		break;

	case TIMER_3 :
		/*Enable APB*/
		SET_BIT(RCC_APB1ENR,RCC_APB1ENR_TIM3_EN);

		/*Set Counting Direction*/
		if (Copy_u8TimerCountDir == UP)
		{
			CLR_BIT(TIM3->CR1,TIM_CR1_DIR);
		}
		else if (TIMER_COUNT_DIR == DOWN)
		{
			SET_BIT(TIM3->CR1,TIM_CR1_DIR);
		}
		else
		{
			Local_u8ErrorState = NOK;
		}
		/*Set Prescaler Value*/
		TIM3->PSC = Copy_u16Prescaler-1;

		/*Set Auto Reload Value :*/
		TIM3->ARR = Copy_u16TopValue-1;

		/*Clear Counter */
		TIM3->CNT = 0;

		/*Enable Timer/Counter*/
		SET_BIT(TIM3->CR1,TIM_CR1_CEN);
		break;

	case TIMER_4 :

		/*Enable APB*/
		SET_BIT(RCC_APB1ENR,RCC_APB1ENR_TIM4_EN);
		/*Set Counting Direction*/
		if (Copy_u8TimerCountDir == UP)
		{
			CLR_BIT(TIM4->CR1,TIM_CR1_DIR);
		}
		else if (TIMER_COUNT_DIR == DOWN)
		{
			SET_BIT(TIM4->CR1,TIM_CR1_DIR);
		}
		else
		{
			Local_u8ErrorState = NOK;
		}

		/*Set Prescaler Value*/
		TIM4->PSC = Copy_u16Prescaler-1;

		/*Set Auto Reload Value :*/
		TIM4->ARR = Copy_u16TopValue-1;

		/*Clear Counter */
		TIM4->CNT = 0;

		/*Enable Timer/Counter*/
		SET_BIT(TIM4->CR1,TIM_CR1_CEN);
		break;

	default : Local_u8ErrorState = NOK;
	}


	return Local_u8ErrorState;
}

u8 TIMER_u8GetOverflowFlag(u8 Copy_u8Timer , u8 *Copy_pu8Value)
{
	u8 Local_u8ErrorState = OK;

	switch(Copy_u8Timer)
	{
	case TIMER_1: *Copy_pu8Value = GET_BIT(TIM1->SR,TIM_SR_UIF); break;
	case TIMER_2: *Copy_pu8Value = GET_BIT(TIM2->SR,TIM_SR_UIF); break;
	case TIMER_3: *Copy_pu8Value = GET_BIT(TIM3->SR,TIM_SR_UIF); break;
	case TIMER_4: *Copy_pu8Value = GET_BIT(TIM4->SR,TIM_SR_UIF); break;
	default : Local_u8ErrorState = NOK;
	}

	return Local_u8ErrorState;

}

u8 TIMER_u8ClearOverflowFlag(u8 Copy_u8Timer)
{
	u8 Local_u8ErrorState = OK;

	switch(Copy_u8Timer)
	{
	case TIMER_1:CLR_BIT(TIM1->SR,TIM_SR_UIF); break;
	case TIMER_2:CLR_BIT(TIM2->SR,TIM_SR_UIF); break;
	case TIMER_3:CLR_BIT(TIM3->SR,TIM_SR_UIF); break;
	case TIMER_4:CLR_BIT(TIM4->SR,TIM_SR_UIF); break;
	default : Local_u8ErrorState = NOK;
	}

	return Local_u8ErrorState;
}
