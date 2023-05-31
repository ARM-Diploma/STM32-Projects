#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_

/*****************************************************/
/* @SysTick_ClkSrc_T
*/
typedef enum
{
	AHB_DIV_8M=0,
	AHB

}SysTick_ClkSrc_T;

/*****************************************************/
/* @SysTick_Control_T
*/
typedef enum
{
	DISABLE,
	ENABLE

}SysTick_Control_T;


uint8_t SysTick_u8ClkInit(SysTick_ClkSrc_T Copy_u8ClkSource , uint32_t Copy_u8PreLoadVal);

uint8_t SysTick_u8ClkControl(uint8_t Copy_u8Control);

uint8_t SysTick_u8ReadClkValue(uint32_t *Copy_u32Val);


#endif
