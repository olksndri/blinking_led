#include <stdint.h>
#include <stdio.h>
#include "main.h"

RCC_AHB1ENR_t volatile *const RCC_AHB1ENR 	= (RCC_AHB1ENR_t*)(0x40023800 + 0x30);
GPIOx_MODER_t volatile *const GPIOC_MODER 	= (GPIOx_MODER_t*)(0x40020800 + 0x00);
GPIOx_ODR_t volatile *const GPIOC_ODR		= (GPIOx_ODR_t*)(0x40020800 + 0x14);

void delay(void);

int main(void) {
	RCC_AHB1ENR->GPIOC_EN |= 1;
	GPIOC_MODER->MODER_7  |= 1;

	while(1) {
		GPIOC_ODR->ODR_7 |= 1;
		delay();
		GPIOC_ODR->ODR_7 &= 0;
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
