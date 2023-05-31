#include "stdint.h"
#include "../Inc/STATUS.h"

#include "../Inc/STM32F446xx.h"

#include "../Inc/SysTick_private.h"
#include "../Inc/SysTick_interface.h"
#include "../Inc/SysTick_config.h"

#include "../Inc/SysTick_Delay.h"

uint8_t Delay_u8MicroSec(uint32_t Copy_u32Delay)
{
	uint8_t Local_u8ErrorState = OK;
	uint32_t Local_u32PreloadVal ;
	static uint32_t Local_u32Counter = 0;

	/*1. Set Preload value*/
	Local_u32PreloadVal = (Copy_u32Delay*SYSTICK_SPEED)/SYSTICK_MICRO;
	SysTick_u8SetPreloadVal(Local_u32PreloadVal);

	/*2. Set Clk Source*/
	SysTick_u8SetClkSrc(SYSTICK_CLK_SRC);

	/*3. Disable Interrupt & Enable Timer*/
	SysTick_u8ClkControl(SYSTICK_ENABLE);

	/*4. Busy waiting for count flag*/
	while(((SysTick_u8GetCounterFlag()) != SYST_RISED_FLAG) && (Local_u32Counter < SYSTICK_TIMEOUT))
	{
		Local_u32Counter++;
	}
	if(Local_u32Counter == SYSTICK_TIMEOUT)
	{
		Local_u8ErrorState = NOK;
	}

	/*5. Stop Clock*/
	SysTick_u8ClkControl(SYSTICK_DISABLE);

	/*6. Clear Counter*/
	Local_u32Counter = 0;

	return Local_u8ErrorState;
}

uint8_t Delay_u8MilliSec(uint32_t Copy_u32Delay)
{
	uint8_t Local_u8ErrorState = OK;
	static uint32_t Local_u32Counter = 0;
	uint32_t Local_u32PreloadVal;

	/*1. Set Preload value*/
	Local_u32PreloadVal = (Copy_u32Delay*SYSTICK_SPEED)/SYSTICK_MILLI;
	SysTick_u8SetPreloadVal(Local_u32PreloadVal);

	/*2. Set Clk Source*/
	SysTick_u8SetClkSrc(SYSTICK_CLK_SRC);

	/*3. Disable Interrupt & Enable Timer*/
	SysTick_u8ClkControl(SYSTICK_ENABLE);

	/*4. Busy waiting for count flag*/
	while(((SysTick_u8GetCounterFlag()) != SYST_RISED_FLAG) && (Local_u32Counter < SYSTICK_TIMEOUT))
	{
		Local_u32Counter++;
	}
	if(Local_u32Counter == SYSTICK_TIMEOUT)
	{
		Local_u8ErrorState = NOK;
	}

	/*5. Stop Clock*/
	SysTick_u8ClkControl(SYSTICK_DISABLE);

	/*6. Clear Counter*/
	Local_u32Counter = 0;

	return Local_u8ErrorState;
}
