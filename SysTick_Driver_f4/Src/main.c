/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <SysTick_Delay.h>

#include "../Inc/SysTick_interface.h"
#include "../Inc/RCC_interface.h"
#include "../Inc/GPIO_interface.h"
int main(void)
{
	uint32_t Val;


	GPIO_PinConfig_T LED1 =
	{
		.Port = PORTA,
		.PinNum = PIN5,
		.Mode = OUTPUT,
		.OutType = PUSH_PULL,
		.Speed = LOW,
		.PullType = NO_PULL,
	};

	RCC_u8SetClockSrc(RCC_HSE_CLK, RCC_ON);
	RCC_u8SetSysClock(Copy_u8ClockType);
	RCC_u8PeripheralClkEnable(GPIOA_Per,RCC_AHB1_CLK);

	GPIO_u8PinInit(&LED1);
//	SysTick_u8ClkInit(AHB, 0);

//	SysTick_u8ClkInit(AHB_DIV_8, 1000);

    /* Loop forever */
	for(;;)
	{
		GPIO_u8SetPinValue(LED1.Port, LED1.PinNum, PIN_HIGH);
		Delay_u8MilliSec(500);
		GPIO_u8SetPinValue(LED1.Port, LED1.PinNum, PIN_LOW);
		Delay_u8MilliSec(500);

//		while(SysTick_u8GetCounterFlag() == 0);


	}
}
