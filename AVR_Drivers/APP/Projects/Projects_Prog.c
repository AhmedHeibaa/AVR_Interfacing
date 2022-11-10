/*
 * Projects_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "Projects_Interface.h"

void A_Timer0Excution(void);

int main()
{
	M_ADC_Void_ADCInit();
	H_Lcd_Void_LCDInit();
	u16 Local_U16_AdcValue = 0;
	while(1)
	{
		Local_U16_AdcValue = M_ADC_Void_ADCRead(ADC_CHANNEL_0);
		H_Lcd_Void_LCDWriteNumber(Local_U16_AdcValue);
		_delay_ms(500);
		H_Lcd_Void_LCDClear();
	}
	return 0;
}



void A_Timer0Excution(void)
{

}
