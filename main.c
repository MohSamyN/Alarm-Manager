#include <stdint.h>
#include "GPIO.h"
#include "LED.h"
#include "Alarm.h"


int main(void)
{
    GPIO_Init();
    Alarm_Init();
    LED_Init();

    /*
    Alarm_var = 0x01;
    Alarm_Managing_Function();
    Alarm_var = 0x02;
    Alarm_Managing_Function();
    Alarm_var = 0x04;
    Alarm_Managing_Function();
    Alarm_var = 0x08;
    Alarm_Managing_Function();
    Alarm_var = 0x10;
    Alarm_Managing_Function();
    */

    /*
    Alarm_var = 0x15;
    Alarm_Managing_Function();
    */


    Alarm_var = 0x0A;
    Alarm_Managing_Function();


    while (1)
    {
    }
    return 0;
}
