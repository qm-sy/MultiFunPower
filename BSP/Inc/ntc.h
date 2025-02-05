#ifndef _NTC_H_
#define _NTC_H_

#include "sys.h"
#include "adc.h"
#include "power_crl.h"
#include "stdio.h"

#define NTC_1        5
#define NTC_2        6
#define NTC_3        7
#define NTC_4        8

typedef struct 
{
    uint8_t  temp_value1;   
    uint8_t  temp_value2;  
    uint8_t  temp_value3;  
    uint8_t  temp_alarm_value1;
    uint8_t  temp_alarm_value2;          
    uint8_t  temp_alarm_value3;    
    uint8_t  temp_scan_flag;
}TEMP;

extern TEMP temp;

uint16_t get_temp( uint8_t channle_x );
void temp_scan( void );

#endif