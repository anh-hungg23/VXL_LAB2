/*
 * sw_timer.h
 *
 *  Created on: Oct 16, 2025
 *      Author: anh_hungg23
 */

#ifndef INC_SW_TIMER_H_
#define INC_SW_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();


#endif /* INC_SW_TIMER_H_ */
