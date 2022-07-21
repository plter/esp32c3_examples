/* Blink Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include <u8g2.h>

#include "sdkconfig.h"

#define BLINK_GPIO 12

void app_main(void)
{
    u8g2_t u8g2;
    u8g2_Setup_ssd1306_128x64_noname_f(&u8g2,U8G2_R0,u8g2_i2c_byte_cb)
    U8G2_SSD1306_128X64_NONAME_1_SW_I2C u8g2(U8G2_R2, /* clock=*/16, /* data=*/17, /* reset=*/U8X8_PIN_NONE);
    u8g2.begin();
    u8g2.firstPage();
    u8g2.setFont(u8g2_font_ncenB14_tr);
    u8g2.drawStr(0,24,"Hello World!");

    // gpio_reset_pin(BLINK_GPIO);
    // /* Set the GPIO as a push/pull output */
    // gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
    // while(1) {
    //     /* Blink off (output low) */
    //     printf("Turning off the LED\n");
    //     gpio_set_level(BLINK_GPIO, 0);
    //     vTaskDelay(1000 / portTICK_PERIOD_MS);
    //     /* Blink on (output high) */
    //     printf("Turning on the LED\n");
    //     gpio_set_level(BLINK_GPIO, 1);
    //     vTaskDelay(1000 / portTICK_PERIOD_MS);
    // }
}
