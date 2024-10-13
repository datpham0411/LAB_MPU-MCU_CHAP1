/*
 * Exercise9.c
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */
#include "Exercise9.h"
void Exercise9_Init() {

}

void ClearNumberOnClock(int num) {
	switch (num) {
			case 0:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
				break;
			case 1:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_1_Pin, SET);
				break;
			case 2:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_2_Pin, SET);
				break;
			case 3:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_3_Pin, SET);
				break;
			case 4:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_4_Pin, SET);
				break;
			case 5:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_5_Pin, SET);
				break;
			case 6:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_6_Pin, SET);
				break;
			case 7:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_7_Pin, SET);
				break;
			case 8:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_8_Pin, SET);
				break;
			case 9:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_9_Pin, SET);
				break;
			case 10:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_10_Pin, SET);
				break;
			case 11:
				HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_11_Pin, SET);
				break;
			default:
				break;
		}
}

void Exercise9_Implement() {
	clearAllClock();
	setNumberOnCLock(11);
	HAL_Delay(2000);
	ClearNumberOnClock(11);
	HAL_Delay(2000);
}

