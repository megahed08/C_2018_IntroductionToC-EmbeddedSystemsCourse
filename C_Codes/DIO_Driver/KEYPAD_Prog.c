
#include "DataTypes.h"
#include "DIO_Int.h"
#include "KEYPAD_Config.h"

// Read Keypad Clicks
u8 KEYPAD_u8Read(void){
	//Set KEYPAD_PORT_C Pins to '1'
	DIO_vSetPinValue(KEYPAD_PORT_C, KEYPAD_C0, DIO_HIGH);
	DIO_vSetPinValue(KEYPAD_PORT_C, KEYPAD_C1, DIO_HIGH);
	DIO_vSetPinValue(KEYPAD_PORT_C, KEYPAD_C2, DIO_HIGH);
	DIO_vSetPinValue(KEYPAD_PORT_C, KEYPAD_C3, DIO_HIGH);

	for (u8 Counter_R = 0; Counter_R < 4; Counter_R++){      // loop on Rows
		DIO_vSetPinValue(KEYPAD_PORT_C, Counter_R, DIO_LOW); // Clear bit number "Row Counter"
		for(u8 Counter_C = 0; Counter_C < 4; Counter_C++){   // loop on columns
			switch(Counter_C){
			case 0:
				if(DIO_u8GetPinValue(KEYPAD_PORT_R, KEYPAD_R0) == 0){
					while(DIO_u8GetPinValue(KEYPAD_PORT_R, KEYPAD_R0) == 0); // Click stabilizer
					return KEYPAD_Array[Counter_R][Counter_C];   // return the clicked button
				}
				break;
			case 1:
				if(DIO_u8GetPinValue(KEYPAD_PORT_R, KEYPAD_R1) == 0){
					while(DIO_u8GetPinValue(KEYPAD_PORT_R, KEYPAD_R1) == 0);
					return KEYPAD_Array[Counter_R][Counter_C];
				}
				break;
			case 2:
				if(DIO_u8GetPinValue(KEYPAD_PORT_R, KEYPAD_R2) == 0){
					while(DIO_u8GetPinValue(KEYPAD_PORT_R, KEYPAD_R2) == 0);
					return KEYPAD_Array[Counter_R][Counter_C];
				}
				break;
			case 3:
				if(DIO_u8GetPinValue(KEYPAD_PORT_R, KEYPAD_R3) == 0){
					while(DIO_u8GetPinValue(KEYPAD_PORT_R, KEYPAD_R3) == 0);
					return KEYPAD_Array[Counter_R][Counter_C];
				}
				break;
			}
		}
		DIO_vSetPinValue(KEYPAD_PORT_C, Counter_R, DIO_HIGH); // set the bit  "Row Counter"
	}
	return 100;
}
