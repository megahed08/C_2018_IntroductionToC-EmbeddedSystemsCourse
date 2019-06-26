/*
 * LCD_prog.c
 *
 *  Created on: Mar 2, 2018
 *      Author: Safory
 */

#include"datatypes.h"
#include"macro.h"
#include<avr/io.h>
#include<avr/delay.h>
void LCD_vWriteData(u8 Data)
{
	setbit(PORTB , 0); // RS = 1
	clearbit(PORTB , 1); //RW = 0
	PORTA = Data; // Write Data
	setbit(PORTB , 2); // Enable
	_delay_ms(2);
	clearbit(PORTB , 2); // Disable
}


void LCD_vWriteCommand(u8 Command)
{
	clearbit(PORTB , 0); // RS = 0
	clearbit(PORTB , 1); //RW = 0
	PORTA = Command; // Write Data
	setbit(PORTB , 2); // Enable
	_delay_ms(2);
	clearbit(PORTB , 2); // Disable
}
void LCD_vInitialize(void)
{
	_delay_ms(100); // 100ms to ensure that a delay of 30ms is achieved
	LCD_vWriteCommand(0b00111100);
	_delay_ms(1 );
	LCD_vWriteCommand(0b00001111);
	_delay_ms(2);
	LCD_vWriteCommand(0b00000001);
}
