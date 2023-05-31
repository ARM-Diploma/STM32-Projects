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

#include <stdint.h>


void GenerateExeption(void);
int Add(int A ,int B ,int C , int D);

int main(void)
{
	uint32_t SPVal = 0x02;

	/*1. Initialize PSP stack to be point to end of stack*/
	__asm volatile(".equ SRAM_END , (0x20000000+128*1024)");
	__asm volatile(".equ PSP_END, (SRAM_END - 512)");

	__asm volatile("LDR R0,=PSP_END");
	__asm volatile("MSR PSP,R0");

	/*2. Change the current SP to PSP*/
	__asm volatile("MSR CONTROL,%0"::"r"(SPVal));

	int result;
	result = Add(1, 2,3, 4);

	GenerateExeption();

	/* Loop forever */
	for(;;);
}

void GenerateExeption(void)
{
	__asm volatile ("SVC #0x2");
}

void SVC_Handler()
{
	int x=0;

}

int Add(int A ,int B ,int C , int D)
{
	return A+B+C+D;

}