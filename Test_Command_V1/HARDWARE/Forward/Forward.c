// #include "Forward.h"
// #include "GPIO.h"
// #include "delay.h"
// #include "sys.h"
// #include "HandShake.h"
// void Forward_Init()  //初始化可重复步骤
// {
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl
// }

// void forward_1()
// {
// 	Forward_Init();
// 	delay_us(120);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
// 	delay_us(5);
// 	
// 	Forward_Init();
// 	delay_us(120);
// }
// void forward_before_2()
// {
// 	Forward_Init();
// 	delay_us(120);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	Forward_Init();
// 	delay_us(120);
// }
// void forward_before_1()
// {
// 	Forward_Init();
// 	delay_us(120);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	//5
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	//9
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	Forward_Init();
// 	delay_us(120);
// }
// void forward_2()
// {
// 	Forward_Init();
// 	delay_us(120);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	//5
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	//9
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	//12
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	Forward_Init();
// 	delay_us(120);
// }
// void forward_3()
// {
// 	Forward_Init();
// 	delay_us(120);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	//5
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	//9
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	//12
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl
// 	delay_us(120);
// }
// void forward_4()
// {
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl
// 	delay_us(120);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	//5
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	//9
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	//12
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	Forward_Init();
// 	delay_us(120);
// }
// void forward_5()
// {
// 	Forward_Init();
// 	delay_us(120);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	Forward_Init();
// 	delay_us(120);
// }
// void forward_6()
// {
// 	Forward_Init();
// 	delay_us(120);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	//5
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	//9
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	//12
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	Forward_Init();
// 	delay_us(120);
// }
// void forward_7()
// {
// 	Forward_Init();
// 	delay_us(120);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	//5
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	//6
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
// 	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
// 	delay_us(5);
// 	
// 	Forward_Init();
// 	delay_us(120);
// }
// void ForwardFunc()
// {
// 	int i=0;
//     
//     HandShakeFunc();
//     delay_ms(500);
//     
//     
// 	forward_before_1();
// 	forward_before_2();
// 	delay_ms(10);
// 	
// 	forward_1();
// 	forward_2();
// 	forward_3();
// 	delay_ms(1);
// 	forward_4();
// 	forward_5();
// 	forward_6();	
// 	while(i++<85)
// 	{
// 		forward_7();
// 		forward_5();
// 		forward_6();
// 	}
// }





#include "Forward.h"
#include "GPIO.h"
#include "delay.h"
#include "sys.h"
#include "HandShake.h"
void Forward_Init()  //初始化可重复步骤
{
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl
}


void forward_before_2()
{
	Forward_Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
    //13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	Forward_Init();
	delay_us(130);
}
void forward_before_1()
{
	Forward_Init();
	delay_us(130);
	
    GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	 GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	 GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	//9
	 GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	//13
	 GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	Forward_Init();
	delay_us(130);
}
void forward_1()
{
	Forward_Init();
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
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	//9
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
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	Forward_Init();
	delay_us(130);
}
void forward_2()
{
	Forward_Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Forward_Init();
	delay_us(130);
}
void forward_3()
{
	Forward_Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl   0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
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
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl   1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
    Forward_Init();
	delay_us(130);
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl
// 	delay_us(120);
}
void forward_4()
{
// 	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
// 	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc
// 	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl
// 	delay_us(120);
// 	
    Forward_Init();
	delay_us(130);
    
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl  0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_SetBits(GPIOA,GPIO_Pin_10);//dcl    1
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
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
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Forward_Init();
	delay_us(130);
}
void forward_5()
{
	Forward_Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Forward_Init();
	delay_us(130);
}
void forward_6()
{
	Forward_Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//5
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc   1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//9
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_SetBits(GPIOA,GPIO_Pin_9);//dlc  1
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//12
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Forward_Init();
	delay_us(130);
}
void forward_7()
{
	Forward_Init();
	delay_us(130);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
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
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	//13
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc   0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_ResetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	GPIO_SetBits(GPIOA,GPIO_Pin_11);//clk
	GPIO_ResetBits(GPIOA,GPIO_Pin_9);//dlc  0
	GPIO_ResetBits(GPIOA,GPIO_Pin_10);//dcl    0
	delay_us(5);
	
	Forward_Init();
	delay_us(130);
}
void ForwardFunc()
{
	int i=0;
    
//     HandShakeFunc();
//     delay_ms(350);
//     
    HandShakeFunc();
    delay_ms(350);
    
	forward_before_1();
	forward_before_2();
	delay_ms(10);
	forward_1();
	forward_2();
	forward_3();
	delay_ms(1);
	forward_4();
	forward_5();
	forward_6();	
    while(i++<95)
	{
		forward_7();
		forward_5();
		forward_6();
	}
    i=0;
    delay_ms(100);
//     HandShakeFunc();
//     delay_ms(350);
}
