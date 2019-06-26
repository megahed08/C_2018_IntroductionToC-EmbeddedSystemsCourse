/*
 * main.c
 *
 *  Created on: Feb 24, 2018
 *      Author: megah
 */

#define F_CPU 8000000
#include <avr/delay.h>
#include "DataTypes.h"
#include "DIO_Int.h"
#include "LCD_Int.h"
#include "KEYPAD_Int.h"
#include "ADC_Int.h"
#include "utils.h"

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
// LCD
void main(void){
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN4, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN5, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN6, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN7, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);

	LCD_vInitialize();

	while(1){
		LCD_vWriteCommand(11000000);
		LCD_vWriteData('Y');
		_delay_ms(10);
		LCD_vWriteData('O');
		_delay_ms(10);
		LCD_vWriteData('U');
		_delay_ms(10);
		LCD_vWriteData('S');
		_delay_ms(10);
		LCD_vWriteData('S');
		_delay_ms(10);
		LCD_vWriteData('E');
		_delay_ms(10);
		LCD_vWriteData('F');
		_delay_ms(1000);
		break;

	}
}
 */
/*
// Keypad to LED
#include "utils.h"
#include <avr/io.h>
void main(void){
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN3, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN0, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN1, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN2, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN3, DIO_INPUT);

	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN0);
	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN1);
	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN2);
	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN3);

	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN3, DIO_OUTPUT);

	while(1){
		if(KEYPAD_u8Read() == '='){
			TogBit(PORTB, 3);
		}
	}
}
 */
/*
// Assignment HELLO IMT
void main(void){
	//LCD
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN4, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN5, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN6, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN7, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);

	LCD_vInitialize();

	for(u8 SpaceCounter = 0; SpaceCounter < (16 - 11); SpaceCounter++){
		LCD_vWriteData(' ');
		_delay_ms(10);
	}
	LCD_vWriteData('H');
	_delay_ms(10);
	LCD_vWriteData('E');
	_delay_ms(10);
	LCD_vWriteData('L');
	_delay_ms(10);
	LCD_vWriteData('L');
	_delay_ms(10);
	LCD_vWriteData('O');
	_delay_ms(10);
	LCD_vWriteData('!');
	_delay_ms(10);

	LCD_vWriteCommand(11000000);
	for(u8 SpaceCounter = 0; SpaceCounter < (16 - 10); SpaceCounter++){
		LCD_vWriteData(' ');
		_delay_ms(10);
	}
	LCD_vWriteData('I');
	_delay_ms(10);
	LCD_vWriteData('M');
	_delay_ms(10);
	LCD_vWriteData('T');
	_delay_ms(10);

}
 */
/*
// Assignment MOVING NAME
void main(void){
	//LCD
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN4, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN5, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN6, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN7, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);

	LCD_vInitialize();

	u8 direction = 0;
	u8 SpaceCounterVariable = 1;

	while(1){
		LCD_vWriteCommand(10000000);
		for(u8 SpaceCounter = 0; SpaceCounter <  SpaceCounterVariable; SpaceCounter++){
			LCD_vWriteData(' ');
			_delay_ms(1);
		}
		LCD_vWriteData('Y');
		_delay_ms(1);
		LCD_vWriteData('O');
		_delay_ms(1);
		LCD_vWriteData('U');
		_delay_ms(1);
		LCD_vWriteData('S');
		_delay_ms(1);
		LCD_vWriteData('S');
		_delay_ms(1);
		LCD_vWriteData('E');
		_delay_ms(1);
		LCD_vWriteData('F');
		_delay_ms(1);
		for(u8 SpaceCounter = 0; SpaceCounter < (9 - SpaceCounterVariable); SpaceCounter++){
			LCD_vWriteData(' ');
			_delay_ms(1);
		}

		LCD_vWriteCommand(11000000);
		for(u8 SpaceCounter = 0; SpaceCounter < SpaceCounterVariable; SpaceCounter++){
			LCD_vWriteData(' ');
			_delay_ms(1);
		}
		LCD_vWriteData('M');
		_delay_ms(1);
		LCD_vWriteData('E');
		_delay_ms(1);
		LCD_vWriteData('G');
		_delay_ms(1);
		LCD_vWriteData('A');
		_delay_ms(1);
		LCD_vWriteData('H');
		_delay_ms(1);
		LCD_vWriteData('E');
		_delay_ms(1);
		LCD_vWriteData('D');
		_delay_ms(1);
		for(u8 SpaceCounter = 0; SpaceCounter < (9 - SpaceCounterVariable); SpaceCounter++){
			LCD_vWriteData(' ');
			_delay_ms(1);
		}

		if(direction == 0){
			SpaceCounterVariable++;
		}else{
			SpaceCounterVariable--;
		}

		if(SpaceCounterVariable == 9)
			direction = 1;
		if(SpaceCounterVariable == 0)
			direction = 0;
	}
}
 */


