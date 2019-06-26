/*
 * keypad_prog.c

 *
 *  Created on: Mar 3, 2018
 *      Author: osama
 */
#include "Datatypes.h"
#include "DIO_Int.h"
#include <avr/io.h>
#include "Keypad_config.h"
//u8 Keypad_Array[4][4]={{'1','2','3','/'},{'4','5','6','-'},{'7','8','9','.'},{'+','0','*','='}};
u8 Keypad_Array[4][4]={{49,50,51,47},{52,53,54,45},{55,56,57,46},{43,48,42,61}};
void Keypad_vInitialization(void){

	//set direction of rows pins to output
	DIO_vSETPinDirection(Keypad_Port_R,Keypad_R0,DIO_OUTPUT);
	DIO_vSETPinDirection(Keypad_Port_R,Keypad_R1,DIO_OUTPUT);
	DIO_vSETPinDirection(Keypad_Port_R,Keypad_R2,DIO_OUTPUT);
	DIO_vSETPinDirection(Keypad_Port_R,Keypad_R3,DIO_OUTPUT);

	//set direction of columns pins to input
	DIO_vSETPinDirection(Keypad_Port_C,Keypad_C0,DIO_INPUT);
	DIO_vSETPinDirection(Keypad_Port_C,Keypad_C1,DIO_INPUT);
	DIO_vSETPinDirection(Keypad_Port_C,Keypad_C2,DIO_INPUT);
	DIO_vSETPinDirection(Keypad_Port_C,Keypad_C3,DIO_INPUT);

	//activate pull up resistor for the input pins
	DIO_vSetPullUpResistor(Keypad_Port_C,Keypad_C0);
	DIO_vSetPullUpResistor(Keypad_Port_C,Keypad_C1);
	DIO_vSetPullUpResistor(Keypad_Port_C,Keypad_C2);
	DIO_vSetPullUpResistor(Keypad_Port_C,Keypad_C3);
}
u8 Keypad_uRead(void){
	u8 counter_r;
	u8 counter_c;
	DIO_vSetPinValue(Keypad_Port_R,Keypad_R0, DIO_HIGH);
	DIO_vSetPinValue(Keypad_Port_R,Keypad_R1, DIO_HIGH);
	DIO_vSetPinValue(Keypad_Port_R,Keypad_R2, DIO_HIGH);
	DIO_vSetPinValue(Keypad_Port_R,Keypad_R3, DIO_HIGH);

	for (counter_r=Keypad_R0;counter_r <= Keypad_R3;counter_r++)
	{
		DIO_vSetPinValue(Keypad_Port_R,counter_r, DIO_LOW);
		for (counter_c=Keypad_C0;counter_c<=Keypad_C3;counter_c++)
		{
			if (!DIO_u8GetPinValue(Keypad_Port_C,counter_c))
			{
				return Keypad_Array[counter_r-4][counter_c];
			}
		}
		DIO_vSetPinValue(Keypad_Port_R,counter_r, DIO_HIGH);
	}
	return 62;

}
