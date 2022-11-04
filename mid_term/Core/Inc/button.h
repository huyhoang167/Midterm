/*
 * button.h
 *
 *  Created on: Nov 4, 2022
 *      Author: Hoang
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;
extern int is_double_flag;
void getKeyInput1();
void getKeyInput2();
void getKeyInput3();
void subKeyProcess1();
void subKeyProcess2();
void subKeyProcess3();
int isButtonPressed1();
int isButtonPressed2();
int isButtonPressed3();
void double_click();
int is_double();
#endif /* INC_BUTTON_H_ */
