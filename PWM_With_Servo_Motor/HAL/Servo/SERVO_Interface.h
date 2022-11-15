/*
 * SERVO_Interface.h
 *
 *  Created on: Nov 14, 2022
 *      Author: DELL
 */

#ifndef HAL_SERVO_SERVO_INTERFACE_H_
#define HAL_SERVO_SERVO_INTERFACE_H_



#include "Timer_Interface.h"
#include "DIO_Interface.h"



void H_SERVO_Void_ServoInit(void);
void H_SERVO_Void_ServoSetAngle(u8);

#endif /* HAL_SERVO_SERVO_INTERFACE_H_ */
