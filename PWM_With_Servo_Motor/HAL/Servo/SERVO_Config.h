/*
 * SERVO_Config.h
 *
 *  Created on: Nov 14, 2022
 *      Author: DELL
 */

#ifndef HAL_SERVO_SERVO_CONFIG_H_
#define HAL_SERVO_SERVO_CONFIG_H_

/* Wiring
 * RED -> Positive supply 4.8v to 6v
 * WHITE -> Control Signal.
 * BLACK -> GND
 *
 */

// Servo motor frequency =  50hz
/*
 * Degrees 0 --> 1ms
 * 		   180 --> 2ms
 *
 * 		   Set OCR1A=180 for 0 degree.
		   Set OCR1A=415 for 90 degree.
		   Set OCR1A=650 for 180 degree
 * */

#define SERVO1_PIN		PD5_PIN
//range // cycale with meli sec
#define Angel_MIN			1
#define Angel_MAX			3

#endif /* HAL_SERVO_SERVO_CONFIG_H_ */
