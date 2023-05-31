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
uint16_t analogRead(void);
void serial_print(uint16_t raw_data);
uint16_t get_val(void);

#endif /* INC_SENSOR_READINGS_H_ */
