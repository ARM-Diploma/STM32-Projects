#ifndef SERVO_H_
#define SERVO_H_


#define SERVO_MIN_ON_TIME	0.5	/*0.5 ms : 0 degree*/
#define SERVO_MAX_ON_TIME 	2.5	/*2.5 ms :180 degree*/

#define SERVO_TIMER_PERIOD		1000

/*min input = (0.5/20)*period
 * max input = (2.5/20)*period
 * */
#define SERVO_MIN_INPUT			25
#define SERVO_MAX_INPUT			125

#define SERVO_MIN_ANGLE			0
#define SERVO_MAX_ANGLE			180

typedef struct
{
	TIM_HandleTypeDef htim;
	int32_t Copy_int32Channel;

}SERVO_t;


void Servo_void_SetAngle(SERVO_t Copy_ServoMotor,int32_t Copy_int32_Angle);

#endif