/*
// Assignment MOVING 'A'
void main(void){
	//LCD
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN4, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN5, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN6, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN7, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);

	LCD_vInitialize();

	u8 direction = 0;
	u8 SpaceCounterVariable = 1;
	u8 UpDown = 0;
	while(1){
		if(UpDown == 0){
			LCD_vWriteCommand(11000000);
			for(u8 SpaceCounter = 0; SpaceCounter < 16; SpaceCounter++){
				LCD_vWriteData(' ');
				_delay_ms(1);
			}
			LCD_vWriteCommand(10000000);
			UpDown = 1;
		}else{
			LCD_vWriteCommand(10000000);
			for(u8 SpaceCounter = 0; SpaceCounter < 16; SpaceCounter++){
				LCD_vWriteData(' ');
				_delay_ms(1);
			}
			LCD_vWriteCommand(11000000);
			UpDown = 0;
		}

		for(u8 SpaceCounter = 0; SpaceCounter < SpaceCounterVariable; SpaceCounter++){
			LCD_vWriteData(' ');
			_delay_ms(10);
		}
		LCD_vWriteData('A');
		_delay_ms(10);

		for(u8 SpaceCounter = 0; SpaceCounter < (15 - SpaceCounterVariable); SpaceCounter++){
			LCD_vWriteData(' ');
			_delay_ms(10);
		}

		if(direction == 0){
			SpaceCounterVariable++;
		}else{
			SpaceCounterVariable--;
		}

		if(SpaceCounterVariable == 15)
			direction = 1;
		if(SpaceCounterVariable == 0)
			direction = 0;
	}
}
 */

/*
//Keypad to LCD
void main(void){
	//KEYPAD
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN0, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN4, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN5, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN6, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN7, DIO_INPUT);

	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN0);
	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN1);
	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN2);
	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN3);
	//LCD
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN4, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN5, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN6, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN7, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);

	LCD_vInitialize();
	u8 KEYPAD_CHAR;
	u8 CHAR_LOCATION = 0;
	while(1){
		KEYPAD_CHAR = KEYPAD_u8Read();
		_delay_ms(10);
		if(KEYPAD_CHAR != 100){
			LCD_vWriteData(KEYPAD_CHAR + '0');
			_delay_ms(10);
			CHAR_LOCATION++;
		}
		if(CHAR_LOCATION == 16){
			LCD_vWriteCommand(11000000);
		}
		if(CHAR_LOCATION == 32){
			CHAR_LOCATION = 0;
			LCD_vWriteCommand(10000000);
		}

	}
}
 */

// interrupt to LED
/*
#include <avr/io.h>
#include <avr/interrupt.h>
#include "utils.h"

#define MCUCR (*((u8*) 0x55))

void main(void){

	SetBit(MCUCR, ISC00);  //set bit 0 in MCUCR Reg to 1
	SetBit(MCUCR, ISC01);  //set bit 1 in MCUCR Reg to 1
	SetBit(GICR, INT0);    //set Int0 Enable Reg on
	SetBit(SREG, 7);       //set Int0 in Global Enable Reg on

	ClearBit(DDRD, 2);     //defining the D2 as input
	SetBit(PORTD, 2);      //enabling D2 pullup resistor

	SetBit(DDRB, 3);       //defining the B3 as output
	ClearBit(PORTB, 3);

	while(1){

	}
}

ISR(INT0_vect){

	SetBit(PORTB, 3);       //
	_delay_ms(1000);
	ClearBit(PORTB, 3);       //
}
 */
/*
// int up down to LCD
#include <avr/io.h>
#include <avr/interrupt.h>
#include "utils.h"

u8 NewChar = 0;

void main(void){
	//LCD
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN4, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN5, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN6, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTA, DIO_PIN7, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);

	LCD_vInitialize();

	SetBit(MCUCR, ISC00);  //set bit 0 in MCUCR Reg to 1
	SetBit(MCUCR, ISC01);  //set bit 1 in MCUCR Reg to 1
	SetBit(MCUCR, ISC10);  //set bit 2 in MCUCR Reg to 1
	SetBit(MCUCR, ISC11);  //set bit 3 in MCUCR Reg to 1
	SetBit(GICR, INT0);    //set Int0 Enable Reg on
	SetBit(GICR, INT1);    //set Int1 Enable Reg on
	SetBit(SREG, 7);       //set Int0 in Global Enable Reg on

	ClearBit(DDRD, 2);     //defining the D2 as input
	SetBit(PORTD, 2);      //enabling D2 pullup resistor
	ClearBit(DDRD, 3);     //defining the D3 as input
	SetBit(PORTD, 3);      //enabling D3 pullup resistor


	while(1){
		LCD_vWriteCommand(10000000);
		for(u8 SpaceCounter = 0; SpaceCounter < 7; SpaceCounter++){
			LCD_vWriteData(' ');
			_delay_ms(10);
		}
		LCD_vWriteData(NewChar + '0');
		_delay_ms(500);

	}
}

ISR(INT0_vect){
	NewChar++;
}

ISR(INT1_vect){
	NewChar--;
}
 */
