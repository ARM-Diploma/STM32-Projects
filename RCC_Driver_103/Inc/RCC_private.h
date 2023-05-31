#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

#define RCC_READY				1
#define RCC_NOT_READY			2


#define RCC_CLK_TIMEOUT			1000

#define RCC_BASE_ADDRESS		(uint32_t)0x40021000
typedef struct
{
	uint32_t CR;
	uint32_t CFGR;
	uint32_t CIR;
	uint32_t APB2RSTR;
	uint32_t APB1RSTR;
	uint32_t AHBENR;
	uint32_t APB2ENR;
	uint32_t APB1ENR;
	uint32_t BDCR;
	uint32_t CSR;

}RCC_T;

#define RCC						((volatile RCC_T*)RCC_BASE_ADDRESS)

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

/*********	Some Important	Parameters	*********/

#define PLLMUL_SHIFT			18


#endif
