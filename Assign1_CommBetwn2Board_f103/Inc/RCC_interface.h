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
	DMA1_Per,
	DMA2_Per,
	SRAM_Per,
	FLITF_Per=4,
	CRC_Per=6,
	FSMC_Per=8,
	SDIO_Per=10,
	AFIO_Per=0,
	GPIOA_Per=2,
	GPIOB_Per,
	GPIOC_Per,
	GPIOD_Per,
	GPIOE_Per,
	GPIOF_Per,
	GPIOG_Per,
	ADC1_Per,
	ADC2_Per,
	TIM1_Per,
	SPI1_Per,
	TIM8_Per,
	USART1_Per,
	ADC3_Per,
	TIM9_Per=19,
	TIM10_Per,
	TIM11_Per,
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
	USB_Per,
	CAN_Per=25,
	BKP_Per=27,
	PWR_Per,
	DAC_Per


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
