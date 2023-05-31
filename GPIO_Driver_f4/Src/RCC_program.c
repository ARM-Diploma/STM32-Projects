#include "stdint.h"
#include "../Inc/BIT_MATH.h"
#include "../Inc/STATUS.h"

#include "../Inc/STM32F446xx.h"
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

	case RCC_PLLR_CLK :
		if(Copy_u8Status == RCC_ON)
		{
			/*Enable PLL*/
			SET_BIT(RCC->CR,RCC_CR_PLLI2SON);

			/*Waiting for ready flag*/
			while((GET_BIT(RCC->CR,RCC_CR_PLLI2SRDY) == RCC_NOT_READY) && (Localu32ClkCounter < RCC_CLK_TIMEOUT))
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
			CLR_BIT(RCC->CR,RCC_CR_PLLI2SON);
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

		/*Set PLLR as sysclk*/
	case RCC_PLLR_CLK :
		SET_BIT(RCC->CFGR,RCC_CFGR_SW0);
		SET_BIT(RCC->CFGR,RCC_CFGR_SW1);
		break;
	default : Local_u8ErrorState = 1;
	}

	return Local_u8ErrorState;
}


uint8_t RCC_u8PLLConfig(PLL_CONFG_T *Copy_PLL_CONFG)
{
	uint8_t Local_u8ErrorState = OK;

	/*1. Set PLL source*/
	if(Copy_PLL_CONFG->PLL_Src == RCC_HSI_CLK)
	{
		/*Set HSI as PLL source*/
		CLR_BIT(RCC->PLL_CFGR,RCC_CFGR_PLLSRC);
	}

	else if(Copy_PLL_CONFG->PLL_Src == RCC_HSE_CLK)
	{
		/*Set HSE as PLL source*/
		SET_BIT(RCC->PLL_CFGR,RCC_CFGR_PLLSRC);
	}

	else
	{
		Local_u8ErrorState = NOK;
	}

	/*2.1 Check if input factors are valid*/
	if((Copy_PLL_CONFG->PLLMul >=PLL_MUL_MIN) && (Copy_PLL_CONFG->PLLMul <=PLL_MUL_MAX)
			&& (Copy_PLL_CONFG->PLL_M_Div >=PLL_M_DIV_MIN) && (Copy_PLL_CONFG->PLL_M_Div <=PLL_M_DIV_MAX)
			&& (Copy_PLL_CONFG->PLL_R_Div >=PLL_R_DIV_MIN) && (Copy_PLL_CONFG->PLL_R_Div <=PLL_R_DIV_MAX))

	{
		/*2.2 Set PLL Multiplication & Division factors*/
		RCC->PLL_CFGR &= PLL_MASK;
		RCC->PLL_CFGR |=  (Copy_PLL_CONFG->PLLMul<<PLLMUL_SHIFT)
											| (Copy_PLL_CONFG->PLL_M_Div<<PLL_M_DIV_SHIFT)
											| (Copy_PLL_CONFG->PLL_R_Div<<PLL_R_DIV_SHIFT);
	}

	else
	{
		Local_u8ErrorState = NOK;
	}

	/* 3. Set PLL_P Division factor*/
	switch(Copy_PLL_CONFG->PLL_P_Div)
	{
	case 2 : CLR_BIT(RCC->PLL_CFGR,RCC_CFGR_PLLP0); CLR_BIT(RCC->PLL_CFGR,RCC_CFGR_PLLP1); break;
	case 4 : CLR_BIT(RCC->PLL_CFGR,RCC_CFGR_PLLP0); SET_BIT(RCC->PLL_CFGR,RCC_CFGR_PLLP1); break;
	case 6 : SET_BIT(RCC->PLL_CFGR,RCC_CFGR_PLLP0); CLR_BIT(RCC->PLL_CFGR,RCC_CFGR_PLLP1); break;
	case 8 : SET_BIT(RCC->PLL_CFGR,RCC_CFGR_PLLP0); SET_BIT(RCC->PLL_CFGR,RCC_CFGR_PLLP1); break;
	default : Local_u8ErrorState = NOK;
	}



	return Local_u8ErrorState;

}

uint8_t RCC_u8PeripheralClkEnable(Peripheral_T Copy_u8PeripheralName ,uint8_t Copy_u8ClkType )
{
	uint8_t Local_u8ErrorState = OK;
	switch(Copy_u8ClkType)
	{

	case RCC_AHB1_CLK  : SET_BIT(RCC->AHB1ENR,Copy_u8PeripheralName);break;
	case RCC_AHB2_CLK  : SET_BIT(RCC->AHB2ENR,Copy_u8PeripheralName);break;
	case RCC_AHB3_CLK  : SET_BIT(RCC->AHB3ENR,Copy_u8PeripheralName);break;
	case RCC_APB1_CLK  : SET_BIT(RCC->APB1ENR,Copy_u8PeripheralName);break;
	case RCC_APB2_CLK  : SET_BIT(RCC->APB2ENR,Copy_u8PeripheralName);break;
	default : Local_u8ErrorState = NOK;
	}
	return Local_u8ErrorState;

}

uint8_t RCC_u8PeripheralClkDisable(Peripheral_T Copy_u8PeripheralName ,uint8_t Copy_u8ClkType )
{
	uint8_t Local_u8ErrorState = OK;
	switch(Copy_u8ClkType)
	{

	case RCC_AHB1_CLK  : CLR_BIT(RCC->AHB1ENR,Copy_u8PeripheralName);break;
	case RCC_AHB2_CLK  : CLR_BIT(RCC->AHB2ENR,Copy_u8PeripheralName);break;
	case RCC_AHB3_CLK  : CLR_BIT(RCC->AHB3ENR,Copy_u8PeripheralName);break;
	case RCC_APB1_CLK  : CLR_BIT(RCC->APB1ENR,Copy_u8PeripheralName);break;
	case RCC_APB2_CLK  : CLR_BIT(RCC->APB2ENR,Copy_u8PeripheralName);break;
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

