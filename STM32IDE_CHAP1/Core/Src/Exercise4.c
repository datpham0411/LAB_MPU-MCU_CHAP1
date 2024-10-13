/*
 * Exercise4.c
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */
#include "Exercise4.h"
void Exercise4_Init() {

}

void SevenSEG_Init() {
	HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, RESET);
	HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, RESET);
	HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, RESET);
	HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, RESET);
	HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, RESET);
	HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, RESET);
	HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, RESET);
}

void display1(){
	HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, SET);
	HAL_GPIO_WritePin(SEG_d_GPIO_Port, SEG_d_Pin, SET);
	HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, SET);
	HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, SET);
	HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, SET);
}

void display7SEG(int num){
	SevenSEG_Init();
	switch(num) {
		case 0 :
			HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, SET);
			break;
		case 1:
			display1();
			break;
		case 2:
			HAL_GPIO_WritePin(SEG_c_GPIO_Port, SEG_c_Pin, SET);
			HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, SET);
			HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, SET);
			break;
		case 4:
			display1();
			HAL_GPIO_WritePin(SEG_f_GPIO_Port, SEG_f_Pin, RESET);
			HAL_GPIO_WritePin(SEG_g_GPIO_Port, SEG_g_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, SET);
			HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG_b_GPIO_Port, SEG_b_Pin, SET);
			break;
		case 7:
			display1();
			HAL_GPIO_WritePin(SEG_a_GPIO_Port, SEG_a_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG_e_GPIO_Port, SEG_e_Pin, SET);
			break;
		default:
			break;
	}
}

void Exercise4_Implement() {
	int Counter = 0;
	while(1) {
	if (Counter >= 10) Counter = 0;
	display7SEG(Counter++);
	HAL_Delay(1000);
	}
}


