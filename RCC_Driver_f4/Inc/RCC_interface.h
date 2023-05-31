#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

#define RCC_HSE_CLK				1
#define RCC_HSI_CLK				2
#define RCC_PLL_CLK				3
#define RCC_PLLR_CLK			4


#define RCC_ON					1
#define RCC_OFF					2


#define ENABEL					1
#define DISABLE


#define RCC_AHB1_CLK			1
#define RCC_AHB2_CLK			2
#define RCC_AHB3_CLK			3

#define RCC_APB1_CLK			4
#define RCC_APB2_CLK			5


typedef enum
{
		GPIO_A,
		GPIO_B,
		GPIO_C,
		GPIO_D,
		GPIO_E,
		GPIO_F,
		GPIO_G,
		GPIO_H,
		CRC=12,
		DMA1=21,
		DMA2,
		TIM2=0,
		TIM3,
		TIM4,
		TIM5,
		TIM6,
		TIM7,
		TIM12,
		TIM13,
		TIM14,
		WWDG=11,
		SPI2=14,
		SPI3,
		USART2=17,
		USART3,
		UART4,
		UART5,
		I2C1,
		I2C2,
		I2C3,
		CAN1=25,
		CAN2=26,

		TIM1=0,
		TIM8,
		USART1=4,
		USART6,
		ADC1=8,
		ADC2,
		ADC3,
		SDIO,
		SPI1,
		SPI4,
		SYSCFG,
		TIM9=16,
		TIM10,
		TIM11


}Peripheral_T;

/*
 * PLLSrc :
 * 1. RCC_HSE_CLK
 * 2. RCC_HSI_CLK
 *
 * PLLMul : MUL 50 to 432
 *
 * PLLMDiv : DIV 2 to 63
 *
 * PLLPDiv : DIV 2 , 4, 6 , 8
 *
 * PLLRDiv : DIV 2 to 7
 * */
typedef struct
{
	uint8_t PLL_Src ;
	uint8_t PLLMul 	;
	uint8_t PLL_M_Div ;
	uint8_t PLL_P_Div	;
	uint8_t PLL_R_Div	;

}PLL_CONFG_T;

/*ClockTpye :
 * 1. RCC_HSE_CLK
 * 2. RCC_HSI_CLK
 * 3. RCC_PLL_CLK
 * 4. RCC_PLLR_CLK
 *
 * Status :
 * 1. RCC_ON
 * 2. RCC_OFF
 * */

uint8_t RCC_u8SetClockSrc(uint8_t Copy_u8ClockType , uint8_t Copy_u8Status);

/*ClockType :
 * 1. RCC_HSE_CLK
 * 2. RCC_HSI_CLK
 * 3. RCC_PLL_CLK
 * 4. RCC_PLLR_CLK
 */
uint8_t RCC_u8SetSysClock(uint8_t Copy_u8ClockType);



uint8_t RCC_u8PLLConfig(PLL_CONFG_T *Copy_PLL_CONFG);


/*PeripheralName:
 * enum Peripheral_T
 *
 * Clk Type :
 * 1. RCC_AHB1_CLK
 * 2. RCC_AHB2_CLK
 * 3. RCC_AHB3_CLK
 * 4. RCC_APB1_CLK
 * 5. RCC_APB2_CLK*/

uint8_t RCC_u8PeripheralClkEnable(Peripheral_T Copy_u8PeripheralName ,uint8_t Copy_u8ClkType );
uint8_t RCC_u8PeripheralClkDisable(Peripheral_T Copy_u8PeripheralName ,uint8_t Copy_u8ClkType );


/*return :
 * 1. RCC_HSE_CLK
 * 2. RCC_HSI_CLK
 * 3. RCC_PLL_CLK
 */
uint8_t RCC_u8GetSysClk(void);

#endif
