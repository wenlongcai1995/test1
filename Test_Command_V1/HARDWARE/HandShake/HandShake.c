#include "HandShake.h"
#include "GPIO.h"
#include "delay.h"
#include "sys.h"
void Init()  //初始化可重复步骤
{
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl
}
void func_1(void)
{
	//step 1:all pins set high
	Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Init();
	delay_us(130);
}
void func_2(void)
{
	//step 1:all pins set high
	Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc    1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc    1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc    1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc    1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Init();
	delay_us(130);
	
}

void func_3(void)
{
	//step 1:all pins set high
	Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Init();
	delay_us(130);

}
void func_4(void)
{
	//step 1:all pins set high
	Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	//5
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc    1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc    1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc    1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Init();
	delay_us(130);

}
void func_6(void)
{
	//step 1:all pins set high
	Init();
	delay_us(100);
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc    1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc    1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Init();
	delay_us(130);

}
void func_9(void)
{
	//step 1:all pins set high
	Init();
	delay_us(130);
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
//5	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Init();
	delay_us(130);
	

}
void func_10(void)
{
	//step 1:all pins set high
	Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Init();
	delay_us(130);
	

}
void func_11(void)
{
	//step 1:all pins set high
	Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Init();
	delay_us(130);
}
void func_13(void)
{
	//step 1:all pins set high
	Init();
	delay_us(130);
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	
	Init();
	delay_us(130);
	

}
void func_15()
{
	Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Init();
	delay_us(130);
}
void HandShakeFunc()
{
	func_1();
	func_2();
	delay_ms(10);
	func_3();
	func_4();
	func_4();
	func_6();
	delay_ms(43);
	func_1();
	func_2();
	delay_ms(10);
	func_9();
	func_10();
	func_11();
	func_10();
	delay_ms(12);
	func_13();
	func_10();
	func_15();
//	delay_ms(519);
}
