#include <stdint.h>
#include <stdio.h>
#include "main.h"

RCC_AHB1ENR_t volatile *const RCC_AHB1ENR 	= ADDR_RCC_AHB1ENR;
GPIOx_MODER_t volatile *const GPIOC_MODER 	= ADDR_GPIOC_MODER;
GPIOx_ODR_t volatile *const GPIOC_ODR		= ADDR_GPIOC_ODR;

void delay(void);

int main(void) {
	RCC_AHB1ENR->GPIOC_EN = GPIOx_ENABLE;
	GPIOC_MODER->MODER_7 = GPIOx_OUTPUT_MODE;

	while(1) {
		GPIOC_ODR->ODR_7 = PIN_HIGH;
		delay();
		GPIOC_ODR->ODR_7 = PIN_LOW;
		delay();
	}
}


void delay(void) {
	 for(uint32_t volatile i = 0; i < 571428; i++);
	 /*
		-> number of loop iterations for 1 second delay = 2 285 714 (iter's)
		-> number of loop iterations for 0.5 second delay = 1 142 857 (iter's)
		-> number of loop iterations for 0.250 second delay = 571 428 (iter's)
	 */
}
