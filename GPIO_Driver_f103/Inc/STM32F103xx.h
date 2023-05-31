#ifndef STM32F103XX_H_
#define STM32F103XX_H_

/*********************  Various Memories Base Adresses   *********************/

#define FLASH_BASE_ADDRESS      0x40022000UL
#define SRAM_BASE_ADDRESS       0x20000000UL  

/*********************  AHB Peripheral Base Adresses   *********************/

#define RCC_BASE_ADDRESS         0x40021000U


/*********************  APB1 Peripheral Base Addresses   *********************/



/*********************  APB2 Peripheral Base Addresses   *********************/

#define GPIOA_BASE_ADDRESS       0x40010800U
#define GPIOB_BASE_ADDRESS       0x40010C00U
#define GPIOC_BASE_ADDRESS       0x40011000U
#define GPIOD_BASE_ADDRESS       0x40011400U
#define GPIOE_BASE_ADDRESS       0x40011800U
#define GPIOF_BASE_ADDRESS       0x40011C00U
#define GPIOG_BASE_ADDRESS       0x40012000U


#define AFIO_BASE_ADDRESS		 0x40010000U

/*********************  GPIO Register Definition Structure   *********************/
typedef struct
{
    volatile uint32_t CR[2];
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
    volatile uint32_t BRR;
    volatile uint32_t LCKR;

}GPIO_RegDef_T;


/*********************  GPIO Register Definition    *********************/
#define GPIOA            ((GPIO_RegDef_T  *)GPIOA_BASE_ADDRESS)
#define GPIOB            ((GPIO_RegDef_T  *)GPIOB_BASE_ADDRESS)
#define GPIOC            ((GPIO_RegDef_T  *)GPIOC_BASE_ADDRESS)
#define GPIOD            ((GPIO_RegDef_T  *)GPIOD_BASE_ADDRESS)
#define GPIOE            ((GPIO_RegDef_T  *)GPIOE_BASE_ADDRESS)
#define GPIOF            ((GPIO_RegDef_T  *)GPIOF_BASE_ADDRESS)
#define GPIOG            ((GPIO_RegDef_T  *)GPIOG_BASE_ADDRESS)

/*********************  RCC Register Definition Structure   *********************/

typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;

}RCC_T;

/*********************  RCC Register Definition    *********************/

#define RCC						((RCC_T *)RCC_BASE_ADDRESS)

/*********	CR register bits	*********/
#define RCC_CR_HSION			0	/*Enable HSI bit*/
#define RCC_CR_HSIRDY			1	/*HSI ready flag*/

#define RCC_CR_HSEON			16	/*Enable HSE bit*/
#define RCC_CR_HSERDY			17	/*HSE ready flag*/

#define RCC_CR_PLLON			24	/*Enable PLL bit*/
#define RCC_CR_PLLRDY			25	/*PLL ready flag*/

/*********	CFGR register bits	*********/
#define RCC_CFGR_PLLSRC			16	/*PLL src Setting bit*/
#define RCC_CFGR_PLLXTPRE		17	/*HSE divider as PLL src*/

#define RCC_CFGR_SW0			0	/*System clock switch bit0*/
#define RCC_CFGR_SW1			1	/*System clock switch bit1*/


#define RCC_CFGR_SWS0			2	/*System clock status switch bit0*/
#define RCC_CFGR_SWS1			3	/*System clock status switch bit1*/


/*********************  AFIO Register Definition Structure   *********************/
typedef struct
{
    volatile uint32_t EVCR;
    volatile uint32_t MAPR;
    volatile uint32_t EXTICR1;
    volatile uint32_t EXTICR2;
    volatile uint32_t EXTICR3;
    volatile uint32_t EXTICR4;
    volatile uint32_t MAPR2;

}AFIO_RegDef_T;

#define AFIO						((AFIO_RegDef_T *)AFIO_BASE_ADDRESS)


#endif
