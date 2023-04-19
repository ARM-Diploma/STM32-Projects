#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

#define RCC_HSE_CLK				1
#define RCC_HSI_CLK				2
#define RCC_PLL_CLK				3


#define RCC_ON					1
#define RCC_OFF					2

#define RCC_DIV_BY_1			1
#define RCC_DIV_BY_2			2

#define RCC_PLL_MUL_2			0
#define RCC_PLL_MUL_3			1
#define RCC_PLL_MUL_4			2
#define RCC_PLL_MUL_5			3
#define RCC_PLL_MUL_6			4
#define RCC_PLL_MUL_7			5
#define RCC_PLL_MUL_8			6
#define RCC_PLL_MUL_9			7
#define RCC_PLL_MUL_10			8
#define RCC_PLL_MUL_11			9
#define RCC_PLL_MUL_12			10
#define RCC_PLL_MUL_13			11
#define RCC_PLL_MUL_14			12
#define RCC_PLL_MUL_15			13
#define RCC_PLL_MUL_16			14

#define ENABEL					1
#define DISABLE


#define RCC_AHB_CLK				1
#define RCC_APB1_CLK			2
#define RCC_APB2_CLK			3

typedef enum
{
	USB,
	CRC,
	DMA1,
	DMA2,
	SDIO,
	TIM1,
	TIM2,
	TIM3,
	TIM4,
	TIM5,
	TIM7,
	TIM8,
	TIM9,
	TIM10,
	TIM11,
	TIM12,
	TIM13,
	TIM14,
	ADC1,
	ADC2,
	ADC3,
	DAC,
	USART1,
	USART2,
	USART3,
	UART4,
	UART5,
	SPI1,
	GPIOA,
	GPIOB,
	GPIOC,
	GPIOD,
	GPIOE,
	GPIOF,
	GPIOG,
	EXTI,
	AFIO,
	POW,
	BKP,
	CAN1,
	CAN2,
	I2C1,
	I2C2


}Peripheral_T;
/*ClockTpye :
 * 1. RCC_HSE_CLK
 * 2. RCC_HSI_CLK
 * 3. RCC_PLL_CLK
 *
 * Status :
 * 1. RCC_ON
 * 2. RCC_OFF
 * */
int8_t RCC_Int8SetClockSrc(int8_t Copy_int8ClockType , int8_t Copy_int8Status);

/*ClockType :
 * 1. RCC_HSE_CLK
 * 2. RCC_HSI_CLK
 * 3. RCC_PLL_CLK
 */
int8_t RCC_Int8SetSysClock(int8_t Copy_int8ClockType);

/*DivisionScale :
 * 1. RCC_HSE_DIV_BY_1
 * 2. RCC_HSE_DIV_BY_2
 * */
int8_t RCC_Int8HSEConfig(int8_t Copy_int8DivisionScale);


/*PLLMul : MUL 2 to 16
 * PLLSrc :
 * 1. RCC_HSE_CLK
 * 2. RCC_HSI_CLK
 * */

int8_t RCC_Int8PLLConfig(int8_t Copy_int8PLLMul , int8_t Copy_int8PLLSrc);

/*PeripheralName:
 * enum Peripheral_T
 * Control :
 * 1. ENABLE
 * 2. DISABLE*/
int8_t RCC_Int8PeripheralClkControl(int8_t Copy_int8PeripheralName , int8_t Copy_int8Control);


/*return :
* 1. RCC_HSE_CLK
* 2. RCC_HSI_CLK
* 3. RCC_PLL_CLK
 */
int8_t RCC_Int8GetSysClk(void);

#endif
