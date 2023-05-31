/**
  ******************************************************************************
  * @file    test1.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed May 10 05:17:10 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "test1.h"
#include "test1_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_test1
 
#undef AI_TEST1_MODEL_SIGNATURE
#define AI_TEST1_MODEL_SIGNATURE     "ceeb484f1e0e19be9fed4c5ccb724fed"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Wed May 10 05:17:10 2023"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_TEST1_N_BATCHES
#define AI_TEST1_N_BATCHES         (1)

static ai_ptr g_test1_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_test1_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  input_0_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 6, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  L1_dense_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 400, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  L1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 400, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  L2_dense_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 250, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  L2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 250, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  L3_dense_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 100, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  L3_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 100, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  L4_dense_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 50, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  L4_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 50, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  L5_dense_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  L5_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 1, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  L1_dense_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2400, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  L1_dense_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 400, AI_STATIC)
/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  L2_dense_weights_array, AI_ARRAY_FORMAT_LUT8_FLOAT,
  NULL, NULL, 100000, AI_STATIC)
/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  L2_dense_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 250, AI_STATIC)
/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  L3_dense_weights_array, AI_ARRAY_FORMAT_LUT8_FLOAT,
  NULL, NULL, 25000, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  L3_dense_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 100, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  L4_dense_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 5000, AI_STATIC)
/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  L4_dense_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 50, AI_STATIC)
/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  L5_dense_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 50, AI_STATIC)
/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  L5_dense_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)
/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  input_0_output, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 6, 1, 1), AI_STRIDE_INIT(4, 4, 4, 24, 24),
  1, &input_0_output_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  L1_dense_output, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 400, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1600, 1600),
  1, &L1_dense_output_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  L1_output, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 400, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1600, 1600),
  1, &L1_output_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  L2_dense_output, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 250, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1000, 1000),
  1, &L2_dense_output_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  L2_output, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 250, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1000, 1000),
  1, &L2_output_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  L3_dense_output, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 100, 1, 1), AI_STRIDE_INIT(4, 4, 4, 400, 400),
  1, &L3_dense_output_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  L3_output, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 100, 1, 1), AI_STRIDE_INIT(4, 4, 4, 400, 400),
  1, &L3_output_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  L4_dense_output, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 50, 1, 1), AI_STRIDE_INIT(4, 4, 4, 200, 200),
  1, &L4_dense_output_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  L4_output, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 50, 1, 1), AI_STRIDE_INIT(4, 4, 4, 200, 200),
  1, &L4_output_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  L5_dense_output, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &L5_dense_output_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  L5_output, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &L5_output_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  L1_dense_weights, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 6, 400, 1, 1), AI_STRIDE_INIT(4, 4, 24, 9600, 9600),
  1, &L1_dense_weights_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  L1_dense_bias, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 400, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1600, 1600),
  1, &L1_dense_bias_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  L2_dense_weights, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 400, 250, 1, 1), AI_STRIDE_INIT(4, 1, 400, 100000, 100000),
  1, &L2_dense_weights_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  L2_dense_bias, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 1, 250, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1000, 1000),
  1, &L2_dense_bias_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  L3_dense_weights, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 250, 100, 1, 1), AI_STRIDE_INIT(4, 1, 250, 25000, 25000),
  1, &L3_dense_weights_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  L3_dense_bias, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 1, 100, 1, 1), AI_STRIDE_INIT(4, 4, 4, 400, 400),
  1, &L3_dense_bias_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  L4_dense_weights, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 100, 50, 1, 1), AI_STRIDE_INIT(4, 4, 400, 20000, 20000),
  1, &L4_dense_weights_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  L4_dense_bias, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 1, 50, 1, 1), AI_STRIDE_INIT(4, 4, 4, 200, 200),
  1, &L4_dense_bias_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  L5_dense_weights, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 50, 1, 1, 1), AI_STRIDE_INIT(4, 4, 200, 200, 200),
  1, &L5_dense_weights_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  L5_dense_bias, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &L5_dense_bias_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  L5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L5_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L5_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  L5_layer, 4,
  NL_TYPE, 0x0, NULL,
  nl, forward_sigmoid,
  &L5_chain,
  NULL, &L5_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  L5_dense_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L5_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &L5_dense_weights, &L5_dense_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  L5_dense_layer, 4,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &L5_dense_chain,
  NULL, &L5_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  L4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L4_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L4_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  L4_layer, 3,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &L4_chain,
  NULL, &L5_dense_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  L4_dense_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L4_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &L4_dense_weights, &L4_dense_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  L4_dense_layer, 3,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &L4_dense_chain,
  NULL, &L4_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  L3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L3_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L3_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  L3_layer, 2,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &L3_chain,
  NULL, &L4_dense_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  L3_dense_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L3_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &L3_dense_weights, &L3_dense_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  L3_dense_layer, 2,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &L3_dense_chain,
  NULL, &L3_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  L2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L2_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L2_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  L2_layer, 1,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &L2_chain,
  NULL, &L3_dense_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  L2_dense_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L2_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &L2_dense_weights, &L2_dense_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  L2_dense_layer, 1,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &L2_dense_chain,
  NULL, &L2_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  L1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L1_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  L1_layer, 0,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &L1_chain,
  NULL, &L2_dense_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  L1_dense_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &L1_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &L1_dense_weights, &L1_dense_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  L1_dense_layer, 0,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &L1_dense_chain,
  NULL, &L1_layer, AI_STATIC, 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 160052, 1, 1),
    160052, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 2600, 1, 1),
    2600, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_TEST1_IN_NUM, &input_0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_TEST1_OUT_NUM, &L5_output),
  &L1_dense_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 160052, 1, 1),
      160052, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 2600, 1, 1),
      2600, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_TEST1_IN_NUM, &input_0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_TEST1_OUT_NUM, &L5_output),
  &L1_dense_layer, 0, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/


/******************************************************************************/
AI_DECLARE_STATIC
ai_bool test1_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_test1_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    input_0_output_array.data = AI_PTR(g_test1_activations_map[0] + 976);
    input_0_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 976);
    
    L1_dense_output_array.data = AI_PTR(g_test1_activations_map[0] + 1000);
    L1_dense_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 1000);
    
    L1_output_array.data = AI_PTR(g_test1_activations_map[0] + 1000);
    L1_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 1000);
    
    L2_dense_output_array.data = AI_PTR(g_test1_activations_map[0] + 0);
    L2_dense_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 0);
    
    L2_output_array.data = AI_PTR(g_test1_activations_map[0] + 1000);
    L2_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 1000);
    
    L3_dense_output_array.data = AI_PTR(g_test1_activations_map[0] + 0);
    L3_dense_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 0);
    
    L3_output_array.data = AI_PTR(g_test1_activations_map[0] + 400);
    L3_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 400);
    
    L4_dense_output_array.data = AI_PTR(g_test1_activations_map[0] + 0);
    L4_dense_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 0);
    
    L4_output_array.data = AI_PTR(g_test1_activations_map[0] + 200);
    L4_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 200);
    
    L5_dense_output_array.data = AI_PTR(g_test1_activations_map[0] + 0);
    L5_dense_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 0);
    
    L5_output_array.data = AI_PTR(g_test1_activations_map[0] + 4);
    L5_output_array.data_start = AI_PTR(g_test1_activations_map[0] + 4);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool test1_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_test1_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    L1_dense_weights_array.format |= AI_FMT_FLAG_CONST;
    L1_dense_weights_array.data = AI_PTR(g_test1_weights_map[0] + 0);
    L1_dense_weights_array.data_start = AI_PTR(g_test1_weights_map[0] + 0);
    
    L1_dense_bias_array.format |= AI_FMT_FLAG_CONST;
    L1_dense_bias_array.data = AI_PTR(g_test1_weights_map[0] + 9600);
    L1_dense_bias_array.data_start = AI_PTR(g_test1_weights_map[0] + 9600);
    
    L2_dense_weights_array.format |= AI_FMT_FLAG_CONST;
    L2_dense_weights_array.data = AI_PTR(g_test1_weights_map[0] + 12224);
    L2_dense_weights_array.data_start = AI_PTR(g_test1_weights_map[0] + 11200);
    
    L2_dense_bias_array.format |= AI_FMT_FLAG_CONST;
    L2_dense_bias_array.data = AI_PTR(g_test1_weights_map[0] + 112224);
    L2_dense_bias_array.data_start = AI_PTR(g_test1_weights_map[0] + 112224);
    
    L3_dense_weights_array.format |= AI_FMT_FLAG_CONST;
    L3_dense_weights_array.data = AI_PTR(g_test1_weights_map[0] + 114248);
    L3_dense_weights_array.data_start = AI_PTR(g_test1_weights_map[0] + 113224);
    
    L3_dense_bias_array.format |= AI_FMT_FLAG_CONST;
    L3_dense_bias_array.data = AI_PTR(g_test1_weights_map[0] + 139248);
    L3_dense_bias_array.data_start = AI_PTR(g_test1_weights_map[0] + 139248);
    
    L4_dense_weights_array.format |= AI_FMT_FLAG_CONST;
    L4_dense_weights_array.data = AI_PTR(g_test1_weights_map[0] + 139648);
    L4_dense_weights_array.data_start = AI_PTR(g_test1_weights_map[0] + 139648);
    
    L4_dense_bias_array.format |= AI_FMT_FLAG_CONST;
    L4_dense_bias_array.data = AI_PTR(g_test1_weights_map[0] + 159648);
    L4_dense_bias_array.data_start = AI_PTR(g_test1_weights_map[0] + 159648);
    
    L5_dense_weights_array.format |= AI_FMT_FLAG_CONST;
    L5_dense_weights_array.data = AI_PTR(g_test1_weights_map[0] + 159848);
    L5_dense_weights_array.data_start = AI_PTR(g_test1_weights_map[0] + 159848);
    
    L5_dense_bias_array.format |= AI_FMT_FLAG_CONST;
    L5_dense_bias_array.data = AI_PTR(g_test1_weights_map[0] + 160048);
    L5_dense_bias_array.data_start = AI_PTR(g_test1_weights_map[0] + 160048);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/


AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_test1_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_TEST1_MODEL_NAME,
      .model_signature   = AI_TEST1_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 134061,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_bool ai_test1_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_TEST1_MODEL_NAME,
      .model_signature   = AI_TEST1_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 134061,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_test1_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_test1_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_error ai_test1_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
    ai_error err;
    ai_network_params params;

    err = ai_test1_create(network, AI_TEST1_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE)
        return err;
    if (ai_test1_data_params_get(&params) != true) {
        err = ai_test1_get_error(*network);
        return err;
    }
#if defined(AI_TEST1_DATA_ACTIVATIONS_COUNT)
    if (activations) {
        /* set the addresses of the activations buffers */
        for (int idx=0;idx<params.map_activations.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
    }
#endif
#if defined(AI_TEST1_DATA_WEIGHTS_COUNT)
    if (weights) {
        /* set the addresses of the weight buffers */
        for (int idx=0;idx<params.map_weights.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
    }
#endif
    if (ai_test1_init(*network, &params) != true) {
        err = ai_test1_get_error(*network);
    }
    return err;
}

AI_API_ENTRY
ai_buffer* ai_test1_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_buffer* ai_test1_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_handle ai_test1_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_test1_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= test1_configure_weights(net_ctx, params);
  ok &= test1_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_test1_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_test1_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_TEST1_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

