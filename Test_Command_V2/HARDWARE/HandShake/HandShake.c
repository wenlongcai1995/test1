#include "HandShake.h"
#include "GPIO.h"
#include "delay.h"
#include "sys.h"
void Init()  //初始化可重复步骤
{
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Init();
	
}
void func_2(void)
{
	//step 1:all pins set high
	Init();	
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
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


}
void func_4(void)
{
	//step 1:all pins set high
	Init();	
	
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


}
void func_6(void)
{
	//step 1:all pins set high
	Init();
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

}
void func_11(void)
{
	//step 1:all pins set high
	Init();	
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
}
void func_14(void)
{
	//step 1:all pins set high
	Init();

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
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
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
}
void func_15()
{
	Init();		
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
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
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

}
void func_16()
{
	Init();		
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
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   0
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

}
void func_21(void)
{
	//step 1:all pins set high
	Init();

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
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	//9
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
}
void HandShakeFunc()
{
	func_1();
    delay_us(630);
	func_2();
	delay_us(360);
	func_3();
    delay_us(330);
	func_4();
    delay_us(330);
	func_4();
    delay_us(330);
	func_6();
	delay_ms(37);
	func_1();
    delay_us(630);
	func_2();
    delay_us(360);
	func_3();
    delay_us(330);
	func_10();
    delay_us(330);
	func_11();
    delay_ms(11);
    
	func_1();
	delay_us(650);
    func_2();
	delay_us(360);
	func_14();
    delay_us(350);
	func_15();
    delay_us(350);
    func_16();
    delay_us(360);
    func_10();
    delay_ms(10);
    
    func_1();
    delay_us(630);
	func_2();
	delay_us(360);
    func_3();
    delay_us(330);
    func_21();
    delay_us(360);
    func_16();
    delay_us(330);
    func_10();   
    
//	delay_ms(531);
}
