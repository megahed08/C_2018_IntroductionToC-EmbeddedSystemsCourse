/*
 * LCD_prog.c
 *
 *  Created on: Mar 2, 2018
 *      Author: Safory
 */
#define F_CPU 8000000
#include <avr/delay.h>#include <avr/io.h>
#include "DataTypes.h"
#include "utils.h"
#include "LCD_Int.h"
#include "LCD_Config.h"

#include <avr/io.h>


void LCD_vWriteData(u8 Data){
	DIO_vSetPinValue(LCD_CONTROL_PORT, LCD_RS, DIO_HIGH); // RS = 1
	DIO_vSetPinValue(LCD_CONTROL_PORT, LCD_RW, DIO_LOW);  // RW = 0
	DIO_vSetPortValue(DIO_PORTA, Data);                                 // Write Data  LCD_DATA_PORT
	DIO_vSetPinValue(LCD_CONTROL_PORT, LCD_E, DIO_HIGH); // Enable ON
	_delay_ms(10);
	DIO_vSetPinValue(LCD_CONTROL_PORT, LCD_E, DIO_LOW);  // Enable OFF
}

/*
 * Des:
 * Inputs:
 * Outputs:
 */
void LCD_vWriteCommand(u8 Command){
	DIO_vSetPinValue(LCD_CONTROL_PORT, LCD_RS, DIO_LOW); // RS = 1
	DIO_vSetPinValue(LCD_CONTROL_PORT, LCD_RW, DIO_LOW);  // RW = 0
	DIO_vSetPortValue(DIO_PORTA, Command);                              // Write Data   LCD_DATA_PORT
	DIO_vSetPinValue(LCD_CONTROL_PORT, LCD_E, DIO_HIGH); // Enable ON
	_delay_ms(10);
	DIO_vSetPinValue(LCD_CONTROL_PORT, LCD_E, DIO_LOW);  // Enable OFF
}

void LCD_vInitialize(void){
	_delay_ms(100);                  // 100ms to ensure that a delay of 30ms is achieved
	LCD_vWriteCommand(0b00111100);   // Function Set
	_delay_ms(1 );
	LCD_vWriteCommand(0b00001111);   // Display On/Off Control
	_delay_ms(1);
	LCD_vWriteCommand(0b00000001);   // Display Clear
}
