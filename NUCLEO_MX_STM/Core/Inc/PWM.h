#ifndef PWM_H_
#define PWM_H_

#include "stm32f4xx_hal.h"

int8_t PWM_int32SetPWMValue(TIM_HandleTypeDef *htim,int32_t Copy_int32Channel,int32_t Copy_int32Value);

#endif