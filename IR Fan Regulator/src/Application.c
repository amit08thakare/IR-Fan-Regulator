/*
 * Application.c
 *
 *  Created on: May 18, 2018
 *      Author: DELL
 */

#include <stdio.h>
#include <avr/io.h>
#include "PWM.h"
#include "types.h"

int main()
{
	uint8 InputSpeed;

	while(1)
	{
		switch(InputSpeed)
		{
			case SPEED_1:
			{
				PWM_Config(SPEED_1);
				break;
			}
			case SPEED_2:
			{
				PWM_Config(SPEED_2);
				break;
			}
			case SPEED_3:
			{
				PWM_Config(SPEED_3);
				break;
			}
			case SPEED_4:
			{
				PWM_Config(SPEED_4);
				break;
			}
			case SPEED_5:
			{
				PWM_Config(SPEED_5);
				break;
			}
			default:
			{
				/* Invalid Speed */
			}
		}
	}

	return 0;
}


