#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_


#define SYST_DOWN_FLAG			0
#define SYST_RISED_FLAG			1

/*****************************************************/
/* @SysTick_ClkSrc_T
*/
typedef enum
{
	AHB_DIV_8=0,
	AHB

}SysTick_ClkSrc_T;

/*****************************************************/
/* @SysTick_Control_T
*/
typedef enum
{
	SYSTICK_DISABLE,
	SYSTICK_ENABLE

}SysTick_Control_T;


uint8_t SysTick_u8SetClkSrc(SysTick_ClkSrc_T Copy_u8ClkSource);

uint8_t SysTick_u8ClkControl(uint8_t Copy_u8Control);

uint8_t SysTick_u8ReadClkValue(uint32_t *Copy_u32Val);

uint8_t SysTick_u8GetCounterFlag(void);

uint8_t SysTick_u8SetPreloadVal(uint32_t Copy_u32PreloadVal);


#endif
