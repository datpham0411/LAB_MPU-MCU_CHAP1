/*
 * Exercise2.c
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */
#include "Exercise2.h"
void Exercise2_Init() {

}
/*
 * Brief
 * Function Set_Color_Pin
 * Reference: GPIO_Type: GPIOA or GPIOB
 * 			  Pin_Set: Pin used for ON Color you want
 * 			  Pin_Unset_1, Pin_Unset_2: Pin used for OFF Remaining Colors
 * 			  Set_Color: R is RED, G is GREEN, Y is YELLOW
 * */
void Set_Color_Pin(GPIO_TypeDef *GPIO_Type, uint16_t Pin_Set, char Set_Color, uint16_t Pin_Unset_1, uint16_t Pin_Unset_2, uint32_t Delay_Time) {
	HAL_GPIO_WritePin(GPIO_Type, Pin_Unset_2, SET);
	HAL_GPIO_WritePin(GPIO_Type, Pin_Unset_1, SET);
	HAL_GPIO_WritePin(GPIO_Type, Pin_Set, RESET);
	HAL_Delay(Delay_Time);
}

void Exercise2_Implement() {
	Set_Color_Pin(GPIOA, LED_RED_Pin, 'R', LED_YELLOW_Pin, LED_GREEN_Pin, 5000);
	Set_Color_Pin(GPIOA, LED_YELLOW_Pin, 'Y', LED_RED_Pin, LED_GREEN_Pin, 2000);
	Set_Color_Pin(GPIOA, LED_GREEN_Pin, 'G', LED_RED_Pin, LED_YELLOW_Pin, 3000);
}

