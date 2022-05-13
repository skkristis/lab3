#include "main.h"
#include "stm32f3xx.h"
int main(void)
{
RCC->AHBENR |= RCC_AHBENR_GPIODEN;
GPIOD->MODER |= GPIO_MODER_MODER1_0;
GPIOD->MODER &=~ GPIO_MODER_MODER1_1;


GPIOD->MODER |= GPIO_MODER_MODER2_0;
GPIOD->MODER &=~ GPIO_MODER_MODER2_1;


GPIOD->MODER |= GPIO_MODER_MODER3_0;
GPIOD->MODER &=~ GPIO_MODER_MODER3_1;


GPIOD->MODER |= GPIO_MODER_MODER4_0;
GPIOD->MODER &=~ GPIO_MODER_MODER4_1;


		GPIOD->BSRR|= GPIO_BSRR_BR_1;
		GPIOD->BSRR|= GPIO_BSRR_BR_2;
		GPIOD->BSRR|= GPIO_BSRR_BR_3;
		GPIOD->BSRR|= GPIO_BSRR_BR_4;
int s=1;
	while(s==1)
	{
		GPIOD->BSRR|= GPIO_BSRR_BS_1;
		GPIOD->BSRR|= GPIO_BSRR_BR_2;
		GPIOD->BSRR|= GPIO_BSRR_BR_3;
		GPIOD->BSRR|= GPIO_BSRR_BS_4;
		for(int i = 800;i>1;i--){}

		GPIOD->BSRR|= GPIO_BSRR_BS_1;
		GPIOD->BSRR|= GPIO_BSRR_BR_2;
		GPIOD->BSRR|= GPIO_BSRR_BR_3;
		GPIOD->BSRR|= GPIO_BSRR_BR_4;
		for(int i = 800;i>1;i--){}
			GPIOD->BSRR|= GPIO_BSRR_BS_1;
			GPIOD->BSRR|= GPIO_BSRR_BS_2;
			GPIOD->BSRR|= GPIO_BSRR_BR_3;
			GPIOD->BSRR|= GPIO_BSRR_BR_4;
			for(int i = 800;i>1;i--){}
				GPIOD->BSRR|= GPIO_BSRR_BR_1;
				GPIOD->BSRR|= GPIO_BSRR_BS_2;
				GPIOD->BSRR|= GPIO_BSRR_BR_3;
				GPIOD->BSRR|= GPIO_BSRR_BR_4;
				for(int i = 800;i>1;i--){}
					GPIOD->BSRR|= GPIO_BSRR_BR_1;
					GPIOD->BSRR|= GPIO_BSRR_BS_2;
					GPIOD->BSRR|= GPIO_BSRR_BS_3;
					GPIOD->BSRR|= GPIO_BSRR_BR_4;
					for(int i = 800;i>1;i--){}
						GPIOD->BSRR|= GPIO_BSRR_BR_1;
						GPIOD->BSRR|= GPIO_BSRR_BR_2;
						GPIOD->BSRR|= GPIO_BSRR_BS_3;
						GPIOD->BSRR|= GPIO_BSRR_BR_4;
						for(int i = 800;i>1;i--){}
							GPIOD->BSRR|= GPIO_BSRR_BR_1;
							GPIOD->BSRR|= GPIO_BSRR_BR_2;
							GPIOD->BSRR|= GPIO_BSRR_BS_3;
							GPIOD->BSRR|= GPIO_BSRR_BS_4;
							for(int i = 800;i>1;i--){}
								GPIOD->BSRR|= GPIO_BSRR_BR_1;
								GPIOD->BSRR|= GPIO_BSRR_BR_2;
								GPIOD->BSRR|= GPIO_BSRR_BR_3;
								GPIOD->BSRR|= GPIO_BSRR_BS_4;
								for(int i = 800;i>1;i--){}


	}


RCC->AHBENR |= RCC_AHBENR_GPIOAEN;


}