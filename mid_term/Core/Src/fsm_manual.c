/*
 * fsm_manual.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Hoang
 */
#include "fsm_manual.h"

// Hien thi counter len LED 7 doan
void Display7SEG1(int count){
	switch (count) {
		case 0:
			HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
			HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
			HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
			HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
			HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 0);
			HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
			HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 1);
			break;
		case 1:
				HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 1);
				HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
				HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
				HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 1);
				HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
				HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 1);
				HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 1);
				break;
		case 2:
				HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
				HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
				HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 1);
				HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
				HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 0);
				HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 1);
				HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
				break;
		case 3:
				HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
				HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
				HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
				HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
				HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
				HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 1);
				HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
				break;
		case 4:
				HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 1);
				HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
				HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
				HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 1);
				HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
				HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
				HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
				break;
		case 5:
				HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
				HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 1);
				HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
				HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
				HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
				HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
				HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
				break;
		case 6:
				HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
				HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 1);
				HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
				HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
				HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 0);
				HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
				HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
				break;
		case 7:
				HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
				HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
				HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
				HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 1);
				HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
				HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 1);
				HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 1);
				break;
		case 8:
				HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
				HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
				HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
				HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
				HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 0);
				HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
				HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
				break;
		case 9:
				HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
				HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
				HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
				HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
				HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
				HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
				HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
				break;
		default:
			break;
	}
}
// Kiem tra nhan de cho nut INC va thuc hien cong counter
void press_hold_INC(){
	if (isButtonHold2() == 1){
		index_led1++;
		if (index_led1 > 9){
			index_led1 = 0;
		}
		Display7SEG1(index_led1);
	}
}
// Kiem tra nhan de cho nut DEC va thuc hien tru counter
void press_hold_DEC(){
	if (isButtonHold3() == 1){
		index_led1--;
		if (index_led1 < 0){
			index_led1 = 9;
		 }
		Display7SEG1(index_led1);
	}
}
// Kiem tra de chuyen sang trang thai waiting
void check_waiting(){
	if (isButtonPressed1() == 0 && isButtonPressed2() == 0 && isButtonPressed3() == 0){
		setTimer1(1000);
		prev_index = index_led1;
		status = WAITING;
	}
}
// Tang counter
void increase_count(){
	index_led1++;
	if (index_led1 > 9){
		index_led1 = 0;
	}
	Display7SEG1(index_led1);
}
// Giam counter
void decrease_count(){
	index_led1--;
    if (index_led1 < 0){
    	index_led1 = 9;
    }
    Display7SEG1(index_led1);
}
// Giam count o trang thai khong nhan
void decrease_count_waiting(){
	index_led1--;
    if (index_led1 < 0){
    	index_led1 = 0;
    }
    Display7SEG1(index_led1);
}
// May trang thai
void fsm_simple_buttons_run(){
	switch (status) {
		case INIT:
			status = RESET_MODE;
		    break;
		case RESET_MODE:
		    index_led1 = 0; // reset count = 0
		    Display7SEG1(index_led1);
		    if (isButtonPressed2() == 1){
		    	// Khi nut INC duoc nhan
		    	increase_count();
		    	status = INC;
				setTimer1(1000);
		    }
			if (isButtonPressed3() == 1){
				// Khi nut DEC duoc nhan
		    	decrease_count();
				status = DEC;
				setTimer1(1000); // SetTimer dem thoi gian 10s ve ban dau
			}
			break;
		case INC:
			if (timer1_flag == 1){ // Chuyen sang trang thai cho
				status = WAITING;
				prev_index = index_led1;
			}
			press_hold_INC(); // Nhan de nut INC
		    if (isButtonPressed2() == 1){
		    	increase_count();
				setTimer1(1000);
		    }
			if (isButtonPressed1() == 1){
				status = RESET_MODE;
				setTimer1(1000);
			}
			if (isButtonPressed3() == 1){
		    	decrease_count();
				status = DEC;
				setTimer1(1000);
			}

		    break;
		case DEC:
			if (timer1_flag == 1){
				status = WAITING;
				prev_index = index_led1;
			}
			press_hold_DEC(); // Nhan de nut DEC
		    if (isButtonPressed3() == 1){
		    	decrease_count();
				setTimer1(1000);
		    }
			if (isButtonPressed1() == 1){
				status = RESET_MODE;
				setTimer1(1000);
			}
			if (isButtonPressed2() == 1){
		    	increase_count();
				status = INC;
				setTimer1(1000);
			}

			break;
		case WAITING:
			 if (timer1_flag == 1){
				decrease_count_waiting(); //Giam counter
				setTimer1(100); // Set thoi gian 1s
			 }
			 // Khi INC hoac DEC duoc nhan thi chuyen sang status = INC
			if (isButtonPressed2() == 1){
				index_led1 = prev_index;
				Display7SEG1(index_led1);
				status = INC;
				setTimer1(1000);
			}
			if (isButtonPressed3() == 1){
				index_led1 = prev_index;
				Display7SEG1(index_led1);
				status = INC;
				setTimer1(1000);
			}
			break;
		default:
			break;
	}
}

