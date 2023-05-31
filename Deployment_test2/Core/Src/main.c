/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
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
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "usart.h"
#include "gpio.h"

#include <float.h>

//#include "../Inc/emlearn/model.h"
#include "../Inc/emlearn/model_2.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int32_t Data[250] = {0   , 0  , 0  , 0  , 96 , 94 , 0  , 3  , 5   , 20  ,
  							0   , 0  , 5  , 0  , 0  , 8  , 0  , 0  , 0   , 0   ,
  							0   , 0  , 28 , 0  , 0  , 0  , 13 , 0  , 43  , 1023,
  							0   , 0  , 0  , 0  , 0  , 0  , 224, 11 , 0   , 0   ,
  							0   , 0  , 232, 411, 0  , 0  , 0  , 0  , 0   , 3   ,
  							0   , 0  , 9  , 0  , 0  , 0  , 0  , 0  , 0   , 0   ,
  							0   , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1   , 0   ,
  							447 , 343, 0  , 0  , 0  , 182, 27 , 24 , 577 , 0   ,
  							0   , 8  , 488, 8  , 0  , 10 , 0  , 0  , 0   , 64  ,
  							0   , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0   , 0   ,
  							0   , 0  , 88 , 0  , 0  , 0  , 34 , 0  , 0   , 0   ,
  							0   , 452, 0  , 769, 0  , 0  , 0  , 0  , 11  , 0   ,
  							1023, 0  , 0  , 13 , 19 , 0  , 36 , 172, 0   , 1023,
  							0   , 0  , 0  , 0  , 437, 0  , 0  , 0  , 0   , 0   ,
  							99  , 183, 0  , 0  , 0  , 0  , 300, 0  , 0   , 0   ,
  							0   , 0  , 0  , 0  ,32  , 0  , 0  , 0  , 0   , 156 ,
  							139 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 1023, 11  ,
  							0   , 0  , 9  , 0  , 0  , 0  , 0  , 0  , 30  , 188 ,
  							33  , 75 , 0  , 13 , 0  , 0  , 0  , 0  , 0   , 35  ,
  							233 , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0   , 1   ,
  							0   , 138, 0  , 0  , 0  , 0  , 0  , 0  , 0   , 0   ,
  							0   , 606, 197, 76 , 0  , 104, 0  , 232, 24  , 0   ,
  							1023, 132, 0  , 0  , 0  , 0  , 0  , 0  , 0   , 14  ,
  							0   , 0  , 0  , 0  , 89 , 7  , 0  , 32 , 0   , 72  ,
  							227 , 12 , 0  , 0  , 0  , 9  , 640, 58 , 0   , 0   };

  int mevements = 2;
  int move_pred[2] = {100,100};

  float feat1[6] = {166.765579,	27810.758297,	49.856	,124,	83	,22272};
  float feat2[6] = {135.014401	,18228.888498	,47.916	,131	,90,	15828};

  float error1 = eml_net_predict_proba(&model_2,&feat1[0],6,&move_pred[0],2);

  float class1 = eml_net_predict(&model_2,&feat1[0],6);


  float error2 = eml_net_predict_proba(&model_2,&feat2[0],6,&move_pred[0],2);

  float class2 = eml_net_predict(&model_2,&feat2[0],6);

  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 16;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  RCC_OscInitStruct.PLL.PLLR = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
