/*
 * Exercise6.h
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */

#ifndef INC_EXERCISE6_H_
#define INC_EXERCISE6_H_

#include "main.h"
#include "Exercise1.h"
#include "Exercise2.h"
#include "Exercise3.h"
#include "Exercise4.h"
#include "Exercise5.h"

void Exercise6_Init();
void Exercise6_Implement();
void Set_Single_LED(GPIO_TypeDef *GPIO_Type, uint16_t Pin_Name, uint32_t Delay_Time);

#endif /* INC_EXERCISE6_H_ */
