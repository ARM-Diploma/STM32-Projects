#include "stdint.h"
#include "../Inc/BIT_MATH.h"
#include "../Inc/STATUS.h"

#include "../Inc/RCC_config.h"
#include "../Inc/RCC_private.h"
#include "../Inc/RCC_interface.h"


int8_t RCC_Int8SetClockSrc(int8_t Copy_int8ClockType , int8_t Copy_int8Status)
{
	int8_t Local_int8ErrorState = OK;
	int32_t Local_int32ClkCounter = 0;


	switch (Copy_int8ClockType)
	{
	case RCC_HSE_CLK :
		if(Copy_int8Status == RCC_ON)
		{
			/*Enable HSE*/
			SET_BIT(RCC->CR,RCC_CR_HSEON);
		}

		else if(Copy_int8Status == RCC_OFF)
		{
			/*Disable HSE*/
			CLR_BIT(RCC->CR,RCC_CR_HSEON);
		}

		else
		{
			Local_int8ErrorState = NOK;
		}
		/*Waiting for ready flag*/
		while((GET_BIT(RCC->CR,RCC_CR_HSERDY) == RCC_NOT_READY) && (Local_int32ClkCounter < RCC_CLK_TIMEOUT))
		{
			Local_int32ClkCounter++;
		}
		/*HSE is not ready and Timeout is reached*/
		if (Local_int32ClkCounter == RCC_CLK_TIMEOUT)
		{
			Local_int8ErrorState = NOK;
		}

		break;

	case RCC_HSI_CLK :
		if(Copy_int8Status == RCC_ON)
		{
			/*Enable HSI*/
			SET_BIT(RCC->CR,RCC_CR_HSION);
		}

		else if(Copy_int8Status == RCC_OFF)
		{
			/*Disable HSI*/
			CLR_BIT(RCC->CR,RCC_CR_HSION);
		}

		else
		{
			Local_int8ErrorState = NOK;
		}
		/*Waiting for ready flag*/
		while((GET_BIT(RCC->CR,RCC_CR_HSIRDY) == RCC_NOT_READY) && (Local_int32ClkCounter < RCC_CLK_TIMEOUT))
		{
			Local_int32ClkCounter++;
		}
		/*HSI is not ready and Timeout is reached*/
		if (Local_int32ClkCounter == RCC_CLK_TIMEOUT)
		{
			Local_int8ErrorState = NOK;
		}
		break;

	case RCC_PLL_CLK :
		if(Copy_int8Status == RCC_ON)
		{
			/*Enable PLL*/
			SET_BIT(RCC->CR,RCC_CR_PLLON);
		}

		else if(Copy_int8Status == RCC_OFF)
		{
			/*Disable PLL*/
			CLR_BIT(RCC->CR,RCC_CR_PLLON);
		}

		else
		{
			Local_int8ErrorState = NOK;
		}

		/*Waiting for ready flag*/
		while((GET_BIT(RCC->CR,RCC_CR_PLLRDY) == RCC_NOT_READY) && (Local_int32ClkCounter < RCC_CLK_TIMEOUT))
		{
			Local_int32ClkCounter++;
		}
		/*PLL is not ready and Timeout is reached*/
		if (Local_int32ClkCounter == RCC_CLK_TIMEOUT)
		{
			Local_int8ErrorState = NOK;
		}
		break;

	default : Local_int8ErrorState = NOK;
	}

	return Local_int8ErrorState;

}

int8_t RCC_Int8SetSysClock(int8_t Copy_int8ClockType)
{
	int8_t Local_int8ErrorState = 0;

	switch (Copy_int8ClockType)
	{
	/*Set HSI as sysclk*/
	case RCC_HSI_CLK :
		CLR_BIT(RCC->CFGR,RCC_CFGR_SW0);
		CLR_BIT(RCC->CFGR,RCC_CFGR_SW1);
		break;

		/*Set HSE as sysclk*/
	case RCC_HSE_CLK :
		CLR_BIT(RCC->CFGR,RCC_CFGR_SW0);
		SET_BIT(RCC->CFGR,RCC_CFGR_SW1);
		break;

		/*Set PLL as sysclk*/
	case RCC_PLL_CLK :
		SET_BIT(RCC->CFGR,RCC_CFGR_SW0);
		CLR_BIT(RCC->CFGR,RCC_CFGR_SW1);
		break;

	default : Local_int8ErrorState = 1;
	}

	return Local_int8ErrorState;
}


int8_t RCC_Int8HSEConfig(int8_t Copy_int8DivisionScale)
{
	int8_t Local_int8ErrorState = OK;

	if (Copy_int8DivisionScale == RCC_DIV_BY_1)
	{
		/*Divide HSE by 1*/
		CLR_BIT(RCC->CFGR,RCC_CFGR_PLLXTPRE);
	}

	else if (Copy_int8DivisionScale == RCC_DIV_BY_2)
	{
		/*Divide HSE by 2*/
		SET_BIT(RCC->CFGR,RCC_CFGR_PLLXTPRE);
	}

	else
	{
		Local_int8ErrorState = NOK;
	}
	return Local_int8ErrorState;

}


int8_t RCC_Int8PLLConfig(int8_t Copy_int8PLLMul , int8_t Copy_int8PLLSrc)
{
	int8_t Local_int8ErrorState = OK;

	/*1. Set PLL source*/
	if(Copy_int8PLLSrc == RCC_HSI_CLK)
	{
		/*Set HSI as PLL source*/
		CLR_BIT(RCC->CFGR,RCC_CFGR_PLLSRC);
	}

	else if(Copy_int8PLLSrc == RCC_HSE_CLK)
	{
		/*Set HSE as PLL source*/
		SET_BIT(RCC->CFGR,RCC_CFGR_PLLSRC);
	}

	else
	{
		Local_int8ErrorState = NOK;
	}

	/*2. Set PLL Multiplication factor*/
	RCC->CFGR |= Copy_int8PLLMul<<PLLMUL_SHIFT;

	return Local_int8ErrorState;

}

int8_t RCC_Int8PeripheralClkControl(int8_t Copy_int8PeripheralClk , int8_t Copy_int8PeripheralName)
{
	int8_t Local_int8ErrorState = OK;
	switch(Copy_int8PeripheralClk)
	{

	case RCC_AHB_CLK  : SET_BIT(RCC->AHBENR,Copy_int8PeripheralName);break;
	case RCC_APB1_CLK : SET_BIT(RCC->APB1ENR,Copy_int8PeripheralName);break;
	case RCC_APB2_CLK  : SET_BIT(RCC->APB2ENR,Copy_int8PeripheralName);break;
	default : Local_int8ErrorState = NOK;
	}
	return Local_int8ErrorState;

}
int8_t RCC_Int8GetSysClk(void)
{

	int8_t Local_int8GetState0,Local_int8GetState1;

	Local_int8GetState0 = GET_BIT(RCC->CFGR,RCC_CFGR_SWS0);
	Local_int8GetState1 = GET_BIT(RCC->CFGR,RCC_CFGR_SWS1);

	/*HSI is the sysclk*/
	if(Local_int8GetState0 == 0 && Local_int8GetState1 == 0)
	{
		return RCC_HSI_CLK;
	}

	/*HSE is the sysclk*/
	else if(Local_int8GetState0 == 1 && Local_int8GetState1 == 0)
	{
		return RCC_HSE_CLK;
	}

	/*PLL is the sysclk*/
	else if(Local_int8GetState0 == 0 && Local_int8GetState1 == 1)
	{
		return RCC_HSE_CLK;
	}
}

