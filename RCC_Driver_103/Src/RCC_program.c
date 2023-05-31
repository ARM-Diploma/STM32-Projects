#include "stdint.h"
#include "../Inc/BIT_MATH.h"
#include "../Inc/STATUS.h"

#include "../Inc/RCC_config.h"
#include "../Inc/RCC_private.h"
#include "../Inc/RCC_interface.h"


uint8_t RCC_u8SetClockSrc(uint8_t Copy_u8ClockType , uint8_t Copy_u8Status)
{
	uint8_t Local_u8ErrorState = OK;
	uint32_t Localu32ClkCounter = 0;


	switch (Copy_u8ClockType)
	{
	case RCC_HSE_CLK :
		if(Copy_u8Status == RCC_ON)
		{
			/*Enable HSE*/
			SET_BIT(RCC->CR,RCC_CR_HSEON);

			/*Waiting for ready flag*/
			while((GET_BIT(RCC->CR,RCC_CR_HSERDY) == RCC_NOT_READY) && (Localu32ClkCounter < RCC_CLK_TIMEOUT))
			{
				Localu32ClkCounter++;
			}
			/*HSE is not ready and Timeout is reached*/
			if (Localu32ClkCounter == RCC_CLK_TIMEOUT)
			{
				Local_u8ErrorState = NOK;
			}
		}

		else if(Copy_u8Status == RCC_OFF)
		{
			/*Disable HSE*/
			CLR_BIT(RCC->CR,RCC_CR_HSEON);
		}

		else
		{
			Local_u8ErrorState = NOK;
		}

		break;

	case RCC_HSI_CLK :
		if(Copy_u8Status == RCC_ON)
		{
			/*Enable HSI*/
			SET_BIT(RCC->CR,RCC_CR_HSION);

			/*Waiting for ready flag*/
			while((GET_BIT(RCC->CR,RCC_CR_HSIRDY) == RCC_NOT_READY) && (Localu32ClkCounter < RCC_CLK_TIMEOUT))
			{
				Localu32ClkCounter++;
			}
			/*HSI is not ready and Timeout is reached*/
			if (Localu32ClkCounter == RCC_CLK_TIMEOUT)
			{
				Local_u8ErrorState = NOK;
			}
		}

		else if(Copy_u8Status == RCC_OFF)
		{
			/*Disable HSI*/
			CLR_BIT(RCC->CR,RCC_CR_HSION);
		}

		else
		{
			Local_u8ErrorState = NOK;
		}

		break;

	case RCC_PLL_CLK :
		if(Copy_u8Status == RCC_ON)
		{
			/*Enable PLL*/
			SET_BIT(RCC->CR,RCC_CR_PLLON);

			/*Waiting for ready flag*/
			while((GET_BIT(RCC->CR,RCC_CR_PLLRDY) == RCC_NOT_READY) && (Localu32ClkCounter < RCC_CLK_TIMEOUT))
			{
				Localu32ClkCounter++;
			}
			/*PLL is not ready and Timeout is reached*/
			if (Localu32ClkCounter == RCC_CLK_TIMEOUT)
			{
				Local_u8ErrorState = NOK;
			}
		}

		else if(Copy_u8Status == RCC_OFF)
		{
			/*Disable PLL*/
			CLR_BIT(RCC->CR,RCC_CR_PLLON);
		}

		else
		{
			Local_u8ErrorState = NOK;
		}


		break;

	default : Local_u8ErrorState = NOK;
	}

	return Local_u8ErrorState;

}

uint8_t RCC_u8SetSysClock(uint8_t Copy_u8ClockType)
{
	uint8_t Local_u8ErrorState = 0;

	switch (Copy_u8ClockType)
	{
	/*Set HSI as sysclk*/
	case RCC_HSI_CLK :
		CLR_BIT(RCC->CFGR,RCC_CFGR_SW0);
		CLR_BIT(RCC->CFGR,RCC_CFGR_SW1);
		break;

		/*Set HSE as sysclk*/
	case RCC_HSE_CLK :
		SET_BIT(RCC->CFGR,RCC_CFGR_SW0);
		CLR_BIT(RCC->CFGR,RCC_CFGR_SW1);
		break;

		/*Set PLL as sysclk*/
	case RCC_PLL_CLK :
		CLR_BIT(RCC->CFGR,RCC_CFGR_SW0);
		SET_BIT(RCC->CFGR,RCC_CFGR_SW1);
		break;

	default : Local_u8ErrorState = 1;
	}

	return Local_u8ErrorState;
}


