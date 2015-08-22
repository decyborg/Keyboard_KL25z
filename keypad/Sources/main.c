/*
 * main implementation: use this 'C' sample to create your own application
 *
 */





#include "derivative.h" /* include peripheral declarations */
#include "keypad.h"


int main(void)
{
	char key = 0;
	init_keypad();
	
	
	
	for(;;) {	   
	   	key = key_read();
	   	if(key)
	   		key = 0;
	}
	
	return 0;
}
