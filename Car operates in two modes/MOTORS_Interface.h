#ifndef MOTORS_INTERFACE_H_
#define MOTORS_INTERFACE_H_

void MOTORS_Forward(u8 OCR0);
void MOTORS_Backward(u8 OCR2);
void MOTORS_Right(void);
void MOTORS_Left(void);
void MOTORS_Stop(void);

#endif /* MOTORS_INTERFACE_H_ */
