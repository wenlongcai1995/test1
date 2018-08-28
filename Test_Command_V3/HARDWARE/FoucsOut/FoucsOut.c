#include "FoucsOut.h"
#include "GPIO.h"
#include "delay.h"
#include "sys.h"
#include "HandShake.h"
#include "FoucsIn.h"
void FoucsOut_Init()
{
    GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl
    delay_us(130);
}
void FoucsOut_7()
{
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
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
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
    GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
    GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
    //13
     GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
}
void FoucsOut_12()
{
    GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
    GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
    
    //5
     GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
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
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
    //9
     GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
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
    //13
     GPIO_ResetBits(GPIOA,GPIO_Pin_8);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
}
void FoucsOut_Func()
{
    HandShakeFunc();
    delay_ms(900);
    
    FoucsIn_1();
    delay_ms(2);
    FoucsIn_2();
    FoucsIn_3();
    delay_ms(13);
    FoucsIn_4();
    FoucsIn_3();
    delay_ms(10);
    FoucsIn_6();
    FoucsOut_7();
    delay_ms(16);
    FoucsIn_8();
    FoucsIn_9();
    delay_ms(10);
    FoucsIn_16();
    FoucsIn_3();
    FoucsOut_12();
    delay_ms(243);
    FoucsIn_8();
    FoucsIn_9();
    delay_ms(10);
    
    HandShakeFunc();
}

