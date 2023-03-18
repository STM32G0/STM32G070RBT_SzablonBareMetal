/*****************************************
File  : main.c
Autor : strefapic.blogspot.com
MCU   : STM32G070RBT6
IDE   : STM32Cube IDE
REV   : x.x
******************************************/

#include <stm32g070xx.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "system_config.h"
#include "stm32g0xx_it.h" // interrupt handlers




int main(void) {
	SYSTEM_MANAGER_Initialize(); // my hardware initialization
	SysTick_Config((SystemCoreClock/1000)-1); // Systick 1 ms

	while(1){

if(!ms_counter){
	LED_Toggle();
	ms_counter = 500 ;
}
	}
}
