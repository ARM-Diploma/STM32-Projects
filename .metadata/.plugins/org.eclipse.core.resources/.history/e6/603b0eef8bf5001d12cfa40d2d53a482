/*
 * sensor_readings.c
 *
 *  Created on: Apr 26, 2023
 *      Author: Ali Mohamed Taima
 */

#include "sensor_readings.h"

uint16_t analogRead(void)
{
	// Get ADC value

	uint16_t raw;
	HAL_ADC_Start(&hadc1);
	HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);
	raw = HAL_ADC_GetValue(&hadc1);
	return raw;
}


void serial_print(uint16_t raw_data)
{
	char msg[10];
	// Convert to string and print
	sprintf(msg, "%hu\r\n", raw_data);
	HAL_UART_Transmit(&huart2, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY);

}
uint16_t get_val(void)
{
	uint16_t avg = 0, i, value;
	for(i = 0; i<100; i++)
	{
		value = analogRead();
		HAL_Delay(1);
		avg += value;
	}
	avg =  avg /100;
	return abs(avg);
}
