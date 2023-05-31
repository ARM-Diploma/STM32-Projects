#include "stdint.h"

#include "PWM.h"
#include "servo.h"
#include "MAPPING.h"


void Servo_void_SetAngle(SERVO_t Copy_ServoMotor,int32_t Copy_int32_Angle)
{
	int32_t Local_int32_MappedValue;

	Local_int32_MappedValue = Mapping(SERVO_MIN_ANGLE, SERVO_MAX_ANGLE, SERVO_MIN_INPUT, SERVO_MAX_INPUT, SERVO_MIN_INPUT,Copy_int32_Angle);

	PWM_int32SetPWMValue(Copy_ServoMotor.htim.Instance, Copy_ServoMotor.Copy_int32Channel, Local_int32_MappedValue);

}

