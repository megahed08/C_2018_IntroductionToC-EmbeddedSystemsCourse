/*
 * LCD_interface.h
 *
 *  Created on: Mar 2, 2018
 *      Author: Safory
 */

#ifndef LCD_INT_H_
#define LCD_INT_H_

#include "DataTypes.h"
#include "DIO_Int.h"

void LCD_vWriteData(u8 Data);
void LCD_vInitialize(void);
void LCD_vWriteCommand(u8 Command);

#endif /* LCD_INT_H_ */
