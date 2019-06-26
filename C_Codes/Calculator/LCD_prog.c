/*
 * LCD_prog.c

 *
 *  Created on: Mar 2, 2018
 *      Author: osama
 */
#include <avr/io.h>
#include "Datatypes.h"
#include "LCD_Config.h"
#include "DIO_Int.h"
#include <util/delay.h>

// This function writes single character on the LCD

void LCD_vWriteData( u8 Data)
{
	DIO_vSetPinValue(LCD_CONTROL_PORT,LCD_RS,DIO_HIGH);            //Sets  RS pin to 1
	DIO_vSetPinValue(LCD_CONTROL_PORT,LCD_RW,DIO_LOW);             //Sets RW pin to  0
	DIO_vSetPortValue(LCD_DATA_PORT,Data);                         //Puts Data  on LCD_DATA_PORT
	DIO_vSetPinValue(LCD_CONTROL_PORT,LCD_ENABLE,DIO_HIGH);        //Sets  LCD_ENABLE to high
	_delay_ms(10);
	DIO_vSetPinValue(LCD_CONTROL_PORT,LCD_ENABLE,DIO_LOW);         //Sets  LCD_ENABLE to low

}
// This function writes string on the LCD

void LCD_vWriteDataString(u8 * Data)
{
	while(*Data )
	{
		LCD_vWriteData(*Data++);

	}
}


// This function send a command to the LCD
void LCD_vWriteCommand(u8 Command)
{
	DIO_vSetPinValue(LCD_CONTROL_PORT,LCD_RS,DIO_LOW);             //Sets  RS pin to 0
	DIO_vSetPinValue(LCD_CONTROL_PORT,LCD_RW,DIO_LOW);            //Sets RW pin to  0
	DIO_vSetPortValue(LCD_DATA_PORT, Command );                  //Puts Command  on LCD_DATA_PORT
	DIO_vSetPinValue(LCD_CONTROL_PORT,LCD_ENABLE,DIO_HIGH);      //Sets  LCD_ENABLE to high
	_delay_ms(10);
	DIO_vSetPinValue(LCD_CONTROL_PORT,LCD_ENABLE,DIO_LOW);       //Sets  LCD_ENABLE to low

}

//This function set the direction of DATA port defined in the configuration file to output
void LCD_vDataPort(void)
{

	DIO_vSETPinDirection(LCD_DATA_PORT,LCD_D0,DIO_OUTPUT);
	DIO_vSETPinDirection(LCD_DATA_PORT,LCD_D1,DIO_OUTPUT);
	DIO_vSETPinDirection(LCD_DATA_PORT,LCD_D2,DIO_OUTPUT);
	DIO_vSETPinDirection(LCD_DATA_PORT,LCD_D3,DIO_OUTPUT);
	DIO_vSETPinDirection(LCD_DATA_PORT,LCD_D4,DIO_OUTPUT);
	DIO_vSETPinDirection(LCD_DATA_PORT,LCD_D5,DIO_OUTPUT);
	DIO_vSETPinDirection(LCD_DATA_PORT,LCD_D6,DIO_OUTPUT);
	DIO_vSETPinDirection(LCD_DATA_PORT,LCD_D7,DIO_OUTPUT);


}
//This function set the directions of control pins defined in the configuration file to output

void LCD_vControlPort(void)
{

	DIO_vSETPinDirection(LCD_CONTROL_PORT,LCD_RS, DIO_HIGH);
	DIO_vSETPinDirection(LCD_CONTROL_PORT,LCD_RW, DIO_HIGH);
	DIO_vSETPinDirection(LCD_CONTROL_PORT,LCD_ENABLE, DIO_HIGH);

}

/*This function do all things to make LCD ready to accept data and commands
 * and it must be the first to call in main to make every thing works as needed*/
void Lcd_vInitialization (void)
{
	LCD_vDataPort();
	LCD_vControlPort();
	_delay_ms(100);
	LCD_vWriteCommand(0b00111100);
	_delay_ms(2);
	LCD_vWriteCommand(0b00001111);
	_delay_ms(2);
	LCD_vWriteCommand(0b00000001);
	_delay_ms(2);
}

//This function clears the display
void LCD_vClear(void)
{
	LCD_vWriteCommand(0b00000001);
	_delay_ms(10);
}

//This function moves the cursor to the specified location from 1 to 32

void LCD_vPosition(u8 position)
{
	if (position > 16)
		LCD_vWriteCommand((175 +position));
	else
		LCD_vWriteCommand((127+position));
	_delay_ms(10);
}


//This function moves the cursor 1st position
void LCD_vCursorHome(void)
{
	LCD_vWriteCommand(0b00000010);
}


//This function shifts the display to right
void LCD_vDisplayRshift(void)
{
	LCD_vWriteCommand(0b00011100);
}

//This function shifts the display to left
void LCD_vDisplayLshift(void)
{
	LCD_vWriteCommand(0b00011000);
}
