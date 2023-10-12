#include "stdTypes.h"
#include <util/delay.h>

#define DDRA         *((u8*)0x3A)
#define PORTA        *((u8*)0x3B)
#define PINA         *((volatile u8*)0x39)

#define DDRB         *((u8*)0x37)
#define PORTB        *((u8*)0x38)
#define PINB         *((volatile u8*)0x36)

#define LED_1         0
#define LED_2         1

#define SWITCH_1      0
#define SWITCH_2      1
#define SWITCH_3      2

// 2_LEDS_3_PBs_TASK
int main(void)
{
	DDRA = 0x03;  // All LEDs are output
	PORTA= 0x00;  // start case is off
	DDRB = 0x00;  // All switches are input
	PORTB= 0x07;  // 3 switches are pulled up

	while (1)
	{
		if( !((PINB>>SWITCH_1)&1) )
		{
			PORTA |= (1<<LED_1);
			PORTA &=~(1<<LED_2);
			_delay_ms(20);
		}
		else if( !((PINB>>SWITCH_2)&1) )
		{
			PORTA |=(1<<LED_2);
			PORTA &=~(1<<LED_1);
			_delay_ms(20);
		}
		else if( !((PINB>>SWITCH_3)&1) )
		{
			PORTA |=(1<<LED_1);
			PORTA |=(1<<LED_2);
			_delay_ms(20);
		}
		else
		{
			PORTA &= ~(1 << LED_1);
			PORTA &= ~(1 << LED_2);
			_delay_ms(20);
		}
	}
}