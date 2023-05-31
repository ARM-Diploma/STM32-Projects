/****************************************************************************/
/*
 * @file 		SysTick_program.c
 * @author		Hanin Anwar
 * @brief		the SysTick main source file, including functions' definitions
 *
 * */

#include <stdint.h>
#include "../Inc/STATUS.h"

#include "../Inc/STM32F446xx.h"
#include "../Inc/SysTick_private.h"
#include "../Inc/SysTick_interface.h"
#include "../Inc/SysTick_config.h"

/****************************************************/
/*	@brief		SysTick_u8ClkInit : Initialize  SysTick according to input paramters
 * @param[in]	Copy_u8ClkSource  : you can see @SysTick_ClkSrc_T
 * @param[in]	Copy_u8PreLoadVal : the preload value
 *	retval 		ErrorStatus
 * */
uint8_t SysTick_u8SetClkSrc(SysTick_ClkSrc_T Copy_u8ClkSource)
{
	uint8_t Local_u8ErrorState = OK;

	/*1. Set Clk Source*/
	SYSTICK->CSR &= ~(SYST_CLKSRC_MASK << SYST_CLKSRC_SHIFT);
	SYSTICK->CSR |= ~(Copy_u8ClkSource << SYST_CLKSRC_SHIFT);

	return Local_u8ErrorState;

}

/****************************************************/
/*	@brief		SysTick_u8ClkControl : control the timer by input configuration (Enable/Disable)
 * @param[in]	Copy_u8Control : you can see @SysTick_Control_T
 *	retval 		ErrorStatus
 * */
uint8_t SysTick_u8ClkControl(SysTick_Control_T Copy_u8Control)
{
	uint8_t Local_u8ErrorState = OK;

	SYSTICK->CSR &= ~(SYST_ENABLE_MASK);
	SYSTICK->CSR |= Copy_u8Control;

	return Local_u8ErrorState;

}

/****************************************************/
/*	@brief		SysTick_u8ReadClkValue : control the timer by input configuration (Enable/Disable)
 * @param[out]	Copy_u32Val : the Timer value  will be assigned in the variable
 *	retval 		ErrorStatus
 * */
uint8_t SysTick_u8ReadClkValue(uint32_t *Copy_u32Val)
{
	uint8_t Local_u8ErrorState = OK;

	*Copy_u32Val = SYSTICK->CVR;

	return Local_u8ErrorState;
}

uint8_t SysTick_u8GetCounterFlag(void)
{
	uint8_t Local_u8Flag = 0 ;
	Local_u8Flag = ((SYSTICK->CSR >> SYST_COUNT_FLAG_SHIFT)& SYST_COUNT_FLAG_ANDIG);

	return Local_u8Flag;
}

uint8_t SysTick_u8SetPreloadVal(uint32_t Copy_u32PreloadVal)
{
	uint8_t Local_u8ErrorState = 0 ;

	SYSTICK->RVR = Copy_u32PreloadVal;

	return Local_u8ErrorState;
}
