#include "BIT_MATH.h"
#include "STDTYPE.h"
#define F_CPU	8000000UL
#include <avr/delay.h>
#include "MDIO_Interface.h"
#include "MTMR_Interface.h"
#include "HultraSonic_Interface.h"
#include "HLCD_Interface.h"

void HultraSonic_viodSendPulse(u8 trig_port , u8 trig_pin){
	MDIO_u8SetPinValue(trig_port,trig_pin,MDIO_U8_HIGH);
	_delay_us(10);
	MDIO_u8SetPinValue(trig_port,trig_pin,MDIO_U8_LOW);
	MTMR_TIMER1_INIT();
}
void HultraSonic_voidDisplayDistance(u16 Ton){
	HLCD_U8SetCursor(0,0);
	HLCD_U8WriteString("Distance:");
	HLCD_U8SetCursor(0,9);HLCD_U8WriteNumber(Ton);
	if(Ton < 100){
			HLCD_U8SetCursor(0,11);HLCD_U8WriteString(" ");
		}
	if(Ton < 10){
		HLCD_U8SetCursor(0,10);HLCD_U8WriteString(" ");
	}
		HLCD_U8SetCursor(0,12);HLCD_U8WriteString("cm");
}
