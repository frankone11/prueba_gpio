/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "driver/gpio.h"

#define PIN_P	GPIO_NUM_2


void app_main()
{
	gpio_set_direction(PIN_P, GPIO_MODE_OUTPUT);
	printf("Hello world!\n");

	while(1)
	{
		printf("*** Inicio con ESP8266 ***\n");
		//gpio_set_level(PIN_P, gpio_get_level(PIN_P)?0:1);
		gpio_set_level(PIN_P,0);
		vTaskDelay(50);
		printf("*** Fin con ESP8266 ***\n");
		gpio_set_level(PIN_P,1);
		vTaskDelay(50);
	}
}
