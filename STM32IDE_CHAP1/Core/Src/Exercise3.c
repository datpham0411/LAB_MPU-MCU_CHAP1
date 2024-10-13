/*
 * Exercise3.c
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */
#include "Exercise3.h"
void Exercise3_Init() {

}

void Exercise3_Implement() {
	Set_Color_Pin(GPIOB, LED_1_Pin, 'R', LED_12_Pin, LED_11_Pin, 0);
	Set_Color_Pin(GPIOB, LED_7_Pin, 'R', LED_6_Pin, LED_5_Pin, 0);

	Set_Color_Pin(GPIOB, LED_2_Pin, 'G', LED_3_Pin, LED_4_Pin, 0);
	Set_Color_Pin(GPIOB, LED_8_Pin, 'G', LED_9_Pin, LED_10_Pin, 3000);

	Set_Color_Pin(GPIOB, LED_3_Pin, 'Y', LED_2_Pin, LED_4_Pin, 0);
	Set_Color_Pin(GPIOB, LED_9_Pin, 'Y', LED_8_Pin, LED_10_Pin, 2000);

	Set_Color_Pin(GPIOB, LED_4_Pin, 'R', LED_3_Pin, LED_2_Pin, 0);
	Set_Color_Pin(GPIOB, LED_10_Pin, 'R', LED_9_Pin, LED_8_Pin, 0);

	Set_Color_Pin(GPIOB, LED_11_Pin, 'G', LED_12_Pin, LED_1_Pin, 0);
	Set_Color_Pin(GPIOB, LED_5_Pin, 'G', LED_6_Pin, LED_7_Pin, 3000);

	Set_Color_Pin(GPIOB, LED_12_Pin, 'Y', LED_11_Pin, LED_1_Pin, 0);
	Set_Color_Pin(GPIOB, LED_6_Pin, 'Y', LED_5_Pin, LED_7_Pin, 2000);
}


