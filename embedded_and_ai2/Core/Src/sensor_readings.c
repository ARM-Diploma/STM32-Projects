/*
 * sensor_readings.c
 *
 *  Created on: Apr 26, 2023
 *      Author: Ali Mohamed Taima
 */

#include "sensor_readings.h"
ADC_HandleTypeDef* hadc_g; // hold the address from the argument of the function
uint32_t analogRead(ADC_HandleTypeDef* hadc)
{
	// Get ADC value
	hadc_g = hadc;
	uint32_t raw;

	if(HAL_ADC_Start(hadc_g) != HAL_OK)
		Error_Handler();

	HAL_ADC_PollForConversion(hadc_g, HAL_MAX_DELAY);

	if((HAL_ADC_GetState(hadc_g) & HAL_ADC_STATE_REG_EOC) == HAL_ADC_STATE_REG_EOC)
		raw = HAL_ADC_GetValue(hadc_g);

	return raw;
}


void serial_println(uint32_t raw_data)
{
	char msg[10];
	// Convert to string and print
	sprintf(msg, "%lu\r\n", raw_data);
	HAL_UART_Transmit(&huart2, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY);

}
void serial_print(uint32_t raw_data)
{
	char msg[10];
	// Convert to string and print
	sprintf(msg, "%lu", raw_data);
	HAL_UART_Transmit(&huart2, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY);

}
void serial_print_str(char* str)
{
	char msg[10];
	// Convert to string and print
	sprintf(msg, str);
	HAL_UART_Transmit(&huart2, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY);
}
uint32_t get_val(void)
{
	uint32_t avg = 0, i, value;
	for(i = 0; i<100; i++)
	{
		value = analogRead(&hadc1);
		HAL_Delay(1);
		avg += value;
	}
	avg =  avg /100;
	return abs(avg);
}
