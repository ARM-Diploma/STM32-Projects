/*
 * sensor_readings.h
 *
 *  Created on: Apr 26, 2023
 *      Author: Ali Mohamed Taima
 */

#ifndef INC_SENSOR_READINGS_H_
#define INC_SENSOR_READINGS_H_
#include "main.h"
#include "adc.h"
#include "usart.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
uint32_t analogRead(ADC_HandleTypeDef* hadc_g);
void serial_print_str(char* str);
void serial_print(uint32_t raw_data);
void serial_println(uint32_t raw_data);
uint32_t get_val(void);

#endif /* INC_SENSOR_READINGS_H_ */
