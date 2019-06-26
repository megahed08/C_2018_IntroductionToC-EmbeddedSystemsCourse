/*
 * LCD_prog.h
 *
 *  Created on: Mar 2, 2018
 *      Author: osama
 */

#ifndef LCD_PROG_H_
#define LCD_PROG_H_
#include "Datatypes.h"
void LCD_vWriteDataString(u8 * Data);
void LCD_vWriteData( u8 Data);
void LCD_vWriteCommand(u8 Command);
void Lcd_vInitialization (void);
void LCD_vDataPort(void);
void LCD_vControlPort(void);
void LCD_vClear(void);
void LCD_vPosition(s8 position);
void LCD_vCursorHome(void);
void LCD_vDisplayRshift(void);
void LCD_vDisplayLshift(void);

#endif /* LCD_PROG_H_ */
