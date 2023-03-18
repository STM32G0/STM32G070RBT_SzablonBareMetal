/*****************************************
File  : pin_config.h
Autor : strefapic.blogspot.com
MCU   : STM32G071KBT6
IDE   : STM32CUBE IDE
******************************************/
#include <stm32g070xx.h>

#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

// Uwaga PA8 to CS W5500 i LED na płytce !!!

	void PIN_MANAGER_Initialize(void);
	/* definitions for led on PA5 in NUCLEO board */
	#define LED_SetHigh()                 (GPIOA->BSRR |= GPIO_BSRR_BS5)
	#define LED_SetLow()                  (GPIOA->BSRR |= GPIO_BSRR_BR5)
	#define LED_Toggle()                  ((GPIOA->ODR & GPIO_ODR_OD5)  ? (GPIOA->BSRR |= GPIO_BSRR_BR5) : (GPIOA->BSRR |= GPIO_BSRR_BS5))



#endif /*PIN_CONFIG_H*/
