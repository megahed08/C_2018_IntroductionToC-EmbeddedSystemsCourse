/*
 * DIO_Reg.h
 *
 *  Created on: Mar 9, 2018
 *      Author: megah
 */

#ifndef DIO_REG_H_
#define DIO_REG_H_

#define DDRA (*((u8*) 0x3A))
#define DDRB (*((u8*) 0x37))
#define DDRC (*((u8*) 0x34))
#define DDRD (*((u8*) 0x31))

#define PORTA (*((u8*) 0x3B))
#define PORTB (*((u8*) 0x38))
#define PORTC (*((u8*) 0x35))
#define PORTD (*((u8*) 0x32))

#define PINA (*((u8*) 0x39))
#define PINB (*((u8*) 0x36))
#define PINC (*((u8*) 0x33))
#define PIND (*((u8*) 0x30))

#define MCUCR (*((u8*) 0x55))

#endif /* DIO_REG_H_ */
