#ifndef SERVO_H_
#define SERVO_H_


typedef struct
{
	TIM_HandleTypeDef *htim;
	int32_t Copy_int32Channel;

}SERVO_t;


void Servo_int_8_SetAngle(SERVO_t *Copy_ServoMotor,int32_t Copy_int32_Angle);
#endif
