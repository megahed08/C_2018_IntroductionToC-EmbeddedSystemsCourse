
#include "DataTypes.h"
#include "utils.h"
#include "DIO_Int.h"
#include <avr/io.h>

// Set Keypad buttons
u8 KEYPAD_Array[4][4] = {{1, 2, 3, '/'}, {4, 5, 6, '-'}, {7, 8, 9, '.'}, {'+', 0, '*', '='}};

// Read Keypad Clicks
u8 KEYPAD_u8Read(void){
	u8 KEYPAD_Rows;
	u8 KEYPAD_Columns;

	//Fill PortD 1111
	SetBit(PORTD, 0);
	SetBit(PORTD, 1);
	SetBit(PORTD, 2);
	SetBit(PORTD, 3);

    for (u8 Counter_R = 0; Counter_R < 4; Counter_R++){  // loop on Rows
    	ClearBit(PORTD, Counter_R);    // Clear bit number "Row Counter" to start searching
    	for(u8 Counter_C = 0; Counter_C < 4; Counter_C++){ // loop on columns
    		if(GetBit(PINC, Counter_C) == 0){ // when read '0' then this button is pressed
    			while(GetBit(PINC, Counter_C) == 0);  // a loop to stabilize the clock when clicking
    			return KEYPAD_Array[Counter_R][Counter_C]; // return the clicked button
    		}
    	}
    	SetBit(PORTD, Counter_R);     // set the bit  "Row Counter" again to 1 after searching
    }
}
