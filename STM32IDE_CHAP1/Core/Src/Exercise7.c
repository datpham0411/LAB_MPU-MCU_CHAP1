/*
 * Exercise7.c
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */
#include "Exercise7.h"
void Exercise7_Init() {

}

void clearAllClock() {
	HAL_GPIO_WritePin(GPIOB, LED_1_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_2_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_3_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_4_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_5_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_6_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_7_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_8_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_9_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_10_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_11_Pin, SET);
	HAL_GPIO_WritePin(GPIOB, LED_12_Pin, SET);
}

void Exercise7_Implement() {
	clearAllClock();
}

