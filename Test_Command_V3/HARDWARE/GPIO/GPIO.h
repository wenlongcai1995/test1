#ifndef __GPIO_H
#define __GPIO_H
#include "sys.h"
void OutGPIO_Init(void);
void LED_Init(void);
#define LED0 PDout(2)// PD2
#endif
