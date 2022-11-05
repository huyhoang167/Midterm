/*
 * software_timer.h
 *
 *  Created on: Nov 4, 2022
 *      Author: Hoang
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;


void setTimer1(int duration);
void setTimer2(int duration);

void timerRun1();
void timerRun2();

void clearTimer1();
void clearTimer2();


#endif /* INC_SOFTWARE_TIMER_H_ */
