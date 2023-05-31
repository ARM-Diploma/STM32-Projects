/**
  ******************************************************************************
  * @file    test1_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed May 10 05:17:10 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef TEST1_DATA_PARAMS_H
#define TEST1_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_TEST1_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_test1_data_weights_params[1]))
*/

#define AI_TEST1_DATA_CONFIG               (NULL)


#define AI_TEST1_DATA_ACTIVATIONS_SIZES \
  { 2600, }
#define AI_TEST1_DATA_ACTIVATIONS_SIZE     (2600)
#define AI_TEST1_DATA_ACTIVATIONS_COUNT    (1)
#define AI_TEST1_DATA_ACTIVATION_1_SIZE    (2600)



#define AI_TEST1_DATA_WEIGHTS_SIZES \
  { 160052, }
#define AI_TEST1_DATA_WEIGHTS_SIZE         (160052)
#define AI_TEST1_DATA_WEIGHTS_COUNT        (1)
#define AI_TEST1_DATA_WEIGHT_1_SIZE        (160052)



#define AI_TEST1_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_test1_activations_table[1])

extern ai_handle g_test1_activations_table[1 + 2];



#define AI_TEST1_DATA_WEIGHTS_TABLE_GET() \
  (&g_test1_weights_table[1])

extern ai_handle g_test1_weights_table[1 + 2];


#endif    /* TEST1_DATA_PARAMS_H */
