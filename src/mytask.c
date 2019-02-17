#include "mytask.h"
void vTaskLed1(void *pvParameters)
{
	char led_val = 0;
	unsigned int Frequency = 100;         //100ms
	while(1)
	{
		led_val = 1 - led_val;
		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_9,led_val ? GPIO_PIN_SET : GPIO_PIN_RESET);
		vTaskDelay(Frequency);
	}
}
void vTaskLed2(void *pvParameters)
{
	char led_val = 0;
	unsigned int Frequency = 300;         //100ms
	while(1)
	{
		led_val = 1 - led_val;
		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_8,led_val ? GPIO_PIN_SET : GPIO_PIN_RESET);
		vTaskDelay(Frequency);
	}
}
void vTaskLed3(void *pvParameters)
{
	char led_val = 0;
	unsigned int Frequency = 500;         //100ms
	while(1)
	{
		led_val = 1 - led_val;
		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_10,led_val ? GPIO_PIN_SET : GPIO_PIN_RESET);
		vTaskDelay(Frequency);
	}
}
void vTaskLed4(void *pvParameters)
{
	char led_val = 0;
	unsigned int Frequency = 700;         //100ms
	while(1)
	{
		led_val = 1 - led_val;
		HAL_GPIO_WritePin(GPIOE,GPIO_PIN_15,led_val ? GPIO_PIN_SET : GPIO_PIN_RESET);
		vTaskDelay(Frequency);
	}
}
