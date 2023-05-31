#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

#define RCC_HSE_CLK				1
#define RCC_HSI_CLK				2
#define RCC_PLL_CLK				3


#define RCC_ON					1
#define RCC_OFF					2

#define RCC_DIV_BY_1			1
#define RCC_DIV_BY_2			2



#define ENABEL					1
#define DISABLE


#define RCC_AHB_CLK				1
#define RCC_APB1_CLK			2
#define RCC_APB2_CLK			3


typedef enum
{
	DMA1,
	DMA2,
	SRAM,
	FLITF=4,
	CRC=6,
	FSMC=8,
	SDIO=10,
	AFIO=0,
	GPIOA=2,
	GPIOB,
	GPIOC,
	GPIOD,
	GPIOE,
	GPIOF,
	GPIOG,
	ADC1,
	ADC2,
	TIM1,
	SPI1,
	TIM8,
	USART1,
	ADC3,
	TIM9=19,
	TIM10,
	TIM11,
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
	USB,
	CAN=25,
	BKP=27,
	PWR,
	DAC


}Peripheral_T;

typedef enum
{
	RCC_PLL_MUL_2	 ,
	RCC_PLL_MUL_3	 ,
	RCC_PLL_MUL_4	 ,
	RCC_PLL_MUL_5	 ,
	RCC_PLL_MUL_6	 ,
	RCC_PLL_MUL_7	 ,
	RCC_PLL_MUL_8	 ,
	RCC_PLL_MUL_9	 ,
	RCC_PLL_MUL_10	 ,
	RCC_PLL_MUL_11	 ,
	RCC_PLL_MUL_12	 ,
	RCC_PLL_MUL_13	 ,
	RCC_PLL_MUL_14	 ,
	RCC_PLL_MUL_15	 ,
	RCC_PLL_MUL_16
}PLL_MUL_T;

/*ClockTpye :
 * 1. RCC_HSE_CLK
 * 2. RCC_HSI_CLK
 * 3. RCC_PLL_CLK
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
 */
uint8_t RCC_u8SetSysClock(uint8_t Copy_u8ClockType);

/*DivisionScale :
 * 1. RCC_DIV_BY_1
 * 2. RCC_DIV_BY_2
 * */
uint8_t RCC_u8HSEConfig(uint8_t Copy_u8DivisionScale);


/*PLLMul : MUL 2 to 16
 * PLLSrc :
 * 1. RCC_HSE_CLK
 * 2. RCC_HSI_CLK
 * */

uint8_t RCC_u8PLLConfig(PLL_MUL_T Copy_u8PLLMul , uint8_t Copy_u8PLLSrc);

/*PeripheralName:
 * enum Peripheral_T
 * Clk Type :
 * 1. RCC_AHB_CLK
 * 2. RCC_APB1_CLK
 * 3. RCC_APB2_CLK
 * */
uint8_t RCC_u8PeripheralClkEnable(Peripheral_T Copy_u8PeripheralName ,uint8_t Copy_u8ClkType );
uint8_t RCC_u8PeripheralClkDisable(Peripheral_T Copy_u8PeripheralName ,uint8_t Copy_u8ClkType );


/*return :
 * 1. RCC_HSE_CLK
 * 2. RCC_HSI_CLK
 * 3. RCC_PLL_CLK
 */
uint8_t RCC_u8GetSysClk(void);

#endif
