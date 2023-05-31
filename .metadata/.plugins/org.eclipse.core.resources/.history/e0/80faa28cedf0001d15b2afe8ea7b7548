#ifndef STM32F446XX_H_
#define STM32F446XX_H_

/*********************  Various Memories Base Adresses   *********************/

#define FLASH_BASE_ADDRESS      0x08000000UL
#define SRAM_BASE_ADDRESS       0x20000000UL  
#define ROM_BASE_ADDRESS        0x1FFF0000UL  

/*********************  AHB1 Peripheral Base Adresses   *********************/

#define GPIOA_BASE_ADDRESS       0x40020000U
#define GPIOB_BASE_ADDRESS       0x40020400U
#define GPIOC_BASE_ADDRESS       0x40020800U
#define GPIOD_BASE_ADDRESS       0x40020C00U
#define GPIOE_BASE_ADDRESS       0x40021000U
#define GPIOF_BASE_ADDRESS       0x40021400U
#define GPIOG_BASE_ADDRESS       0x40021800U
#define GPIOH_BASE_ADDRESS       0x40021C00U

#define RCC_BASE_ADDRESS         0x40023800U

/*********************  AHB2 Peripheral Base Addresses   *********************/



/*********************  AHB3 Peripheral Base Addresses   *********************/



/*********************  APB1 Peripheral Base Addresses   *********************/



/*********************  APB2 Peripheral Base Addresses   *********************/


/*********************  GPIO Register Definition Structure   *********************/
typedef struct
{
    volatile    uint32_t  MODER ;       
    volatile    uint32_t  OTYPER ;
    volatile    uint32_t  OSPEEDER;
    volatile    uint32_t  PUPDR;
    volatile    uint32_t  IDR  ;
    volatile    uint32_t  ODR  ;
    volatile    uint32_t  BSRR  ;
    volatile    uint32_t  LCKR  ;
    volatile    uint32_t  AFR[2]  ;

}GPIO_RegDef_T;


/*********************  GPIO Register Definition    *********************/
#define GPIOA            ((GPIO_RegDef_T  *)GPIOA_BASE_ADDRESS)
#define GPIOB            ((GPIO_RegDef_T  *)GPIOB_BASE_ADDRESS)
#define GPIOC            ((GPIO_RegDef_T  *)GPIOC_BASE_ADDRESS)
#define GPIOD            ((GPIO_RegDef_T  *)GPIOD_BASE_ADDRESS)
#define GPIOE            ((GPIO_RegDef_T  *)GPIOE_BASE_ADDRESS)
#define GPIOF            ((GPIO_RegDef_T  *)GPIOF_BASE_ADDRESS)
#define GPIOG            ((GPIO_RegDef_T  *)GPIOG_BASE_ADDRESS)
#define GPIOH            ((GPIO_RegDef_T  *)GPIOH_BASE_ADDRESS)

/*********************  RCC Register Definition Structure   *********************/

typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t PLL_CFGR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t AHB1RSTR;
	volatile uint32_t AHB2RSTR;
	volatile uint32_t AHB3RSTR;
	volatile uint32_t RESERVED_1;
	volatile uint32_t APB1RSTR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t RESERVED_2;
	volatile uint32_t RESERVED_3;
	volatile uint32_t AHB1ENR;
	volatile uint32_t AHB2ENR;
	volatile uint32_t AHB3ENR;
	volatile uint32_t RESERVED_4;
	volatile uint32_t APB1ENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t RESERVED_5;
	volatile uint32_t RESERVED_6;
	volatile uint32_t AHB1LPENR;
	volatile uint32_t AHB2LPENR;
	volatile uint32_t AHB3LPENR;
	volatile uint32_t RESERVED_7;
	volatile uint32_t APB1LPENR;
	volatile uint32_t APB2LPENR;
	volatile uint32_t RESERVED_8;
	volatile uint32_t RESERVED_9;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t RESERVED_10;
	volatile uint32_t RESERVED_11;
	volatile uint32_t SSCGR;
	volatile uint32_t PLLI2SCFGR;
	volatile uint32_t PLLSAICFGR;
	volatile uint32_t DCKCFGR;
	volatile uint32_t CKGATENR;
	volatile uint32_t DCKCFGR2;


}RCC_RegDef_T;

/*********************  RCC Register Definition    *********************/

#define RCC						((RCC_RegDef_T *)RCC_BASE_ADDRESS)


/*********	CR register bits	*********/
#define RCC_CR_HSION			0	/*Enable HSI bit*/
#define RCC_CR_HSIRDY			1	/*HSI ready flag*/

#define RCC_CR_HSEON			16	/*Enable HSE bit*/
#define RCC_CR_HSERDY			17	/*HSE ready flag*/

#define RCC_CR_PLLON			24	/*Enable PLL bit*/
#define RCC_CR_PLLRDY			25	/*PLL ready flag*/

#define RCC_CR_PLLI2SON			26	/*Enable PLLR bit*/
#define RCC_CR_PLLI2SRDY		27	/*PLLR ready flag*/

/*********	PLL_CFGR register bits	*********/
#define RCC_CFGR_PLLSRC			22	/*PLL src Setting bit*/
#define RCC_CFGR_PLLP0			16	/*PLLP src Setting bit0*/
#define RCC_CFGR_PLLP1			17	/*PLLP src Setting bit1*/

/*********	CFGR register bits	*********/

#define RCC_CFGR_SW0			0	/*System clock switch bit0*/
#define RCC_CFGR_SW1			1	/*System clock switch bit1*/


#define RCC_CFGR_SWS0			2	/*System clock status switch bit0*/
#define RCC_CFGR_SWS1			3	/*System clock status switch bit1*/

/*********	Some Important	Parameters	*********/

#define PLL_M_DIV_SHIFT			0
#define PLLMUL_SHIFT			6
#define PLL_P_DIV_SHIFT			16
#define PLL_R_DIV_SHIFT			28

#define PLL_MASK				0x00BC8000

#define PLL_MUL_MIN				50
#define PLL_MUL_MAX				432

#define PLL_M_DIV_MIN			2
#define PLL_M_DIV_MAX			63

#define PLL_R_DIV_MIN			2
#define PLL_R_DIV_MAX			7

#endif
