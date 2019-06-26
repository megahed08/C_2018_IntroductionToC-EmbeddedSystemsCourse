/*
 * main.c
 *
 *  Created on: Feb 23, 2018
 *      Author: megah
 */
#define F_CPU 8000000
#include <avr/io.h>
#include <avr/delay.h>

void main(void){

// Initializations
    DDRA = 0x01;

    while(1){
		PORTA = 0x01;
		_delay_ms(1000);
		PORTA = 0x00;
		_delay_ms(1000);
	}
}
