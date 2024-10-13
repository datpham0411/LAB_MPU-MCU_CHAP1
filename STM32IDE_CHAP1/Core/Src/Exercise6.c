/*
 * Exercise6.c
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */
#include "Exercise6.h"
void Exercise6_Init() {

}

void Set_Single_LED(GPIO_TypeDef *GPIO_Type, uint16_t Pin_Name, uint32_t Delay_Time) {
	HAL_GPIO_WritePin(GPIO_Type, Pin_Name, RESET);
	HAL_Delay(Delay_Time);
	HAL_GPIO_WritePin(GPIO_Type, Pin_Name, SET);
}

void Exercise6_Implement() {
	clearAllClock();
	uint32_t Delay_Time = 500;
	while(1) {
		Set_Single_LED(GPIOB, LED_1_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_2_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_3_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_4_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_5_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_6_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_7_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_8_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_9_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_10_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_11_Pin, Delay_Time);
		Set_Single_LED(GPIOB, LED_12_Pin, Delay_Time);
	}
}

