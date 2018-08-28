#include "led.h"
#include "delay.h"
#include "sys.h"
#include "key.h"
#include "exti.h"
#include "timer.h"
char right_flag;
char left_flag;
#define delay_time 500
#define step_counter 2800
void motor_func(int delay_t)//����ٶȿ���
{
	GPIO_SetBits(GPIOC,GPIO_Pin_1);
	delay_us(delay_t);
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);
	delay_us(delay_t);
}
int main(void)
 {	
	int counter=0;
	left_flag=0;
	right_flag=0;
	delay_init();	    //��ʱ������ʼ��	  
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	KEY_Init();				//������ʼ��
	EXTIX_Init();
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);	 
 	GPIO_ResetBits(GPIOC,GPIO_Pin_5); 	//���ʹ�ܶ�	
	GPIO_ResetBits(GPIOC,GPIO_Pin_4); // ���������ƣ�Ĭ��Ϊ����
	while(1)
	{
		if(right_flag)
		{
            GPIO_SetBits(GPIOC,GPIO_Pin_4); // ����������
			while(counter++<=step_counter)
            {
                right_flag=0;
                motor_func(delay_time);
            }
            if(counter>=step_counter)
            {
                counter=0;  
            }
		}
		if(left_flag)
		{
            GPIO_ResetBits(GPIOC,GPIO_Pin_4); // ���������ƣ�Ĭ��Ϊ����
			while(counter++<=step_counter)
            {
                left_flag=0;
                motor_func(delay_time);
               
            }
            if(counter>=step_counter)
            {
                counter=0;
               
            }
		}
	}
 }
void EXTI0_IRQHandler(void)  //��ת1CM
{
	delay_ms(10);//����
	if((EXTI_GetITStatus(EXTI_Line0)!=RESET)&&(WK_UP==1))  
	{		
		left_flag=1;
	}
    EXTI_ClearITPendingBit(EXTI_Line0);
}
void EXTI15_10_IRQHandler()//��ת1CM
{
	delay_ms(10);
	if((EXTI_GetITStatus(EXTI_Line15)!=RESET)&&(KEY1==0)) 
	{
		right_flag=1;
    
	}
    EXTI_ClearITPendingBit(EXTI_Line15);
}
