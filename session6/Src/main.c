/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */


#include <stdio.h>

void GenerateInterrupt(void)
{
	uint32_t* pSTIR= (uint32_t*)0xE000EF00;
	uint32_t* pISER0= (uint32_t*)0xE000E100;

	//Enable IRQ3 Interrupt
	*pISER0 |= 1<<3;

	//Generate Software interrupt for IRQ3
	*pSTIR = (3 &0x1FF);
}

void SwitchAccessToUnPrivileged(void)
{
	/*1. Read CONTROL register*/
	__asm volatile("MRS R0, CONTROL");

	/*2. Modify : ORing with 1*/
	__asm volatile("ORR R0, #0x01");

	/*3. Write the new value to CONTROL register*/
	__asm volatile("MSR CONTROL, R0");

}


int main(void)
{
	printf("In Thread mode, before interrupt\n");
	SwitchAccessToUnPrivileged();

	GenerateInterrupt();

	printf("In Thread mode, after interrupt\n");


    /* Loop forever */
	for(;;);
}

void RTC_WKUP_IRQHandler (void)
{
	printf("In handler mode :  ISR\n");
}

void HardFault_Handler(void)
{
	printf("inside HardFault_Handler\n");
}