/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdio.h"
#define Current_buffer_LEN 8
#define Tempter_buffer_LEN 8
#define Volt_buffer_LEN 1
#define Watt_buffer_LEN 1
//#define PE9  HAL_GPIO_ReadPin(GPIOE, GPIO_Pin_9)
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
extern  int ubAnalogWatchdogStatus;
extern  int TeAnalogWatchdogStatus;   //模拟看门狗温度检测中断标志位
extern  int Magic ;
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define I1_Pin GPIO_PIN_0
#define I1_GPIO_Port GPIOC
#define I2_Pin GPIO_PIN_1
#define I2_GPIO_Port GPIOC
#define I3_Pin GPIO_PIN_2
#define I3_GPIO_Port GPIOC
#define I4_Pin GPIO_PIN_3
#define I4_GPIO_Port GPIOC
#define I5_Pin GPIO_PIN_0
#define I5_GPIO_Port GPIOA
#define I6_Pin GPIO_PIN_1
#define I6_GPIO_Port GPIOA
#define I7_Pin GPIO_PIN_2
#define I7_GPIO_Port GPIOA
#define I8_Pin GPIO_PIN_3
#define I8_GPIO_Port GPIOA
#define Temp1_MCU_Pin GPIO_PIN_4
#define Temp1_MCU_GPIO_Port GPIOA
#define Temp2_MCU_Pin GPIO_PIN_5
#define Temp2_MCU_GPIO_Port GPIOA
#define Temp3_MCU_Pin GPIO_PIN_6
#define Temp3_MCU_GPIO_Port GPIOA
#define Temp4_MCU_Pin GPIO_PIN_7
#define Temp4_MCU_GPIO_Port GPIOA
#define Temp5_MCU_Pin GPIO_PIN_4
#define Temp5_MCU_GPIO_Port GPIOC
#define Temp6_MCU_Pin GPIO_PIN_5
#define Temp6_MCU_GPIO_Port GPIOC
#define Temp7_MCU_Pin GPIO_PIN_0
#define Temp7_MCU_GPIO_Port GPIOB
#define Temp8_MCU_Pin GPIO_PIN_1
#define Temp8_MCU_GPIO_Port GPIOB
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
