/*
 * DIO_Prog.c
 *
 *  Created on: Feb 24, 2018
 *      Author: megah
 */
#include <avr/io.h>
#include "DataTypes.h"
#include "DIO_Int.h"
#include "utils.h"

void DIO_vSetPinDirection(u8 PortNumber, u8 PinNumber, u8 Direction){
	switch(PortNumber){
	case DIO_PORTA:
		if(Direction == DIO_INPUT){
			ClearBit(DDRA, PinNumber);
		}else{
			SetBit(DDRA, PinNumber);
		}
		break;
	case DIO_PORTB:
		if(Direction == DIO_INPUT){
			ClearBit(DDRB, PinNumber);
		}else{
			SetBit(DDRB, PinNumber);
		}
		break;
	case DIO_PORTC:
		if(Direction == DIO_INPUT){
			ClearBit(DDRC, PinNumber);
		}else{
			SetBit(DDRC, PinNumber);
		}
		break;
	case DIO_PORTD:
		if(Direction == DIO_INPUT){
			ClearBit(DDRD, PinNumber);
		}else{
			SetBit(DDRD, PinNumber);
		}
		break;
	}
}

void DIO_vSetPinValue(u8 PortNumber, u8 PinNumber, u8 Value){
	switch(PortNumber){
	case DIO_PORTA:
		if(Value == DIO_LOW){
			ClearBit(PORTA, PinNumber);
		}else{
			SetBit(PORTA, PinNumber);
		}
		break;
	case DIO_PORTB:
		if(Value == DIO_LOW){
			ClearBit(PORTB, PinNumber);
		}else{
			SetBit(PORTB, PinNumber);
		}
		break;
	case DIO_PORTC:
		if(Value == DIO_LOW){
			ClearBit(PORTC, PinNumber);
		}else{
			SetBit(PORTC, PinNumber);
		}
		break;
	case DIO_PORTD:
		if(Value == DIO_LOW){
			ClearBit(PORTD, PinNumber);
		}else{
			SetBit(PORTD, PinNumber);
		}
		break;
	}
}

u8 DIO_u8GetPinValue(u8 PortNumber, u8 PinNumber){
	switch(PortNumber){
	case DIO_PORTA:
		return (u8) GetBit(PINA, PinNumber);
	case DIO_PORTB:
		return (u8 )GetBit(PINB, PinNumber);
	case DIO_PORTC:
		return (u8) GetBit(PINC, PinNumber);
	case DIO_PORTD:
		return (u8) GetBit(PIND, PinNumber);
	}
}

void DIO_vEnablePullUpResistor(u8 PortNumber, u8 PinNumber){
	switch(PortNumber){
	case DIO_PORTA:
		SetBit(PORTA, PinNumber);
		break;
	case DIO_PORTB:
		SetBit(PORTB, PinNumber);
		break;

	case DIO_PORTC:
		SetBit(PORTC, PinNumber);
		break;
	case DIO_PORTD:
		SetBit(PORTD, PinNumber);
		break;
	}
}


