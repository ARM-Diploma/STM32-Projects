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

int main(void)
{
	uint8_t Local_u8GetVal[8],
	Local_u8Avg;

	GPIO_PinConfig_T LED1 =
	{
			.Port = PORTA,
			.PinNum = PIN8,
			.Mode = OUTPUT,
			.OutType = PUSH_PULL,
			.Speed = MEDIUM

	};

	GPIO_PinConfig_T LED2 =
	{
			.Port = PORTB,
			.PinNum = PIN10,
			.Mode = OUTPUT,
			.OutType = PUSH_PULL,
			.Speed = MEDIUM

	};

	GPIO_PinConfig_T LED3 =
	{
			.Port = PORTB,
			.PinNum = PIN4,
			.Mode = OUTPUT,
			.OutType = PUSH_PULL,
			.Speed = MEDIUM

	};

	GPIO_PinConfig_T KEY1 =
	{
			.Port = PORTA,
			.PinNum = PIN6,
			.Mode = INPUT,
			.PullType = PULL_UP

	};

	RCC_u8PeripheralClkEnable(GPIOA_Per, RCC_AHB1_CLK);
	RCC_u8PeripheralClkEnable(GPIOB_Per, RCC_AHB1_CLK);

	GPIO_u8PinInit(&LED1);
	GPIO_u8PinInit(&LED2);
	GPIO_u8PinInit(&LED3);

	GPIO_u8PinInit(&KEY1);

	while(1)
	{
		Local_u8Avg = 0;

		for(uint8_t Counter = 0 ; Counter < 8 ;Counter++)
		{
			GPIO_u8ReadPinValue(KEY1.Port, KEY1.PinNum, &Local_u8GetVal[Counter]);
			Delay_u8MilliSec(5);
			Local_u8Avg |= (Local_u8GetVal[Counter] << Counter);

		}
		/*Key1 is pressed*/
		if(Local_u8Avg >= 240)
		{
			GPIO_u8SetPinValue(LED1.Port, LED1.PinNum, PIN_HIGH);
			Delay_u8MilliSec(50);

		}

		/*Key2 is pressed*/
		else if(Local_u8Avg >= 15)
		{
			GPIO_u8SetPinValue(LED2.Port, LED2.PinNum, PIN_HIGH);
			Delay_u8MilliSec(50);
		}

		/*Key3 is pressed*/
		else if(Local_u8Avg >= 6)
		{
			GPIO_u8SetPinValue(LED3.Port, LED3.PinNum, PIN_HIGH);
			Delay_u8MilliSec(50);
		}

		GPIO_u8SetPinValue(LED1.Port, LED1.PinNum, PIN_LOW);
		GPIO_u8SetPinValue(LED2.Port, LED2.PinNum, PIN_LOW);
		GPIO_u8SetPinValue(LED3.Port, LED3.PinNum, PIN_LOW);



	}
}