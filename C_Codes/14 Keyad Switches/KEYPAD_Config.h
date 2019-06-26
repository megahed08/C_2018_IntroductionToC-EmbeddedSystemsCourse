/*
 * KEYPAD_Config.h
 *
 *  Created on: Mar 3, 2018
 *      Author: megah
 */

#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_

#include "DataTypes.h"
#include "DIO_Int.h"

#define KEYPAD_PORT_R DIO_PORTC
#define KEYPAD_R0 DIO_PIN0
#define KEYPAD_R1 DIO_PIN1
#define KEYPAD_R2 DIO_PIN2
#define KEYPAD_R3 DIO_PIN3

#define KEYPAD_PORT_C DIO_PORTD
#define KEYPAD_C0 DIO_PIN0
#define KEYPAD_C1 DIO_PIN1
#define KEYPAD_C2 DIO_PIN2
#define KEYPAD_C3 DIO_PIN3

/*
 *           C1   C2   C3   C4
 *         _____________________
 *         | 1  | 2  | 3  | /  |
 *    R1   |____|____|____|____|
 *         | 4  | 5  | 6  | -  |
 *    R2   |____|____|____|____|
 *         | 7  | 8  | 9  | .  |
 *    R3   |____|____|____|____|
 *         | +  | 0  | *  | =  |
 *    R4   |____|____|____|____|
 */
// Set Keypad buttons
u8 KEYPAD_Array[4][4] = {{'1', '2', '3', '/'}, {'4', '5', '6', '-'},
		{'7', '8', '9', '.'}, {'+', '0', '*', '='}};

#endif /* KEYPAD_CONFIG_H_ */
