/****************************************************************************/
/*
 * @file 		SysTick_program.c
 * @author		Hanin Anwar
 * @brief		the SysTick main source file, including functions' definitions
 *
 * */

#include <stdint.h>
#include "../Inc/STATUS.h"

#include "../Inc/STM32F103xx.h"
#include "../Inc/SysTick_private.h"
#include "../Inc/SysTick_interface.h"


/****************************************************/
/*	@brief		SysTick_u8ClkInit : Initialize  SysTick according to input paramters
 * @param[in]	Copy_u8ClkSource  : you can see @SysTick_ClkSrc_T
 * @param[in]	Copy_u8PreLoadVal : the preload value
 *	retval 		ErrorStatus
 * */
uint8_t SysTick_u8ClkInit(SysTick_ClkSrc_T Copy_u8ClkSource , uint32_t Copy_u8PreLoadVal)
{
	uint8_t Local_u8ErrorState = OK;

	/*1. Set Preload value*/
	SYSTICK->RVR &= ~(SYST_PRELOAD_MASK);
	SYSTICK->RVR |= Copy_u8PreLoadVal;

	/*2. Set Clk Source*/
	SYSTICK->CSR &= ~(SYST_CLKSRC_MASK << SYST_CLKSRC_SHIFT);
	SYSTICK->CSR |= ~(Copy_u8ClkSource << SYST_CLKSRC_SHIFT);



	/*3. Enable Timer*/
	SYSTICK->CSR &= ~(SYST_ENABLE_MASK);
	SYSTICK->CSR |= ENABLE;

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
