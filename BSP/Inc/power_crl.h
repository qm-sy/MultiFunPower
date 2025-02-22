#ifndef __POWER_CRL_H_
#define __POWER_CRL_H_

#include "sys.h"
#include "gpio.h"

#define DC_24V_ON    1
#define DC_24V_OFF   0


typedef struct 
{
    uint8_t  ac220_on_off;
    volatile uint8_t  zero_flag;          //220V输入触发标志位
    uint16_t time_delay;         //移相延时
}AC_220;

extern AC_220 ac_220;

void Power_Statu_Init( void );
void DC_24V_out( uint8_t on_off );
void AC_220V_out( uint8_t power_level );

#endif