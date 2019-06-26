#include <avr/io.h>
#include "Datatypes.h"
#include "Dio_Int.h"
#include "Bit_Min.h"


void DIO_vSETPinDirection(u8 PortNumber,u8 PinNumber, u8 Direction)
{
	switch (PortNumber)
	{
	case DIO_PORTA :
		if (Direction == DIO_OUTPUT)
			Set_Bit(DDRA,PinNumber);
		else
			Clr_Bit(DDRA,PinNumber);
		break;
	case DIO_PORTB :
		if (Direction == DIO_OUTPUT)
			Set_Bit(DDRB,PinNumber);
		else
			Clr_Bit(DDRB,PinNumber);
		break;
	case DIO_PORTC :
		if (Direction ==DIO_OUTPUT)
			Set_Bit(DDRC,PinNumber);
		else
			Clr_Bit(DDRC,PinNumber);
		break;
	case DIO_PORTD :
		if (Direction ==DIO_OUTPUT)
			Set_Bit(DDRD,PinNumber);
		else
			Clr_Bit(DDRD,PinNumber);
		break;


	}


}

void DIO_vSetPinValue(u8 PortNumber,u8 PinNumber, u8 Value)
{
	switch (PortNumber)
	{
	case DIO_PORTA :
		if (Value == DIO_HIGH)
			Set_Bit(PORTA,PinNumber);
		else
			Clr_Bit(PORTA,PinNumber);
		break;
	case DIO_PORTB :
		if (Value == DIO_HIGH)
			Set_Bit(PORTB,PinNumber);
		else
			Clr_Bit(PORTB,PinNumber);
		break;
	case DIO_PORTC :
		if (Value == DIO_HIGH)
			Set_Bit(PORTC,PinNumber);
		else
			Clr_Bit(PORTC,PinNumber);
		break;

	case DIO_PORTD :
		if (Value == DIO_HIGH)
			Set_Bit(PORTD,PinNumber);
		else
			Clr_Bit(PORTD,PinNumber);
		break;
	}
}

void DIO_vSetPullUpResistor(u8 PortNumber,u8 PinNumber)
{
	switch (PortNumber)
	{
	case DIO_PORTA :
			Set_Bit(PORTA,PinNumber);
		break;
	case DIO_PORTB :
			Set_Bit(PORTB,PinNumber);
		break;
	case DIO_PORTC :

			Set_Bit(PORTC,PinNumber);
		break;

	case DIO_PORTD :

			Set_Bit(PORTD,PinNumber);
		break;
	}
}



u8 DIO_u8GetPinValue(u8 PortNumber,u8 PinNumber)
{

	switch (PortNumber)
	{
	case DIO_PORTA :
		return  Get_Bit(PINA,PinNumber)  ;
		break;
	case DIO_PORTB :
		return  Get_Bit(PINB,PinNumber)  ;
		break;
	case DIO_PORTC :
		return  Get_Bit(PINC,PinNumber)  ;
		break;
	case DIO_PORTD :
		return  Get_Bit(PIND,PinNumber)  ;
		break;
	}
}

void DIO_vSetPortValue(u8 PortNumber, u8 Data ){
	switch (PortNumber){
	case DIO_PORTA :
		PORTA=Data;
		break;
	case DIO_PORTB :
		PORTA=Data;
		break;
	case DIO_PORTC :
		PORTA=Data;
		break;
	case DIO_PORTD :
		PORTA=Data;
		break;

	}

}

void DIO_vSetPortDirection(u8 PortNumber, u8 Data ){
	switch (PortNumber){
	case DIO_PORTA :
		DDRA=Data;
		break;
	case DIO_PORTB :
		DDRB=Data;
		break;
	case DIO_PORTC :
		DDRC=Data;
		break;
	case DIO_PORTD :
		DDRD=Data;
		break;

	}
}



