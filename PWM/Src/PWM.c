#include <stdint.h>

#include "stm32f4xx_hal_tim.h"

int8_t PWM_int32SetPWMValue(TIM_HandleTypeDef *htim,int32_t Copy_int32Channel,int32_t Copy_int32Value)
{
	int8_t Local_int8ErrorState = 0;

	if (htim->Instance == TIM2)
	{
		switch(Copy_int32Channel)
		{
		case TIM_CHANNEL_1 : TIM2->CCR1 = Copy_int32Value; break;
		case TIM_CHANNEL_2 : TIM2->CCR2 = Copy_int32Value; break;
		case TIM_CHANNEL_3 : TIM2->CCR3 = Copy_int32Value; break;
		case TIM_CHANNEL_4 : TIM2->CCR4 = Copy_int32Value; break;
		default : Local_int8ErrorState = 1;
		}
	}

	else if (htim->Instance == TIM12)
	{
		switch(Copy_int32Channel)
		{
		case TIM_CHANNEL_1 : TIM12->CCR1 = Copy_int32Value; break;
		case TIM_CHANNEL_2 : TIM12->CCR2 = Copy_int32Value; break;
		default : Local_int8ErrorState = 1;
		}
	}

	return Local_int8ErrorState;
}