/*
// Switches
void main(void){
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN4, DIO_OUTPUT);
	while(1){
		DIO_vSetPinValue(DIO_PORTB, DIO_PIN3, DIO_HIGH);
		_delay_ms(1000);
		DIO_vSetPinValue(DIO_PORTB, DIO_PIN4, DIO_LOW);
		_delay_ms(500);

		DIO_vSetPinValue(DIO_PORTB, DIO_PIN3, DIO_LOW);
		_delay_ms(1000);

		DIO_vSetPinValue(DIO_PORTB, DIO_PIN4, DIO_HIGH);
		_delay_ms(500);
	}
}
 */

/*
//ADC Potentiometer to LCD "ADC"
void main(void){
	//LCD
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN4, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN5, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN6, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN7, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);

	LCD_vInitialize();
	ADC_vInitialize();

	u16 ADC_READ;
	u16 ADC_READ_ARRAY [4];

	while(1){
		LCD_vWriteCommand(0b10000000);
		ADC_READ = ADC_u16Read();
		for(int i = 0; i <= 3; i++){
			ADC_READ_ARRAY [i] = ADC_READ % 10;
			ADC_READ = ADC_READ / 10;
		}
		for(int i = 3; i >= 0; i--){
			LCD_vWriteData(ADC_READ_ARRAY [i] + '0');
		}
		_delay_ms(500);
	}
}
*/
/*
//ADC Temp Sensor LM-35 to LCD
void main(void){
	//LCD
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN4, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN5, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN6, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN7, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);

	LCD_vInitialize();
	ADC_vInitialize();

	u16 ADC_READ;
	u16 ADC_READ_ARRAY [3];

	while(1){
		LCD_vWriteCommand(0b10000000);
		ADC_READ = ADC_u16Read() / 10;
		for(s8 i = 0; i <= 2; i++){
			ADC_READ_ARRAY [i] = ADC_READ % 10;
			ADC_READ = ADC_READ / 10;
		}
		for(s8 i = 2; i >= 0; i--){
			LCD_vWriteData(ADC_READ_ARRAY [i] + '0');
		}
		_delay_ms(100);
	}
}
*/
//ADC Light Sensor LDR to LCD
void main(void){
	//LCD
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN3, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN4, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN5, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN6, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN7, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);

	DIO_vEnablePullUpResistor(DIO_PORTA, DIO_PIN0);

	LCD_vInitialize();
	ADC_vInitialize();

	u16 ADC_READ;
	u16 ADC_READ_ARRAY [4];

	while(1){
		LCD_vWriteCommand(0b10000000);
		ADC_READ = ADC_u16Read();
		for(int i = 0; i <= 3; i++){
			ADC_READ_ARRAY [i] = ADC_READ % 10;
			ADC_READ = ADC_READ / 10;
		}
		for(int i = 3; i >= 0; i--){
			LCD_vWriteData(ADC_READ_ARRAY [i] + '0');
		}
		_delay_ms(200);
	}
}
/*
    //KEYPAD
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN0, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN1, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN2, DIO_OUTPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN3, DIO_OUTPUT);

	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN4, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN5, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN6, DIO_INPUT);
	DIO_vSetPinDirection(DIO_PORTC, DIO_PIN7, DIO_INPUT);

	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN4);
	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN5);
	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN6);
	DIO_vEnablePullUpResistor(DIO_PORTC, DIO_PIN7);


	 //LCD
	 	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN0, DIO_OUTPUT);
	 	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN1, DIO_OUTPUT);
	 	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN2, DIO_OUTPUT);
	 	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN3, DIO_OUTPUT);
	 	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN4, DIO_OUTPUT);
	 	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN5, DIO_OUTPUT);
	 	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN6, DIO_OUTPUT);
	 	DIO_vSetPinDirection(DIO_PORTD, DIO_PIN7, DIO_OUTPUT);

	 	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN0, DIO_OUTPUT);
	 	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
	 	DIO_vSetPinDirection(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);
 */
