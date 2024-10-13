/*
 * Exercise1.c
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */
#include "Exercise1.h"

void Exercise1_Init() {

}

void Exercise1_Implement() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_Delay(2000);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_Delay(2000);
}

