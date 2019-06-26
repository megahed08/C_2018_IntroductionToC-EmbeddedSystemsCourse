/*
 * main.c
 *
 *  Created on: Feb 24, 2018
 *      Author: megah
 */

#define F_CPU 8000000
#include <avr/delay.h>
#include "DIO_Int.h"

//Task 1   Toggling LED
/*
void main(void){
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN0, DIO_OUTPUT);
	while(1){
		DIO_vSetPinValue(DIO_PORTA, DIO_PIN0, DIO_HIGH);
		_delay_ms(1000);
		DIO_vSetPinValue(DIO_PORTA, DIO_PIN0, DIO_LOW);
		_delay_ms(1000);
	}
}


//Task 2   Switch to LED
void main(void){
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN0, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN1, DIO_INPUT);
	DIO_vEnablePullUpResistor(DIO_PORTC,DIO_PIN0);
	DIO_vEnablePullUpResistor(DIO_PORTC,DIO_PIN1);


	while(1){
		if(DIO_u8GetPinValue(DIO_PORTC, DIO_PIN0) == DIO_LOW){
			DIO_vSetPinValue(DIO_PORTA, DIO_PIN0, DIO_HIGH);
		}else{
			DIO_vSetPinValue(DIO_PORTA, DIO_PIN0, DIO_LOW);
		}


		if(DIO_u8GetPinValue(DIO_PORTC, DIO_PIN1) == DIO_LOW){
			DIO_vSetPinValue(DIO_PORTA, DIO_PIN1, DIO_HIGH);
		}else{
			DIO_vSetPinValue(DIO_PORTA, DIO_PIN1, DIO_LOW);
		}

	}
}
 */
//Task 3  "Assignment" Switch to 3 LED operations
void main(void){
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN0, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN1, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN2, DIO_INPUT);
	DIO_vEnablePullUpResistor(DIO_PORTC,DIO_PIN0);
	DIO_vEnablePullUpResistor(DIO_PORTC,DIO_PIN1);
	DIO_vEnablePullUpResistor(DIO_PORTC,DIO_PIN2);


	while(1){
		if(DIO_u8GetPinValue(DIO_PORTC, DIO_PIN0) == DIO_LOW &
				DIO_u8GetPinValue(DIO_PORTC, DIO_PIN1) == DIO_HIGH &
				DIO_u8GetPinValue(DIO_PORTC, DIO_PIN2) == DIO_HIGH){
			DIO_vSetPinValue(DIO_PORTA, DIO_PIN0, DIO_HIGH);
		}else if(DIO_u8GetPinValue(DIO_PORTC, DIO_PIN1) == DIO_LOW &
				DIO_u8GetPinValue(DIO_PORTC, DIO_PIN2) == DIO_HIGH){
			DIO_vSetPinValue(DIO_PORTA, DIO_PIN0, DIO_HIGH);
			_delay_ms(1000);
			DIO_vSetPinValue(DIO_PORTA, DIO_PIN0, DIO_LOW);
			_delay_ms(1000);
		}else if(DIO_u8GetPinValue(DIO_PORTC, DIO_PIN2) == DIO_LOW){
			DIO_vSetPinValue(DIO_PORTA, DIO_PIN0, DIO_HIGH);
			_delay_ms(2000);
			DIO_vSetPinValue(DIO_PORTA, DIO_PIN0, DIO_LOW);
			_delay_ms(2000);
		}else{
			DIO_vSetPinValue(DIO_PORTA, DIO_PIN0, DIO_LOW);
		}

	}
}
