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

#include "../Inc/SysTick_Delay.h"

#include "../Inc/RCC_interface.h"
#include "../Inc/GPIO_interface.h"
#include "../Inc/KEYPAD_interface.h"



int main(void)
{
	RCC_u8PeripheralClkEnable(GPIOA_Per, RCC_APB2_CLK);
	RCC_u8PeripheralClkEnable(GPIOB_Per, RCC_APB2_CLK);
	RCC_u8PeripheralClkEnable(GPIOC_Per, RCC_APB2_CLK);

	KPD_KeyInit();
	GPIO_PinConfig_T LED1 =
	{
			.Port = PORTC,
			.PinNum = PIN13,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};
	GPIO_u8PinInit(&LED1);

	uint8_t val;

	while(1)
	{
		do
		{
			val = KPD_GetPressedKey();

		}
		while(val > 4);
		if(val == 1)
		{
			GPIO_u8SetPinValue(LED1.Port,LED1.PinNum, PIN_HIGH);
			Delay_u8MilliSec(40);


		}
		else if (val == 2)
		{

			GPIO_u8SetPinValue(LED1.Port,LED1.PinNum, PIN_HIGH);
			Delay_u8MilliSec(20);
			GPIO_u8SetPinValue(LED1.Port,LED1.PinNum, PIN_LOW);
			Delay_u8MilliSec(20);

		}
		else if (val == 3)
		{
			GPIO_u8SetPinValue(LED1.Port,LED1.PinNum, PIN_LOW);
			Delay_u8MilliSec(20);
			GPIO_u8SetPinValue(LED1.Port,LED1.PinNum, PIN_HIGH);
			Delay_u8MilliSec(20);

		}

		GPIO_u8SetPinValue(LED1.Port,LED1.PinNum, PIN_LOW);
		Delay_u8MilliSec(40);



	}
}