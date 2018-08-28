#include "Forward.h"
#include "GPIO.h"
#include "delay.h"
#include "sys.h"
#include "HandShake.h"
void Forward_Init()  //初始化可重复步骤
{
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl
}

void forward_before_2()
{

// DLC:1100 1100 1100 1100 
// DCL:0
	Forward_Init();
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
    //13
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	Forward_Init();
	
}
void forward_before_1()   //
{
//    DLC:0
//DCL:0000 0000 0100 0100
	Forward_Init();

    GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	 GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	 GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	//9
	 GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	
	 GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	//13
	 GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	
	 GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	Forward_Init();

}
void forward_1()
{

// DLC:0
// DCL:0001 0000 0001 0000
	Forward_Init();

	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl  0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl  0
	delay_us(5);
	
	Forward_Init();
	
}
void forward_2()
{

// DLC:0011 0000 0011 0000
// DCL:0101 0101 0100 0101
	Forward_Init();

	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);	
	Forward_Init();
	
}
void forward_3()
{

// DLC:0011 0000 0011 0000
// DCL:0101 0001 0000 0001
	Forward_Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl   1
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl   1
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
    GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl   1
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);	
    Forward_Init();

}
void forward_4()
{
// DLC:0011 0000 0011 0000
// DCL:0100 0001 0000 0001
    Forward_Init();
    
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);	
    
    
	Forward_Init();

}
void forward_5()
{

// DLC:0
// DCL:0100 0000 0000 0001
	Forward_Init();

	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_SetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	Forward_Init();
	
}
void forward_6()
{


// DLC:0000 1100 0011 0000
// DCL:0
	Forward_Init();
	
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc   1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_SetBits(GPIOC,GPIO_Pin_2);//dlc  1
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//12
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	Forward_Init();

}
void forward_7()
{

// DLC:0
// DCL:0
	Forward_Init();
	
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc   0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_1);//clk
	GPIO_ResetBits(GPIOC,GPIO_Pin_2);//dlc  0
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);//dcl    0
	delay_us(5);
	
	Forward_Init();

}
void ForwardFunc()
{
    
    HandShakeFunc();
    delay_ms(674);
    
	forward_before_1();
    delay_us(630);
	forward_before_2();
    delay_us(360);
	forward_1();
    delay_us(330);
	forward_2();
    delay_us(340);
	forward_3();
    delay_us(1300);
	forward_4();
    delay_us(330);
	forward_5();
    delay_us(330);
	forward_6();
    delay_us(330);	
    forward_7();
    
    delay_ms(93);
    
     HandShakeFunc();
     delay_ms(420);
     
     HandShakeFunc();
     delay_ms(420);
     
     
    forward_before_1();
    delay_us(630);
	forward_before_2();
    delay_us(360);
	forward_1();
    delay_us(330);
	forward_2();
    delay_us(340);
	forward_3();
    delay_us(1300);
	forward_4();
    delay_us(330);
	forward_5();
    delay_us(330);
	forward_6();
    delay_us(330);	
    forward_7();
    
    delay_ms(106);
    
    
    HandShakeFunc();
    delay_ms(530);
    
    HandShakeFunc();
    delay_ms(530);

}
