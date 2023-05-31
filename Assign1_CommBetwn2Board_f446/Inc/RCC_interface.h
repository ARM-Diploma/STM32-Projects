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
		GPIOA_Per,
		GPIOB_Per,
		GPIOC_Per,
		GPIOD_Per,
		GPIOE_Per,
		GPIOF_Per,
		GPIOG_Per,
		GPIOH_Per,
		CRC_Per=12,
		DMA1_Per=21,
		DMA2_Per,
		TIM2_Per=0,
		TIM3_Per,
		TIM4_Per,
		TIM5_Per,
		TIM6_Per,
		TIM7_Per,
		TIM12_Per,
		TIM13_Per,
		TIM14_Per,
		WWDG_Per=11,
		SPI2_Per=14,
		SPI3_Per,
		USART2_Per=17,
		USART3_Per,
		UART4_Per,
		UART5_Per,
		I2C1_Per,
		I2C2_Per,
		I2C3_Per,
		CAN1_Per=25,
		CAN2_Per=26,

		TIM1_Per=0,
		TIM8_Per,
		USART1_Per=4,
		USART6_Per,
		ADC1_Per=8,
		ADC2_Per,
		ADC3_Per,
		SDIO_Per,
		SPI1_Per,
		SPI4_Per,
		SYSCFG_Per,
		TIM9_Per=16,
		TIM10_Per,
		TIM11_Per


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
