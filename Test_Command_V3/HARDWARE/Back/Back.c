#include "back.h"
#include "GPIO.h"
#include "delay.h"
#include "sys.h"
#include "HandShake.h"
#include "Forward.h"
void Back_Init()
{
    GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl
}
void Back_4()
{
    Back_Init();
    delay_us(130);
    
    GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
    GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
    
    //5
     GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
    GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
    //9
     GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
    GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
    //13
     GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
 
    GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
    delay_us(260);
}
void Back_5()
{
    delay_us(130);
    
    GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
    GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
    
    GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
    delay_us(130);
}
void Back_6()
{
    delay_us(130);
    GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl  1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
    
    Back_Init();
    delay_us(130);
}
void Back_Func()
{
    int i=0;
    HandShakeFunc();
    delay_ms(900);
    //test
    forward_before_1();
	forward_before_2();
    delay_ms(10);
    forward_1();
    Back_4();
    Back_5();
    delay_ms(1);
    Back_6();
    for(i=0;i<=202;i++)
    {
        forward_7();
		forward_5();
		forward_6();
    }
    delay_ms(100);
    
}
