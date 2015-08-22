/*
 * keypad.c
 *
 *  Created on: Dec 5, 2014
 *      Author: Manuel Alejandro
 */

#include "keypad.h"

void init_keypad(void)
{
	/* Enable clocks and set muxing */
	SIM_SCGC5 = SIM_SCGC5_PORTC_MASK;
	PORTC_PCR0 = PORT_PCR_MUX(1);
	PORTC_PCR3 = PORT_PCR_MUX(1);
	PORTC_PCR4 = PORT_PCR_MUX(1);
	PORTC_PCR5 = PORT_PCR_MUX(1);
	PORTC_PCR6 = PORT_PCR_MUX(1);
	PORTC_PCR7 = PORT_PCR_MUX(1);
	PORTC_PCR10 = PORT_PCR_MUX(1);
	PORTC_PCR11 = PORT_PCR_MUX(1);
	
	/* Set Pins as outputs (are declared as inputs by default) */
	GPIOC_PDDR |= OUTPUT_MASK;	// Set outputs
}

char key_read(void)
{
	char key = '\0';
	GPIOC_PSOR = OUTPUT_MASK;
	char set = 0;
	
	while(key == '\0')
	{
		GPIOC_PCOR |= 1 << OUTPUT1;
		if(CHECK_PRESS)	// Check if a button has been pressed
		{
			switch(CHECK_PRESS)
			{
				case INPUT1_MASK:
					return key = '1';
				case INPUT2_MASK:
					return key = '2';
				case INPUT3_MASK:
					return key = '3';
				case INPUT4_MASK:
					return key = 'A';
				default:
					break;
			}
		}
		GPIOC_PSOR |= 1 << OUTPUT1;
		
		GPIOC_PCOR |= 1 << OUTPUT2;
		if(CHECK_PRESS)	// Check if a button has been pressed
		{
			switch(CHECK_PRESS)
			{
				case INPUT1_MASK:
					return key = '4';
				case INPUT2_MASK:
					return key = '5';
				case INPUT3_MASK:
					return key = '6';
				case INPUT4_MASK:
					return key = 'B';
				default:
					break;
			}
		}
		GPIOC_PSOR |= 1 << OUTPUT2;
		
		GPIOC_PCOR |= 1 << OUTPUT3;
		if(CHECK_PRESS)	// Check if a button has been pressed
		{
			switch(CHECK_PRESS)
			{
				case INPUT1_MASK:
					return key = '7';
				case INPUT2_MASK:
					return key = '8';
				case INPUT3_MASK:
					return key = '9';
				case INPUT4_MASK:
					return key = 'C';
				default:
					break;
			}
		}
		GPIOC_PSOR |= 1 << OUTPUT3;
		
		GPIOC_PCOR |= 1 << OUTPUT4;
		if(CHECK_PRESS)	// Check if a button has been pressed
		{
			switch(CHECK_PRESS)
			{
				case INPUT1_MASK:
					return key = '*';
				case INPUT2_MASK:
					return key = '0';
				case INPUT3_MASK:
					return key = '#';
				case INPUT4_MASK:
					return key = 'D';
				default:
					break;
			}
		}
		GPIOC_PSOR |= 1 << OUTPUT4;
	}
	
	return key = '\0';
}

