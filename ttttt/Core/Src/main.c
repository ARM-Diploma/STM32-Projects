#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "../Inc/4-LIB/STD_TYPES.h"
#include "../Inc/4-LIB/BIT_MATH.h"

#include "../Inc/1-MCAL/6.Timers/TIMER_interface.h"


void main (void)
{

	TIMER_u8Init(TIMER_2,UP, 1600, 10000);

	while(1)
	{
		while(!(TIMER_u8GetOverflowFlag()));
		HAL_GPIO_TogglePin(GPIOx, GPIO_Pin)
		printf("HI");
	}
}
