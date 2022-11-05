/*
 * button.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Hoang
 */

#include"button.h"
//Cac bien chua trang thai cho nut nhan RESET
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;
// Cac bien chua trang thai cho nut nhan INC
int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;
// Cac bien chua trang thai cho nut nhan DEC
int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
// flag cho kiem tra nhan don cua 3 nut nhan
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;
// flag cho viec nhan giu cua nut INC va DEC
int button2_flag_for_hold = 0;
int button3_flag_for_hold = 0;
// Cac bien thoi gian giu nut
int TimeOutForKeyPress1 =  100;
int TimeOutForKeyPress2 =  300;
int TimeOutForKeyPress3 =  300;
void subKeyProcess1(){
	button1_flag = 1;
}
void subKeyProcess2(){
	button2_flag = 1;
}
void subKeyProcess3(){
	button3_flag = 1;
}
// Kiem tra nut RESET co duoc nhan
int isButtonPressed1(){
	if (button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}
// Kiem tra nut INC co duoc nhan
int isButtonPressed2(){
	if (button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}
// Kiem tra nut DEC co duoc nhan
int isButtonPressed3(){
	if (button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}
// Kiem tra nut INC co duoc nhan de
int isButtonHold2(){
	if (button2_flag_for_hold == 1){
		button2_flag_for_hold = 0;
		return 1;
	}
	return 0;
}
// Kiem tra nut DEC co duoc nhan de
int isButtonHold3(){
	if (button3_flag_for_hold == 1){
		button3_flag_for_hold = 0;
		return 1;
	}
	return 0;
}
// Thu thap trang thai nut nhan
void getKeyInput2(){
  KeyReg6 = KeyReg5;
  KeyReg5 = KeyReg4;
  KeyReg4 = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
  if ((KeyReg5 == KeyReg4) && (KeyReg5 == KeyReg6)){
    if (KeyReg6 != KeyReg7){
      KeyReg7 = KeyReg6;

      if (KeyReg7 == PRESSED_STATE){
        TimeOutForKeyPress2 = 300; // Gan thoi gian 3s
        subKeyProcess2();
      }
    }else{
       TimeOutForKeyPress2 --;
        if (TimeOutForKeyPress2 == 0){
        	if (KeyReg4 == NORMAL_STATE){
        		KeyReg7 = KeyReg4;
        		button2_flag_for_hold = 0;
        	}
        	else{
            button2_flag_for_hold = 1;
        	}
        	// Gan thoi gian 1s cho viec xet flag nhan giu
            TimeOutForKeyPress2 = 100;
        }
    }
  }
}
void getKeyInput1(){
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(RESET_GPIO_Port, RESET_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress1 = 100;
        subKeyProcess1();
      }
    }else{
       TimeOutForKeyPress1 --;
        if (TimeOutForKeyPress1 == 0){
          KeyReg3 = NORMAL_STATE;
        }
    }
  }
}
void getKeyInput3(){
  KeyReg10 = KeyReg9;
  KeyReg9 = KeyReg8;
  KeyReg8 = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);
  if ((KeyReg9 == KeyReg8) && (KeyReg9 == KeyReg10)){
    if (KeyReg10 != KeyReg11){
      KeyReg11 = KeyReg10;

      if (KeyReg11 == PRESSED_STATE){
        TimeOutForKeyPress3 = 300;
        subKeyProcess3();
      }
    }else{
       TimeOutForKeyPress3 --;
        if (TimeOutForKeyPress3 == 0){
        	if (KeyReg8 == NORMAL_STATE){
        		KeyReg11 = KeyReg9;
        		button3_flag_for_hold = 0;
        	}
        	else{
            button3_flag_for_hold = 1;
        	}
            TimeOutForKeyPress3 = 100;

        }
    }
  }
}






