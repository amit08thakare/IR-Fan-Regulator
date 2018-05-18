/*
 * PWM.h
 *
 *  Created on: May 18, 2018
 *      Author: DELL
 */

#ifndef PWM_H_
#define PWM_H_

void PWM_Init();


typedef enum FanSpeed_t
		{
			SPEED_1,
			SPEED_2,
			SPEED_3,
			SPEED_4,
			SPEED_5
		}FanSpeed_t;

#endif /* PWM_H_ */
