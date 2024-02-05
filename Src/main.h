#ifndef MAIN_H_
#define MAIN_H_

#define ADDR_RCC_AHB1ENR 	((RCC_AHB1ENR_t*)(0x40023800 + 0x30))
#define ADDR_GPIOC_MODER 	((GPIOx_MODER_t*)(0x40020800 + 0x00))
#define ADDR_GPIOC_ODR		((GPIOx_ODR_t*)(0x40020800 + 0x14))

#define GPIOx_ENABLE 1
#define GPIOx_DISABLE 0
#define	GPIOx_INPUT_MODE 0
#define	GPIOx_OUTPUT_MODE 1
#define GPIOx_FUNCTION_MODE 2
#define GPIOx_ANALOG_MODE 3
#define PIN_HIGH 1
#define PIN_LOW 0

typedef struct {
	uint32_t GPIOA_EN	:1;
	uint32_t GPIOB_EN	:1;
	uint32_t GPIOC_EN	:1;
	uint32_t GPIOD_EN	:1;
	uint32_t GPIOE_EN	:1;
	uint32_t RESERVED_1	:2;
	uint32_t GPIOH_EN	:1;
	uint32_t RESERVED_2	:4;
	uint32_t CRC_EN		:1;
	uint32_t RESERVED_3	:8;
	uint32_t DMA1_EN	:1;
	uint32_t DMA2_EN	:1;
	uint32_t RESERVED_4	:9;
}RCC_AHB1ENR_t;

typedef struct {
	uint32_t MODER_0	:2;
	uint32_t MODER_1	:2;
	uint32_t MODER_2	:2;
	uint32_t MODER_3	:2;
	uint32_t MODER_4	:2;
	uint32_t MODER_5	:2;
	uint32_t MODER_6	:2;
	uint32_t MODER_7	:2;
	uint32_t MODER_8	:2;
	uint32_t MODER_9	:2;
	uint32_t MODER_10	:2;
	uint32_t MODER_11	:2;
	uint32_t MODER_12	:2;
	uint32_t MODER_13	:2;
	uint32_t MODER_14	:2;
	uint32_t MODER_15	:2;
}GPIOx_MODER_t;

typedef struct {
	uint32_t ODR_0		:1;
	uint32_t ODR_1		:1;
	uint32_t ODR_2		:1;
	uint32_t ODR_3		:1;
	uint32_t ODR_4		:1;
	uint32_t ODR_5		:1;
	uint32_t ODR_6		:1;
	uint32_t ODR_7		:1;
	uint32_t ODR_8		:1;
	uint32_t ODR_9		:1;
	uint32_t ODR_10		:1;
	uint32_t ODR_11		:1;
	uint32_t ODR_12		:1;
	uint32_t ODR_13		:1;
	uint32_t ODR_14		:1;
	uint32_t ODR_15		:1;
	uint32_t RESERVED	:16;
}GPIOx_ODR_t;

#endif
