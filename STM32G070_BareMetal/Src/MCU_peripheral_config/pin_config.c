/*****************************************
File  : clock_config.c
Autor : strefapic.blogspot.com
MCU   : STM32G070KBT6
IDE   : STM32CUBE IDE
******************************************/

#include <stm32g070xx.h>
#include "pin_config.h"

void PIN_MANAGER_Initialize(void){
/*** set OUT fuction mode (0b01)***/
/*  PA5 set Out for LED in Nucleo board*/
GPIOA->MODER &= ~GPIO_MODER_MODE5_1;


}

