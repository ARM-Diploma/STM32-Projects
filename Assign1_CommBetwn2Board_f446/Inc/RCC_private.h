#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

#define RCC_READY				1
#define RCC_NOT_READY			2


#define RCC_CLK_TIMEOUT			1000

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
