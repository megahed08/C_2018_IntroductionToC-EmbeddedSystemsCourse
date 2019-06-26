#include <avr/io.h>
#include <avr/interrupt.h>
#include "DataTypes.h"
#include "utils.h"
#include "ADC_Int.h"
#define ADC_STEPSIZE (5000/1024)

void ADC_vInitialize(){
	SetBit(ADMUX, REFS0);
	ClearBit(ADMUX, REFS1);
	SetBit(ADMUX, ADLAR);
	ClearBit(ADMUX, MUX0);
	ClearBit(ADMUX, MUX1);
	ClearBit(ADMUX, MUX2);
	ClearBit(ADMUX, MUX3);
	ClearBit(ADMUX, MUX4);

	SetBit(ADCSRA, ADEN);
	ClearBit(ADCSRA, ADATE);
	ClearBit(ADCSRA, ADIE);
	SetBit(ADCSRA, ADPS0);
	SetBit(ADCSRA, ADPS1);
	SetBit(ADCSRA, ADPS2);
}

u16 ADC_u16Read(){
	SetBit(ADCSRA, ADSC);
	while(GetBit(ADCSRA, ADSC) == 1);
	return 	((((u16) ADCH) << 2) *ADC_STEPSIZE);
}
