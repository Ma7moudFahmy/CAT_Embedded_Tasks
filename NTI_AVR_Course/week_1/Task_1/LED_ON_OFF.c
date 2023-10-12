#include "stdTypes.h"
#include <util/delay.h>

#define DDRA           *((u8*)0x3A)
#define PORTA          *((u8*)0x3B)
#define PINA           *((volatile u8*)0x39)

//LED_ON_OFF_TASK
int main(void)
{
	DDRA =0x01;
	PORTA=0x00;
	while(1)
	{
		PORTA=0x01;
		_delay_ms(1000);
		PORTA=0x00;
		_delay_ms(1000);
	}
}