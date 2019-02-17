#ifndef _MYTASK_H_
#define _MYTASK_H_
#include "STM32f303xc.h"
#include "stm32f3xx_hal.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
#include "FreeRTOSconfig.h"
#define mainCHECK_TASK_PRIORITY			( tskIDLE_PRIORITY + 2 )
#define mainFLASH_TASK_PRIORITY			( tskIDLE_PRIORITY + 1 )
#define mainINTEGER_TASK_PRIORITY   ( tskIDLE_PRIORITY )
void vTaskLed1(void *pvParameters);
void vTaskLed2(void *pvParameters);
void vTaskLed3(void *pvParameters);
void vTaskLed4(void *pvParameters);
#endif
