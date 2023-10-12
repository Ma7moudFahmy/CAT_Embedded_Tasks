#include "stdTypes.h"
#include <util/delay.h>

#define DDRA         *((u8*)0x3A)
#define PORTA        *((u8*)0x3B)
#define PINA         *((volatile u8*)0x39)

#define DDRB         *((u8*)0x37)
#define PORTB        *((u8*)0x38)
#define PINB         *((volatile u8*)0x36)

//#define DDRD         *((u8*)0x31)

#define SWITCH_1     0
#define SWITCH_2     1

//7_SEG_with_2_PBs_Task
int main (void)
{
	DDRB =0x7f;   //7_LEDs as o/p
	DDRA =0x00;   //2_switches as i/p
	PORTB=0x3F;   //7_seg shows 0 as initial
	PORTA=0x03;   //2_switches are pulled up

	u8 display_num=0, Seven_Segment[]={ 0x3F, 0x06, 0x5B,
			0x4F, 0x66, 0x6D,
			0x7D, 0x07, 0x7F,
			0x6F };
	while (1)
	{
		if( !((PINA>>SWITCH_1)&1) && display_num<9 )
		{
			display_num++;
			PORTB = Seven_Segment[display_num];
			while(!((PINA>>SWITCH_1) & 1));
			_delay_ms(20);
		}
		else if( !((PINA>>SWITCH_2)&1) && display_num>0 )
		{
			display_num--;
			PORTB = Seven_Segment[display_num];
			while(!((PINA>>SWITCH_2) & 1));
			_delay_ms(20);
		}
	}
}