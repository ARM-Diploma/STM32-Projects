#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

#define RCC_READY				1
#define RCC_NOT_READY			2


#define RCC_CLK_TIMEOUT			1000

#define RCC_BASE_ADDRESS		(uint32_t)0x40023800
typedef struct
{
	uint32_t CR;
	uint32_t PLL_CFGR;
	uint32_t CFGR;
	uint32_t CIR;
	uint32_t AHB1RSTR;
	uint32_t AHB2RSTR;
	uint32_t AHB3RSTR;
	uint32_t RESERVED_1;
	uint32_t APB1RSTR;
	uint32_t APB2RSTR;
	uint32_t RESERVED_2;
	uint32_t RESERVED_3;
	uint32_t AHB1ENR;
	uint32_t AHB2ENR;
	uint32_t AHB3ENR;
	uint32_t RESERVED_4;
	uint32_t APB1ENR;
	uint32_t APB2ENR;
	uint32_t RESERVED_5;
	uint32_t RESERVED_6;
	uint32_t AHB1LPENR;
	uint32_t AHB2LPENR;
	uint32_t AHB3LPENR;
	uint32_t RESERVED_7;
	uint32_t APB1LPENR;
	uint32_t APB2LPENR;
	uint32_t RESERVED_8;
	uint32_t RESERVED_9;
	uint32_t BDCR;
	uint32_t CSR;
	uint32_t RESERVED_10;
	uint32_t RESERVED_11;
	uint32_t SSCGR;
	uint32_t PLLI2SCFGR;
	uint32_t PLLSAICFGR;
	uint32_t DCKCFGR;
	uint32_t CKGATENR;
	uint32_t DCKCFGR2;


}RCC_T;

#define RCC						((volatile RCC_T*)RCC_BASE_ADDRESS)

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
