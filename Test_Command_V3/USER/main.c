#include "stm32f10x.h"
#include "GPIO.h"
#include "delay.h"
#include "sys.h"
#include "timer.h"
#include "HandShake.h"
#include "Forward.h"
#include "key.h"
#include "exti.h"
#include "back.h"
typedef enum{TRUE=1,FALSE=0}bool;
char forward_flag,back_flag;
int main(void)
{	   
    forward_flag=0;
    back_flag=0;
	delay_init();
    LED_Init();
	NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	OutGPIO_Init();
    KEY_Init();
    EXTIX_Init();
    GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl
	while(1)
	{
             
//        forward_flag=0;
          ForwardFunc(); 

	}
}
void EXTI0_IRQHandler(void)  
{
	delay_ms(10);//消抖
	if((EXTI_GetITStatus(EXTI_Line0)!=RESET)&&(WK_UP==1))  
	{		
		forward_flag=1;
        GPIO_ResetBits(GPIOD,GPIO_Pin_2);//clk
	}
    EXTI_ClearITPendingBit(EXTI_Line0);
}
void EXTI15_10_IRQHandler()
{
    delay_ms(10);
    if((EXTI_GetITStatus(EXTI_Line15)!=RESET)&&(KEY1==0))  
	{		
		
	}
    EXTI_ClearITPendingBit(EXTI_Line15);  
}
