/*
 * main.c
 *
 *  Created on: Feb 26, 2018
 *      Author: Safory
 */
#include<avr/io.h>
#include<avr/delay.h>
#include "LCD_interface.h"
#include "Dio_interface.h"
#include"datatypes.h"

#include "macro.h"

void main(void)
{
 // Initialization
   DDRA = 0xFF;
   DDRB = 0xFF;
  LCD_vInitialize();

 while(1){

	 LCD_vWriteData('A');
	 _delay_ms(1000);

 }
}



