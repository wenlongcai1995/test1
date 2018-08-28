#include "led.h"
#include "delay.h"
#include "sys.h"
#include "key.h"
#include "exti.h"
#include "timer.h"
#include "usart.h"
uint16_t temp[3]={0};
char RXCouter;
#define delay_time 500
#define step_counter 2720
typedef enum {FALSE = 0,TRUE = 1} bool;
bool RXFlag;

int main(void)
 {	
//    int counter=0;
	RXCouter=0;
	RXFlag=FALSE;
	delay_init();	    //延时函数初始化	  
	NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(115200);	 	//串口初始化为115200
	LED_Init();		  	//初始化与LED连接的硬件接口
	KEY_Init();			//按键初始化
	EXTIX_Init();
	GPIO_SetBits(GPIOD,GPIO_Pin_2);
	GPIO_SetBits(GPIOA,GPIO_Pin_8);
	while(1)
	{
		if(RXFlag)
		{
			 //灯亮的控制协议
			RXFlag=FALSE;
			if(temp[0]==0x02&&temp[1]==0x01&&temp[2]==0x01)//NG
			{
             //   USART_Cmd(USART1, DISABLE);                    //关闭串口中断
				GPIO_ResetBits(GPIOD,GPIO_Pin_2);				
				delay_ms(3000);
				GPIO_SetBits(GPIOD,GPIO_Pin_2);
             //   USART_Cmd(USART1,ENABLE);                    
			}
			if(temp[0]==0x02&&temp[1]==0x02&&temp[2]==0x01)//OK
			{
             //   USART_Cmd(USART1, DISABLE);                    //关闭串口中断
				GPIO_ResetBits(GPIOA,GPIO_Pin_8);
				delay_ms(3000);
				GPIO_SetBits(GPIOA,GPIO_Pin_8);
             //   USART_Cmd(USART1,ENABLE); 
			}
			if(temp[0]==0x02&&temp[1]==0x03&&temp[2]==0x01)//转动
			{
           //     USART_Cmd(USART1, DISABLE);                    //关闭串口中断
				GPIO_ResetBits(GPIOD,GPIO_Pin_2);
				GPIO_ResetBits(GPIOA,GPIO_Pin_8);
				delay_ms(3000);
				GPIO_SetBits(GPIOD,GPIO_Pin_2);
				GPIO_SetBits(GPIOA,GPIO_Pin_8);
           //     USART_Cmd(USART1,ENABLE); 
			}
        }   
	}
 }
void USART1_IRQHandler(void)                	//串口1中断服务程序
{	
	if(USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)  //接收中断(接收到的数据必须是0x0d 0x0a结尾)
	{
		temp[RXCouter++]=USART_ReceiveData(USART1);		
	    if(RXCouter>=3)
		{
			RXCouter=0;
			RXFlag=TRUE;			
		}		
    } 
} 
void EXTI0_IRQHandler(void)
{    
	delay_ms(10);//消抖
	if((EXTI_GetITStatus(EXTI_Line0)!=RESET)&&(WK_UP==1))  //开始
	{	
        USART_ClearFlag(USART1,USART_FLAG_TC);
        USART_SendData(USART1,0x01);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);
        USART_SendData(USART1,0x00);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);
        USART_SendData(USART1,0x02);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);			
	}
    EXTI_ClearITPendingBit(EXTI_Line0);  //清除LINE0上的中断标志位 	
}

void EXTI15_10_IRQHandler(void)
{
	delay_ms(10);//消抖
	if((EXTI_GetITStatus(EXTI_Line15)!=RESET)&&(KEY1==0))  //开始
	{	
        USART_ClearFlag(USART1,USART_FLAG_TC);
        USART_SendData(USART1,0x01);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);
        USART_SendData(USART1,0x01);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);
        USART_SendData(USART1,0x02);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);			
	}	
    EXTI_ClearITPendingBit(EXTI_Line15);  //清除LINE15上的中断标志位 
}