uint8_t RCC_u8HSEConfig(uint8_t Copy_u8DivisionScale)
{
	uint8_t Local_u8ErrorState = OK;

	if (Copy_u8DivisionScale == RCC_DIV_BY_1)
	{
		/*Divide HSE by 1*/
		CLR_BIT(RCC->CFGR,RCC_CFGR_PLLXTPRE);
	}

	else if (Copy_u8DivisionScale == RCC_DIV_BY_2)
	{
		/*Divide HSE by 2*/
		SET_BIT(RCC->CFGR,RCC_CFGR_PLLXTPRE);
	}

	else
	{
		Local_u8ErrorState = NOK;
	}
	return Local_u8ErrorState;

}


uint8_t RCC_u8PLLConfig(PLL_MUL_T Copy_u8PLLMul , uint8_t Copy_u8PLLSrc)
{
	uint8_t Local_u8ErrorState = OK;

	/*1. Set PLL source*/
	if(Copy_u8PLLSrc == RCC_HSI_CLK)
	{
		/*Set HSI as PLL source*/
		CLR_BIT(RCC->CFGR,RCC_CFGR_PLLSRC);
	}

	else if(Copy_u8PLLSrc == RCC_HSE_CLK)
	{
		/*Set HSE as PLL source*/
		SET_BIT(RCC->CFGR,RCC_CFGR_PLLSRC);
	}

	else
	{
		Local_u8ErrorState = NOK;
	}

	/*2. Set PLL Multiplication factor*/
	RCC->CFGR |= Copy_u8PLLMul<<PLLMUL_SHIFT;

	return Local_u8ErrorState;

}

uint8_t RCC_u8PeripheralClkEnable(Peripheral_T Copy_u8PeripheralName ,uint8_t Copy_u8ClkType )
{
	uint8_t Local_u8ErrorState = OK;
	switch(Copy_u8ClkType)
	{

	case RCC_AHB_CLK  : SET_BIT(RCC->AHBENR,Copy_u8PeripheralName);break;
	case RCC_APB1_CLK : SET_BIT(RCC->APB1ENR,Copy_u8PeripheralName);break;
	case RCC_APB2_CLK : SET_BIT(RCC->APB2ENR,Copy_u8PeripheralName);break;
	default : Local_u8ErrorState = NOK;
	}
	return Local_u8ErrorState;

}

uint8_t RCC_u8PeripheralClkDisable(Peripheral_T Copy_u8PeripheralName ,uint8_t Copy_u8ClkType )
{
	uint8_t Local_u8ErrorState = OK;
	switch(Copy_u8ClkType)
	{

	case RCC_AHB_CLK  : CLR_BIT(RCC->AHBENR,Copy_u8PeripheralName);break;
	case RCC_APB1_CLK : CLR_BIT(RCC->APB1ENR,Copy_u8PeripheralName);break;
	case RCC_APB2_CLK : CLR_BIT(RCC->APB2ENR,Copy_u8PeripheralName);break;
	default : Local_u8ErrorState = NOK;
	}
	return Local_u8ErrorState;

}
uint8_t RCC_u8GetSysClk(void)
{

	uint8_t Local_u8Sysclk,Local_u8GetState0,Local_u8GetState1;

	Local_u8GetState0 = GET_BIT(RCC->CFGR,RCC_CFGR_SWS0);
	Local_u8GetState1 = GET_BIT(RCC->CFGR,RCC_CFGR_SWS1);

	/*HSI is the sysclk*/
	if(Local_u8GetState0 == 0 && Local_u8GetState1 == 0)
	{
		Local_u8Sysclk = RCC_HSI_CLK;
	}

	/*HSE is the sysclk*/
	else if(Local_u8GetState0 == 1 && Local_u8GetState1 == 0)
	{
		Local_u8Sysclk = RCC_HSE_CLK;
	}

	/*PLL is the sysclk*/
	else if(Local_u8GetState0 == 0 && Local_u8GetState1 == 1)
	{
		Local_u8Sysclk = RCC_HSE_CLK;
	}

	return Local_u8Sysclk;
}

