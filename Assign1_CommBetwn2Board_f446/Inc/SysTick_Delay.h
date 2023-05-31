#ifndef SYSTICK_DELAY_H_
#define SYSTICK_DELAY_H_

#define MICRO						1000
#define OVER_FLOW_TIME_DIV_8		47

uint8_t Delay_u8MicroSec(uint32_t Copy_u32Delay);
uint8_t Delay_u8MilliSec(uint32_t Copy_u32Delay);

#endif
