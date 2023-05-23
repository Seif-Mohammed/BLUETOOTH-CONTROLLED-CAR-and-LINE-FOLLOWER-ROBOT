#include "BIT_MATH.h"
#include "STDTYPE.h"
#include "MDIO_Interface.h"
#include "MTMR_Interface.h"
#define F_CPU	8000000UL
#include <avr/delay.h>
void MOTORS_Forward(u8 OCR){
	MTMR_TMR0CompareMatchValue(OCR);
	MTMR_TMR2CompareMatchValue(OCR);
	MDIO_u8SetPinValue(MDIO_U8_PORTA,MDIO_U8_PIN_1,MDIO_U8_LOW);
	MDIO_u8SetPinValue(MDIO_U8_PORTA,MDIO_U8_PIN_2,MDIO_U8_LOW);
}
void MOTORS_Backward(){
	MDIO_u8SetPinValue(MDIO_U8_PORTA,MDIO_U8_PIN_1,MDIO_U8_HIGH);
	MDIO_u8SetPinValue(MDIO_U8_PORTA,MDIO_U8_PIN_2,MDIO_U8_HIGH);
	MTMR_TMR2CompareMatchValue(0);
	MTMR_TMR0CompareMatchValue(0);
}
void MOTORS_Right(void){
	MTMR_TMR0CompareMatchValue(254);
	MDIO_u8SetPinValue(MDIO_U8_PORTA,MDIO_U8_PIN_1,MDIO_U8_LOW);
	MTMR_TMR2CompareMatchValue(0);
	MDIO_u8SetPinValue(MDIO_U8_PORTA,MDIO_U8_PIN_2,MDIO_U8_HIGH);
	_delay_ms(100);
	MOTORS_Stop();
}
void MOTORS_Left(void){
	MTMR_TMR0CompareMatchValue(0);
	MDIO_u8SetPinValue(MDIO_U8_PORTA,MDIO_U8_PIN_1,MDIO_U8_HIGH);
	MTMR_TMR2CompareMatchValue(254);
	MDIO_u8SetPinValue(MDIO_U8_PORTA,MDIO_U8_PIN_2,MDIO_U8_LOW);
	_delay_ms(100);
	MOTORS_Stop();
}
void MOTORS_Stop(void){
	MDIO_u8SetPinValue(MDIO_U8_PORTA,MDIO_U8_PIN_1,MDIO_U8_LOW);
	MDIO_u8SetPinValue(MDIO_U8_PORTA,MDIO_U8_PIN_2,MDIO_U8_LOW);
	MTMR_TMR0CompareMatchValue(0);
	MTMR_TMR2CompareMatchValue(0);
	_delay_ms(100);

}
