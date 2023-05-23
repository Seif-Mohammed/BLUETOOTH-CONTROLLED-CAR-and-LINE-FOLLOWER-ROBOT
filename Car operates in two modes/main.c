#include "STDTYPE.h"
#include "BIT_MATH.h"
#include "MDIO_Interface.h"
#include "MTMR_Interface.h"
#include "MUART_Interface.h"
#include "HultraSonic_Interface.h"
#include "HLCD_Interface.h"
#include "MOTORS_Interface.h"
#define F_CPU	8000000UL
#include <avr/delay.h>
#define MEXTI_U8_SREG_REG		*((volatile u8*)0X5F)

int main(void){
	SET_BIT(MEXTI_U8_SREG_REG,7);
	MDIO_U8INIT();
	HLCD_U8Init();
	MTMR_TIMER0_INIT();
	MTMR_TIMER2_INIT();
	HICU_init();
	MUART_voidInit();
	u16 Ton=0 ;
	u8  Left_IR , Right_IR;
	u8 Speed=220;
	u8 CH='S',SWITCH;

	while(1){
		MDIO_u8GetPinValue(MDIO_U8_PORTA , MDIO_U8_PIN_5 , &SWITCH);
		_delay_ms(20);
		/*______  LINE FOLLOWER MOoOoDE   ______*/
		if(SWITCH == MDIO_U8_HIGH){
			HLCD_U8SetCursor(0,0);HLCD_U8WriteString("LINE FOLLOWER");
			_delay_ms(3000);
			HLCD_U8ClearLCD();
			while(1){
				/* Ultrasonic sensor */
				HultraSonic_viodSendPulse(MDIO_U8_PORTB , MDIO_U8_PIN_4);
				Ton = HICU_GET_PWM_ON_Period();
				Ton=Ton/444; //to be in CMs
				HultraSonic_voidDisplayDistance(Ton);
				/* BUZZER & IRs */
				MDIO_u8GetPinValue(MDIO_U8_PORTB , MDIO_U8_PIN_6 , &Left_IR);
				MDIO_u8GetPinValue(MDIO_U8_PORTB , MDIO_U8_PIN_7 , &Right_IR);
				if( Ton <= 15){
					MDIO_u8SetPinValue(MDIO_U8_PORTB , MDIO_U8_PIN_5 , MDIO_U8_HIGH);
					HLCD_U8SetCursor(1,2);
					HLCD_U8WriteString("OBSTACLE !!!");
					MOTORS_Stop();
				}else if(Ton > 15 && Ton <120){
					MDIO_u8SetPinValue(MDIO_U8_PORTB , MDIO_U8_PIN_5 , MDIO_U8_LOW);
					HLCD_U8SetCursor(1,2);
					HLCD_U8WriteString("            ");
					if(Left_IR == MDIO_U8_LOW && Right_IR == MDIO_U8_LOW){
						MOTORS_Forward(Speed);
					}
					else if(Left_IR == MDIO_U8_LOW && Right_IR == MDIO_U8_HIGH){
						MOTORS_Left();
					}
					else if(Left_IR == MDIO_U8_HIGH && Right_IR == MDIO_U8_LOW){
						MOTORS_Right();
					}
				}
				MDIO_u8GetPinValue(MDIO_U8_PORTA , MDIO_U8_PIN_5 , &SWITCH);
				if(SWITCH == MDIO_U8_LOW)
					break;
			}
		}
		/*_____  BLUETOOTH CONROLLED CAR MODE  _____*/
		else if(SWITCH == MDIO_U8_LOW){
			HLCD_U8SetCursor(0,0);HLCD_U8WriteString("BLUETOOTH MODE");
			_delay_ms(3000);
			HLCD_U8ClearLCD();
			HLCD_U8SetCursor(0,1);HLCD_U8WriteString("Speed:");
			while(1){
				HLCD_U8SetCursor(0,7);HLCD_U8WriteNumber(Speed);
				HLCD_U8SetCursor(0,9);HLCD_U8WriteString(" ");
				if(CH == 'F'){
					MOTORS_Forward(Speed);
					HLCD_U8SetCursor(1,0);HLCD_U8WriteString("Forward ");
				}else if(CH == 'B'){
					MOTORS_Backward(Speed);
					HLCD_U8SetCursor(1,0);
					HLCD_U8WriteString("Backward");
				}else if(CH == 'R'){
					MOTORS_Right();
					HLCD_U8SetCursor(1,0);
					HLCD_U8WriteString("Right   ");
				}else if (CH == 'L') {
					MOTORS_Left();
					HLCD_U8SetCursor(1,0);
					HLCD_U8WriteString("Left    ");
				}else if(CH == 'S'){
					MOTORS_Stop();
					HLCD_U8SetCursor(1,0);
					HLCD_U8WriteString("Stop    ");
				}
				else if(CH >= 48 && CH <= 57){
					Speed = (CH-48)*28;
				}
				CH = MUART_voidRecieveByte();
				_delay_ms(50);
				MDIO_u8GetPinValue(MDIO_U8_PORTA , MDIO_U8_PIN_5 , &SWITCH);
				if(SWITCH == MDIO_U8_HIGH)
					break;
			}
		}
		HLCD_U8ClearLCD();
	}
	return 0;
}
