#ifndef MTMR_INTERFACE_H_
#define MTMR_INTERFACE_H_



#define MTMR_TMR0_OVF		0
#define MTMR_TMR0_CTC		1

u8 MTMR_TMR0CompareMatchValue(u8 Copy_u8CompareMatchValue);
u8 MTMR_TMR1CompareMatchValue(u16 Copy_u16CompareMatchValue);
u8 MTMR_TMR2CompareMatchValue(u8 Copy_u8CompareMatchValue2);
u8 MTMR_TIMER0_INIT(void);
u8 MTMR_TIMER1_INIT(void);
u8 MTMR_TIMER2_INIT(void);
void MTMR_TIMER0_Disable(void);
void MTMR_TIMER1_Disable(void);
void MTMR_TIMER2_Disable(void);
u8 MTMR_U8TMR0_SetCallBack(u8 CopyInterruptNo , void(*Copy_pf)(void));
#endif /* MTMR_INTERFACE_H_ */
