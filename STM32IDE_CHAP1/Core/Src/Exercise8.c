/*
 * Exercise8.c
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */
#include "Exercise8.h"
void Exercise8_Init() {

}

void setNumberOnCLock(int num) { // num from 0 - 11
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_1_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_3_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_4_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_5_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_7_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_8_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_9_Pin, RESET);
			break;
		case 10:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_10_Pin, RESET);
			break;
		case 11:
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_11_Pin, RESET);
			break;
		default:
			break;
	}
}

void Exercise8_Implement() {
	clearAllClock();
	setNumberOnCLock(11);
	HAL_Delay(2000);
}

