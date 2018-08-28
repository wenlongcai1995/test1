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
void motor_func(int delay_t)//电机速度控制
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
	delay_init();	    //延时函数初始化	  
	LED_Init();		  	//初始化与LED连接的硬件接口
	KEY_Init();				//按键初始化
	EXTIX_Init();
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);	 
 	GPIO_ResetBits(GPIOC,GPIO_Pin_5); 	//电机使能端	
	GPIO_ResetBits(GPIOC,GPIO_Pin_4); // 电机方向控制，默认为正向
	while(1)
	{
		if(right_flag)
		{
            GPIO_SetBits(GPIOC,GPIO_Pin_4); // 电机方向控制
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
            GPIO_ResetBits(GPIOC,GPIO_Pin_4); // 电机方向控制，默认为正向
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
void EXTI0_IRQHandler(void)  //左转1CM
{
	delay_ms(10);//消抖
	if((EXTI_GetITStatus(EXTI_Line0)!=RESET)&&(WK_UP==1))  
	{		
		left_flag=1;
	}
    EXTI_ClearITPendingBit(EXTI_Line0);
}
void EXTI15_10_IRQHandler()//右转1CM
{
	delay_ms(10);
	if((EXTI_GetITStatus(EXTI_Line15)!=RESET)&&(KEY1==0)) 
	{
		right_flag=1;
    
	}
    EXTI_ClearITPendingBit(EXTI_Line15);
}
