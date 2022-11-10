/*
 * Projects_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "Projects_Interface.h"




int main()
{
	// Define AdcValue and Desired o/p range
	u16 Local_U16_AdcValue = 0;
	u8 Local_U8_DesiredRange = 0;


	// Initialize Leds
	 H_LED_Void_LedInit(LED_RED);
	 H_LED_Void_LedInit(LED_GRN);
	 H_LED_Void_LedInit(LED_BLU);


	// Initialize ADC
	 M_ADC_Void_ADCInit();
	 // Initialize LCD
	 H_Lcd_Void_LCDInit();

	while(1){
		// read ADC value
		Local_U16_AdcValue = M_ADC_Void_ADCRead(ADC_CHANNEL_0);
		// Display ADC reg value on LCD
		H_Lcd_Void_LCDWriteNumber(Local_U16_AdcValue);
		_delay_ms(500);
		H_Lcd_Void_LCDClear();


		// Desired range value
		Local_U8_DesiredRange =( (Local_U16_AdcValue*10)/255);
		// situations
		if(Local_U8_DesiredRange<= 10)
		{
			 H_LED_Void_LedOn(LED_RED);
		}

		else if(Local_U8_DesiredRange>10 && Local_U8_DesiredRange<=30)
		{

			 H_LED_Void_LedOn(LED_GRN);
		}
		else if (Local_U8_DesiredRange>30)
		{

			 H_LED_Void_LedOn(LED_BLU);
		}



	}


	return 0;
}
