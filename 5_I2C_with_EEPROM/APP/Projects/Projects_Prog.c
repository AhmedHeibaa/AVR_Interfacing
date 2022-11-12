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
	H_EEPROM_Void_EEPROMInit();
	H_Lcd_Void_LCDInit();
	u8 x = H_EEPROM_U8_EEPROMRead(0,0);
	while(1)
	{
		H_Lcd_Void_LCDWriteNumber(x);
		_delay_ms(600);
		x++;
		H_EEPROM_Void_EEPROMWrite(0,0,x);
		H_Lcd_Void_LCDClear();
	}
	return 0;
}



void A_Timer0Excution(void)
{

}
