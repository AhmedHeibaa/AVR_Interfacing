/*
 * Projects_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "Projects_Interface.h"




int main()
{
	H_SERVO_Void_ServoInit();

	while(1)
	{
		// Write code here
		H_SERVO_Void_ServoSetAngle(90);
	}
	return 0;
}



