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
	delay_init();	    //��ʱ������ʼ��	  
	NVIC_Configuration(); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	 	//���ڳ�ʼ��Ϊ115200
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	KEY_Init();			//������ʼ��
	EXTIX_Init();
	GPIO_SetBits(GPIOD,GPIO_Pin_2);
	GPIO_SetBits(GPIOA,GPIO_Pin_8);
	while(1)
	{
		if(RXFlag)
		{
			 //�����Ŀ���Э��
			RXFlag=FALSE;
			if(temp[0]==0x02&&temp[1]==0x01&&temp[2]==0x01)//NG
			{
             //   USART_Cmd(USART1, DISABLE);                    //�رմ����ж�
				GPIO_ResetBits(GPIOD,GPIO_Pin_2);				
				delay_ms(3000);
				GPIO_SetBits(GPIOD,GPIO_Pin_2);
             //   USART_Cmd(USART1,ENABLE);                    
			}
			if(temp[0]==0x02&&temp[1]==0x02&&temp[2]==0x01)//OK
			{
             //   USART_Cmd(USART1, DISABLE);                    //�رմ����ж�
				GPIO_ResetBits(GPIOA,GPIO_Pin_8);
				delay_ms(3000);
				GPIO_SetBits(GPIOA,GPIO_Pin_8);
             //   USART_Cmd(USART1,ENABLE); 
			}
			if(temp[0]==0x02&&temp[1]==0x03&&temp[2]==0x01)//ת��
			{
           //     USART_Cmd(USART1, DISABLE);                    //�رմ����ж�
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
void USART1_IRQHandler(void)                	//����1�жϷ������
{	
	if(USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)  //�����ж�(���յ������ݱ�����0x0d 0x0a��β)
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
	delay_ms(10);//����
	if((EXTI_GetITStatus(EXTI_Line0)!=RESET)&&(WK_UP==1))  //��ʼ
	{	
        USART_ClearFlag(USART1,USART_FLAG_TC);
        USART_SendData(USART1,0x01);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);
        USART_SendData(USART1,0x00);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);
        USART_SendData(USART1,0x02);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);			
	}
    EXTI_ClearITPendingBit(EXTI_Line0);  //���LINE0�ϵ��жϱ�־λ 	
}

void EXTI15_10_IRQHandler(void)
{
	delay_ms(10);//����
	if((EXTI_GetITStatus(EXTI_Line15)!=RESET)&&(KEY1==0))  //��ʼ
	{	
        USART_ClearFlag(USART1,USART_FLAG_TC);
        USART_SendData(USART1,0x01);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);
        USART_SendData(USART1,0x01);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);
        USART_SendData(USART1,0x02);
        while(USART_GetFlagStatus(USART1,USART_FLAG_TC)==RESET);			
	}	
    EXTI_ClearITPendingBit(EXTI_Line15);  //���LINE15�ϵ��жϱ�־λ 
}


