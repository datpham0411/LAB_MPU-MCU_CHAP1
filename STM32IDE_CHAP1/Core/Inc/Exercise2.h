/*
 * Exercise2.h
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */

#ifndef INC_EXERCISE2_H_
#define INC_EXERCISE2_H_
#include "main.h"
#include "Exercise1.h"
void Exercise2_Init();
void Exercise2_Implement();
void Set_Color_Pin(GPIO_TypeDef *GPIO_Type, uint16_t Pin_Set, char Set_Color, uint16_t Pin_Unset_1, uint16_t Pin_Unset_2, uint32_t Delay_Time);


#endif /* INC_EXERCISE2_H_ */
