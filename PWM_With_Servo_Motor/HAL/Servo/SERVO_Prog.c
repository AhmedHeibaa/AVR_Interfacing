/*

 * SERVO_Prog.c
 *
 *  Created on: Nov 14, 2022
 *      Author: DELL
 */

#include "SERVO_Interface.h"
#include "SERVO_Config.h"
#include "SERVO_Private.h"

void H_SERVO_Void_ServoInit(void){
	M_Timer_Void_PWMInit(TIMER1_CHANNEL);
	M_Timer_Void_PWMStart(TIMER1_CHANNEL);
	u16 Local_u8_ZeroAngel_DutyCycle = Angel_MIN * 100 / 20.f;
	M_Timer_Void_PWMSetDutyCycle(TIMER1_CHANNEL,(u8)Local_u8_ZeroAngel_DutyCycle);
}

void H_SERVO_Void_ServoSetAngle(u8 Copy_U8_ServoAngle){
	u16 Local_u16_ZeroAngel_DutyCycle = Angel_MIN * 100 / 20.f; /* Ton / Ttotal */
	f32 Local_u16_180Angel_DutyCycle	= Angel_MAX *100/20.f;	/* Ton / Ttotal */
	f32 ServoDutyCyle = (Copy_U8_ServoAngle * (Local_u16_180Angel_DutyCycle - Local_u16_ZeroAngel_DutyCycle)/180) + 5 ;
	 M_Timer_Void_PWMSetDutyCycle(TIMER1_CHANNEL,ServoDutyCyle);

}
