/*
 * Exercise10.c
 *
 *  Created on: Sep 27, 2024
 *      Author: datph
 */
#include "Exercise10.h"


void SetUpStartTime(int hour, int minute, int second) {
	clearAllClock();
	setNumberOnCLock(hour);
	setNumberOnCLock(minute/5);
	setNumberOnCLock(second/5);
}

void RunClockWithStartTime(int hour, int minute, int second) {
	while (1) {
		if (second > 58) {
			ClearNumberOnClock(minute/5);
			second = 0;
			++minute;
			setNumberOnCLock(minute/5);
		}
		else ++second;
			setNumberOnCLock(second/5);
			HAL_Delay(1000);
		if (second/5 == hour || second/5 == minute/5) {
			setNumberOnCLock(hour);
		}
		else ClearNumberOnClock(second/5);
		if (minute > 59) {
			ClearNumberOnClock(minute/5);
			minute = 0;
			setNumberOnCLock(minute/5);
			ClearNumberOnClock(hour);
			++hour;
			setNumberOnCLock(hour);
		}
		if (hour > 11) {
			ClearNumberOnClock(hour);
			hour = 0;
			setNumberOnCLock(hour);
		}
	}
}

void Exercise10_Init(int hour, int minute, int second) {
}

void Exercise10_Implement(int hour, int minute, int second) {
	SetUpStartTime(hour, minute, second);
	RunClockWithStartTime(hour, minute, second);
}

