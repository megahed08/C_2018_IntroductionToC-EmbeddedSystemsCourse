/*
 * LCD_interface.h
 *
 *  Created on: Mar 2, 2018
 *      Author: Safory
 */

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

#include "datatypes.h"

void LCD_vWriteData(u8 Data);
void LCD_vInitialize(void);
void LCD_vWriteCommand(u8 Command);

#endif /* LCD_INTERFACE_H_ */
