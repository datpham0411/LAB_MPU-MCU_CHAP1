/*
 * Exercise5.c
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */
#include "Exercise5.h"

void Exercise5_Init() {

}

void SevenSEG_Init_2() {
	HAL_GPIO_WritePin(SEG_h_GPIO_Port, SEG_h_Pin, RESET);
	HAL_GPIO_WritePin(SEG_i_GPIO_Port, SEG_i_Pin, RESET);
	HAL_GPIO_WritePin(SEG_j_GPIO_Port, SEG_j_Pin, RESET);
	HAL_GPIO_WritePin(SEG_k_GPIO_Port, SEG_k_Pin, RESET);
	HAL_GPIO_WritePin(SEG_l_GPIO_Port, SEG_l_Pin, RESET);
	HAL_GPIO_WritePin(SEG_m_GPIO_Port, SEG_m_Pin, RESET);
	HAL_GPIO_WritePin(SEG_n_GPIO_Port, SEG_n_Pin, RESET);
}

void display1_2(){
	HAL_GPIO_WritePin(SEG_h_GPIO_Port, SEG_h_Pin, SET);
	HAL_GPIO_WritePin(SEG_k_GPIO_Port, SEG_k_Pin, SET);
	HAL_GPIO_WritePin(SEG_l_GPIO_Port, SEG_l_Pin, SET);
	HAL_GPIO_WritePin(SEG_m_GPIO_Port, SEG_m_Pin, SET);
	HAL_GPIO_WritePin(SEG_n_GPIO_Port, SEG_n_Pin, SET);
}

void display7SEG_2(int num) {
	SevenSEG_Init_2();
		switch(num) {
			case 0 :
				HAL_GPIO_WritePin(SEG_n_GPIO_Port, SEG_n_Pin, SET);
				break;
			case 1:
				display1_2();
				break;
			case 2:
				HAL_GPIO_WritePin(SEG_j_GPIO_Port, SEG_j_Pin, SET);
				HAL_GPIO_WritePin(SEG_m_GPIO_Port, SEG_m_Pin, SET);
				break;
			case 3:
				HAL_GPIO_WritePin(SEG_l_GPIO_Port, SEG_l_Pin, SET);
				HAL_GPIO_WritePin(SEG_m_GPIO_Port, SEG_m_Pin, SET);
				break;
			case 4:
				display1_2();
				HAL_GPIO_WritePin(SEG_m_GPIO_Port, SEG_m_Pin, RESET);
				HAL_GPIO_WritePin(SEG_n_GPIO_Port, SEG_n_Pin, RESET);
				break;
			case 5:
				HAL_GPIO_WritePin(SEG_i_GPIO_Port, SEG_i_Pin, SET);
				HAL_GPIO_WritePin(SEG_l_GPIO_Port, SEG_l_Pin, SET);
				break;
			case 6:
				HAL_GPIO_WritePin(SEG_i_GPIO_Port, SEG_i_Pin, SET);
				break;
			case 7:
				display1_2();
				HAL_GPIO_WritePin(SEG_h_GPIO_Port, SEG_h_Pin, RESET);
				break;
			case 9:
				HAL_GPIO_WritePin(SEG_l_GPIO_Port, SEG_l_Pin, SET);
				break;
			default:
				break;
		}
}

void Set_Traffic_Duration(int Red_Duration, int Green_Duration, int Yellow_Duration) {
	int Total_Duration = Red_Duration + Green_Duration + Yellow_Duration;
	while (Total_Duration > 0) {
		if(Red_Duration >= 3) {
			Set_Color_Pin(GPIOB, LED_1_Pin, 'R', LED_12_Pin, LED_11_Pin, 0);
			Set_Color_Pin(GPIOB, LED_7_Pin, 'R', LED_6_Pin, LED_5_Pin, 0);
			display7SEG(Red_Duration);
			Set_Color_Pin(GPIOB, LED_2_Pin, 'G', LED_3_Pin, LED_4_Pin, 0);
			Set_Color_Pin(GPIOB, LED_8_Pin, 'G', LED_9_Pin, LED_10_Pin, 0);
			display7SEG_2(Red_Duration - 2);
			--Red_Duration;
		}
		else if (Red_Duration > 0 && Red_Duration < 3) {
			Set_Color_Pin(GPIOB, LED_1_Pin, 'R', LED_12_Pin, LED_11_Pin, 0);
			Set_Color_Pin(GPIOB, LED_7_Pin, 'R', LED_6_Pin, LED_5_Pin, 0);
			display7SEG(Red_Duration);
			Set_Color_Pin(GPIOB, LED_3_Pin, 'Y', LED_2_Pin, LED_4_Pin, 0);
			Set_Color_Pin(GPIOB, LED_9_Pin, 'Y', LED_8_Pin, LED_10_Pin, 0);
			display7SEG_2(Red_Duration);
			--Red_Duration;
		}
		else if (Green_Duration > 0 && Red_Duration <= 0) {
			Set_Color_Pin(GPIOB, LED_11_Pin, 'G', LED_12_Pin, LED_1_Pin, 0);
			Set_Color_Pin(GPIOB, LED_5_Pin, 'G', LED_6_Pin, LED_7_Pin, 0);
			display7SEG(Green_Duration);
			Set_Color_Pin(GPIOB, LED_4_Pin, 'R', LED_3_Pin, LED_2_Pin, 0);
			Set_Color_Pin(GPIOB, LED_10_Pin, 'R', LED_9_Pin, LED_8_Pin, 0);
			display7SEG_2(Green_Duration + 2);
			--Green_Duration;
		}
		else if (Yellow_Duration > 0 && Green_Duration <= 0 && Red_Duration <= 0) {
			Set_Color_Pin(GPIOB, LED_12_Pin, 'Y', LED_11_Pin, LED_1_Pin, 0);
			Set_Color_Pin(GPIOB, LED_6_Pin, 'Y', LED_5_Pin, LED_7_Pin, 0);
			display7SEG(Yellow_Duration);
			Set_Color_Pin(GPIOB, LED_4_Pin, 'R', LED_3_Pin, LED_2_Pin, 0);
			Set_Color_Pin(GPIOB, LED_10_Pin, 'R', LED_9_Pin, LED_8_Pin, 0);
			display7SEG_2(Yellow_Duration);
			--Yellow_Duration;
		}
		--Total_Duration;
		HAL_Delay(1000);
	}
}

void Exercise5_Implement() {
	Set_Traffic_Duration(5, 3, 2);
}

