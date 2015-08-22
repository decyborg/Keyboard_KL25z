/*
 * keypad.h
 *
 *  Created on: Dec 5, 2014
 *      Author: Manuel Alejandro
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_
/*
 *  PTC11 - OUTPUT 1
 *  PTC10 - OUTPUT 2
 *  PTC6  - OUTPUT 3
 *  PTC5  - OUTPUT 4
 *  PTC4  - INPUT 1
 *  PTC3  - INPUT 2
 *  PTC0  - INPUT 3
 *  PTC7  - INPUT 4
 *  
 * */

#include "derivative.h"

/* Reading pins keypad */
#define INPUT1 4	// PTC4
#define INPUT2 3	// PTC3
#define INPUT3 0	// PTC0
#define INPUT4 7	// PTC7

/* Driving  pins keypad */
#define OUTPUT1 11 // PTC11
#define OUTPUT2 10 // PTC10
#define OUTPUT3 6  // PTC6
#define OUTPUT4 5  // PTC5

/* MASKS */
#define OUTPUT_MASK ((1 << OUTPUT1)|(1 << OUTPUT2)|(1 << OUTPUT3)|(1 << OUTPUT4))
#define INPUT_MASK ((1 << INPUT1)|(1 << INPUT2)|(1 << INPUT3)|(1 << INPUT4))
#define INPUT1_MASK (1 << INPUT1)
#define INPUT2_MASK (1 << INPUT2)
#define INPUT3_MASK (1 << INPUT3)
#define INPUT4_MASK (1 << INPUT4)
#define CHECK_PRESS ~(GPIOC_PDIR & INPUT_MASK) & INPUT_MASK

/* Prototypes */
void init_keypad(void);
char key_read(void);


#endif /* KEYPAD_H_ */
