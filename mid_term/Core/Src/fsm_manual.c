/*
 * fsm_manual.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Hoang
 */
#include "fsm_manual.h"
/*
int count1 = 0;
int  index_led1 = 0;
int led_buffer1[4];
void updateClockBuffer1(int second1, int second2){
	  int a = second1%10;
	  second1 = second1/10;
	  led_buffer1[0]= second1;
	  led_buffer1[1] = a;
	  int b = second2%10;
	  second2 = second2/10;
	  led_buffer1[2]= second2;
	  led_buffer1[3] = b;
}
void Display7SEG1(int count){
	switch (count) {
		case 0:
			HAL_GPIO_WritePin(SEG1_a_GPIO_Port, SEG1_a_Pin, 0);
			HAL_GPIO_WritePin(SEG1_b_GPIO_Port, SEG1_b_Pin, 0);
			HAL_GPIO_WritePin(SEG1_c_GPIO_Port, SEG1_c_Pin, 0);
			HAL_GPIO_WritePin(SEG1_d_GPIO_Port, SEG1_d_Pin, 0);
			HAL_GPIO_WritePin(SEG1_e_GPIO_Port, SEG1_e_Pin, 0);
			HAL_GPIO_WritePin(SEG1_f_GPIO_Port, SEG1_f_Pin, 0);
			HAL_GPIO_WritePin(SEG1_g_GPIO_Port, SEG1_g_Pin, 1);
			break;
		case 1:
				HAL_GPIO_WritePin(SEG1_a_GPIO_Port, SEG1_a_Pin, 1);
				HAL_GPIO_WritePin(SEG1_b_GPIO_Port, SEG1_b_Pin, 0);
				HAL_GPIO_WritePin(SEG1_c_GPIO_Port, SEG1_c_Pin, 0);
				HAL_GPIO_WritePin(SEG1_d_GPIO_Port, SEG1_d_Pin, 1);
				HAL_GPIO_WritePin(SEG1_e_GPIO_Port, SEG1_e_Pin, 1);
				HAL_GPIO_WritePin(SEG1_f_GPIO_Port, SEG1_f_Pin, 1);
				HAL_GPIO_WritePin(SEG1_g_GPIO_Port, SEG1_g_Pin, 1);
				break;
		case 2:
				HAL_GPIO_WritePin(SEG1_a_GPIO_Port, SEG1_a_Pin, 0);
				HAL_GPIO_WritePin(SEG1_b_GPIO_Port, SEG1_b_Pin, 0);
				HAL_GPIO_WritePin(SEG1_c_GPIO_Port, SEG1_c_Pin, 1);
				HAL_GPIO_WritePin(SEG1_d_GPIO_Port, SEG1_d_Pin, 0);
				HAL_GPIO_WritePin(SEG1_e_GPIO_Port, SEG1_e_Pin, 0);
				HAL_GPIO_WritePin(SEG1_f_GPIO_Port, SEG1_f_Pin, 1);
				HAL_GPIO_WritePin(SEG1_g_GPIO_Port, SEG1_g_Pin, 0);
				break;
		case 3:
				HAL_GPIO_WritePin(SEG1_a_GPIO_Port, SEG1_a_Pin, 0);
				HAL_GPIO_WritePin(SEG1_b_GPIO_Port, SEG1_b_Pin, 0);
				HAL_GPIO_WritePin(SEG1_c_GPIO_Port, SEG1_c_Pin, 0);
				HAL_GPIO_WritePin(SEG1_d_GPIO_Port, SEG1_d_Pin, 0);
				HAL_GPIO_WritePin(SEG1_e_GPIO_Port, SEG1_e_Pin, 1);
				HAL_GPIO_WritePin(SEG1_f_GPIO_Port, SEG1_f_Pin, 1);
				HAL_GPIO_WritePin(SEG1_g_GPIO_Port, SEG1_g_Pin, 0);
				break;
		case 4:
				HAL_GPIO_WritePin(SEG1_a_GPIO_Port, SEG1_a_Pin, 1);
				HAL_GPIO_WritePin(SEG1_b_GPIO_Port, SEG1_b_Pin, 0);
				HAL_GPIO_WritePin(SEG1_c_GPIO_Port, SEG1_c_Pin, 0);
				HAL_GPIO_WritePin(SEG1_d_GPIO_Port, SEG1_d_Pin, 1);
				HAL_GPIO_WritePin(SEG1_e_GPIO_Port, SEG1_e_Pin, 1);
				HAL_GPIO_WritePin(SEG1_f_GPIO_Port, SEG1_f_Pin, 0);
				HAL_GPIO_WritePin(SEG1_g_GPIO_Port, SEG1_g_Pin, 0);
				break;
		case 5:
				HAL_GPIO_WritePin(SEG1_a_GPIO_Port, SEG1_a_Pin, 0);
				HAL_GPIO_WritePin(SEG1_b_GPIO_Port, SEG1_b_Pin, 1);
				HAL_GPIO_WritePin(SEG1_c_GPIO_Port, SEG1_c_Pin, 0);
				HAL_GPIO_WritePin(SEG1_d_GPIO_Port, SEG1_d_Pin, 0);
				HAL_GPIO_WritePin(SEG1_e_GPIO_Port, SEG1_e_Pin, 1);
				HAL_GPIO_WritePin(SEG1_f_GPIO_Port, SEG1_f_Pin, 0);
				HAL_GPIO_WritePin(SEG1_g_GPIO_Port, SEG1_g_Pin, 0);
				break;
		case 6:
				HAL_GPIO_WritePin(SEG1_a_GPIO_Port, SEG1_a_Pin, 0);
				HAL_GPIO_WritePin(SEG1_b_GPIO_Port, SEG1_b_Pin, 1);
				HAL_GPIO_WritePin(SEG1_c_GPIO_Port, SEG1_c_Pin, 0);
				HAL_GPIO_WritePin(SEG1_d_GPIO_Port, SEG1_d_Pin, 0);
				HAL_GPIO_WritePin(SEG1_e_GPIO_Port, SEG1_e_Pin, 0);
				HAL_GPIO_WritePin(SEG1_f_GPIO_Port, SEG1_f_Pin, 0);
				HAL_GPIO_WritePin(SEG1_g_GPIO_Port, SEG1_g_Pin, 0);
				break;
		case 7:
				HAL_GPIO_WritePin(SEG1_a_GPIO_Port, SEG1_a_Pin, 0);
				HAL_GPIO_WritePin(SEG1_b_GPIO_Port, SEG1_b_Pin, 0);
				HAL_GPIO_WritePin(SEG1_c_GPIO_Port, SEG1_c_Pin, 0);
				HAL_GPIO_WritePin(SEG1_d_GPIO_Port, SEG1_d_Pin, 1);
				HAL_GPIO_WritePin(SEG1_e_GPIO_Port, SEG1_e_Pin, 1);
				HAL_GPIO_WritePin(SEG1_f_GPIO_Port, SEG1_f_Pin, 1);
				HAL_GPIO_WritePin(SEG1_g_GPIO_Port, SEG1_g_Pin, 1);
				break;
		case 8:
				HAL_GPIO_WritePin(SEG1_a_GPIO_Port, SEG1_a_Pin, 0);
				HAL_GPIO_WritePin(SEG1_b_GPIO_Port, SEG1_b_Pin, 0);
				HAL_GPIO_WritePin(SEG1_c_GPIO_Port, SEG1_c_Pin, 0);
				HAL_GPIO_WritePin(SEG1_d_GPIO_Port, SEG1_d_Pin, 0);
				HAL_GPIO_WritePin(SEG1_e_GPIO_Port, SEG1_e_Pin, 0);
				HAL_GPIO_WritePin(SEG1_f_GPIO_Port, SEG1_f_Pin, 0);
				HAL_GPIO_WritePin(SEG1_g_GPIO_Port, SEG1_g_Pin, 0);
				break;
		case 9:
				HAL_GPIO_WritePin(SEG1_a_GPIO_Port, SEG1_a_Pin, 0);
				HAL_GPIO_WritePin(SEG1_b_GPIO_Port, SEG1_b_Pin, 0);
				HAL_GPIO_WritePin(SEG1_c_GPIO_Port, SEG1_c_Pin, 0);
				HAL_GPIO_WritePin(SEG1_d_GPIO_Port, SEG1_d_Pin, 0);
				HAL_GPIO_WritePin(SEG1_e_GPIO_Port, SEG1_e_Pin, 1);
				HAL_GPIO_WritePin(SEG1_f_GPIO_Port, SEG1_f_Pin, 0);
				HAL_GPIO_WritePin(SEG1_g_GPIO_Port, SEG1_g_Pin, 0);
				break;
		default:
			break;
	}
}
void update7SEG1 (int index) {
   switch (index) {
     case 0:
       // Display the first 7 SEG with led_buffer [0]
  	  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,0);
  	  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,1);
	  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,1);
	  HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin,1);
       Display7SEG1(led_buffer1[index]);
       break ;
     case 1:
       // Display the second 7 SEG with led_buffer [1]
       HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,1);
       HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,0);
       HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,1);
       HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin,1);
       Display7SEG1(led_buffer1[index]);
       break ;
     case 2:
       // Display the third 7 SEG with led_buffer [2]
    	 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,1);
    	 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,1);
    	 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,0);
    	 HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin,1);
       Display7SEG1(led_buffer1[index]);
       break ;
     case 3:
       // Display the forth 7 SEG with led_buffer [3]
    	 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,1);
    	  	 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,1);
    		 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,1);
    		 HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin,0);
       index_led1 = 0;
       Display7SEG1(led_buffer1[index]);
       break ;
     default :
       break ;
   }
}
void fsm_manual_run(){
	switch (status) {
		case INIT1:
		    break;
		case NORMAL_MODE:
			    status = INIT2;
			break;
		case RED_MODE:
			status = YELLOW_MODE;
		    break;
		case YELLOW_MODE:
			status = GREEN_MODE;
			break;
		case GREEN_MODE:
			status = NORMAL_MODE;
			break;
		default:
			break;
	}
}

*/
