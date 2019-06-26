/*
 * main.c
 *
 *  Created on: Mar 7, 2018
 *      Author: osama
 */

#include <avr/io.h>
#include <util/delay.h>
#include "LCD_prog.h"
#include "DIO_Int.h"
#include "Keypad_int.h"

void main (void){
	Keypad_vInitialization();
	Lcd_vInitialization();
	u8 num1;
	u8 num2;
	u8 operation ;
	u8 result[4];
	u8 result_num;
	u8 i;
	u8 value=65;
	while (1)
	{
		i=0;
		num1=0;
		num2=0;
		result_num=0;
		operation = 0;
		while(1)
		{
			value=Keypad_uRead();
			if ((value>47)&&(value<58))
			{
				LCD_vWriteData(value);
				num1 += (value-48) + 10*(value-48)*i-(value-48)*i;
				_delay_ms(450);
				i=1;
			}
			else if ((value<48)&&(i==1))
			{
				operation =value;
				LCD_vWriteData(operation);
				_delay_ms(450);
				i=0;
				value=65;
				break;
			}else
				continue;
		}
		while(1)
		{
			value=Keypad_uRead();
			if ((value>47)&&(value<58))
			{
				LCD_vWriteData(value);
				num2 += (value-48) + 10*(value-48)*i-(value-48)*i;
				_delay_ms(450);
				i=1;
			}
			else if ((value==61)&&(i==1))
			{
				LCD_vWriteData(61);
				_delay_ms(450);
				value=65;
				break;
			}

		}

		switch (operation)
		{
		case 43:
			result_num=num1 + num2;
			break;
		case 45:
			result_num=num1 - num2;
			break;
		case 42:
			result_num=num1 * num2;
			break;
		case 47:
			result_num=num1 / num2;
			break;
		default :
			continue;
		}
		itoa(result_num, result, 10);
		LCD_vPosition(29);
		LCD_vWriteDataString(result);
		_delay_ms(10000);
		LCD_vClear();
	}
}

