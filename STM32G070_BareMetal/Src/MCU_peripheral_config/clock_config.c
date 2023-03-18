/*****************************************
File  : clock_config.c
Autor : strefapic.blogspot.com
MCU   : STM32G070KBT6
IDE   : STM32CUBE IDE
******************************************/

#include <stm32g070xx.h>
#include "clock_config.h"

void CLOCK_MANAGER_Initialize(void){

RCC->IOPENR |= RCC_IOPENR_GPIOAEN; 		//Open clock for GPIOA
RCC->IOPENR |= RCC_IOPENR_GPIOBEN; 		//Open clock for GPIOB
RCC->IOPENR |= RCC_IOPENR_GPIOCEN; 		//Open clock for GPIOC

}
