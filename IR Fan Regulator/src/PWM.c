/*
 * PWM.c
 *
 *  Created on: May 18, 2018
 *      Author: DELL
 */

#include <avr/io.h>
#include "PWM.h"

void PWM_Config(FanSpeed_t Speed)
{
	/*Enable R/W on PORTD.5 Pin*/
	DDRD |= (1 << DDD5);

	/*Set 50% duty cycle */
	OCR2 = Speed;
	/* Fast PWM Mode, Non Inverting */
	TCCR2 |= (1 << WGM21) | (1 << WGM20) | (1 << COM21);
	/* Set prescaler to 8, start PWM */
	TCCR2 |= (1 << CS21);

}


