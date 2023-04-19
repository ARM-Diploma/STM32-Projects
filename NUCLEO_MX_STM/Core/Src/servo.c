#include "stdint.h"

#include "PWM.h"
#include "servo.h"
#include "MAPPING.h"

void Servo_int_8_SetAngle(SERVO_t *Copy_ServoMotor,int32_t Copy_int32_Angle)
{
	int32_t Local_int32_MappedValue;
	Local_int32_MappedValue = Mapping(0, 180, 0, 65535, Copy_int32_Angle);

	PWM_int32SetPWMValue(Copy_ServoMotor->htim, Copy_ServoMotor->Copy_int32Channel, Local_int32_MappedValue);
}

