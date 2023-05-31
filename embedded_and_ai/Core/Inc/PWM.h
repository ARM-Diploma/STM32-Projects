#ifndef PWM_H_
#define PWM_H_

#include "tim.h"

int8_t PWM_int32SetPWMValue(TIM_TypeDef *htim,int32_t Copy_int32Channel,int32_t Copy_int32Value);
#endif
