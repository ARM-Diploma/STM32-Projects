/********************* *************************************************/
/***********************************************************************/
/************************ AUTHER : Hanin Anwar  ************************/
/************************ LAYER  : HAL          ************************/
/************************ SWC    : SSD          ************************/
/************************ VERSIO : 1.00         ************************/
/***********************************************************************/
/***********************************************************************/

#include <stdint.h>

#include "../Inc/GPIO_interface.h"

#include "../Inc/SSD_interface.h"
#include "../Inc/SSD_config.h"
#include "../Inc/SSD_private.h"


uint8_t SSD_u8Init(void)
{
	GPIO_PinConfig_T SSD_A =
	{
			.Port = PORTA,
			.PinNum = PIN11,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};

	GPIO_PinConfig_T SSD_B =
	{
			.Port = PORTA,
			.PinNum = PIN8,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};

	GPIO_PinConfig_T SSD_C =
	{
			.Port = PORTB,
			.PinNum = PIN15,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};

	GPIO_PinConfig_T SSD_D =
	{
			.Port = PORTB,
			.PinNum = PIN14,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};

	GPIO_PinConfig_T SSD_E =
	{
			.Port = PORTB,
			.PinNum = PIN13,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};
	GPIO_PinConfig_T SSD_F =
	{
			.Port = PORTB,
			.PinNum = PIN12,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};
	GPIO_PinConfig_T SSD_G =
	{
			.Port = PORTA,
			.PinNum = PIN12,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};
	GPIO_PinConfig_T SSD_DOT =
	{
			.Port = PORTA,
			.PinNum = PIN15,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};

	GPIO_PinConfig_T SSD_COM1 =
	{
			.Port = PORTB,
			.PinNum = PIN8,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};

	GPIO_PinConfig_T SSD_COM2 =
	{
			.Port = PORTB,
			.PinNum = PIN9,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};

	GPIO_PinConfig_T SSD_COM3 =
	{
			.Port = PORTB,
			.PinNum = PIN3,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL
	};
	GPIO_u8PinInit(&SSD_A);
	GPIO_u8PinInit(&SSD_B);
	GPIO_u8PinInit(&SSD_C);
	GPIO_u8PinInit(&SSD_D);
	GPIO_u8PinInit(&SSD_E);
	GPIO_u8PinInit(&SSD_F);
	GPIO_u8PinInit(&SSD_G);
	GPIO_u8PinInit(&SSD_DOT);

	GPIO_u8PinInit(&SSD_COM1);
	GPIO_u8PinInit(&SSD_COM2);
	GPIO_u8PinInit(&SSD_COM3);


}
uint8_t SSD_u8SetNumber(uint8_t Copy_u8Number , SSD_T *SSD)
{
    uint8_t Local_Errorstate = 0;
    uint8_t Local_NumArr[10] = {	0b00111111 ,
							0b00000110 ,
							0b01011011 ,
							0b01001111 ,
							0b01100110 ,
							0b01101101 ,
							0b01111101 ,
							0b00000111 ,
							0b01111111 ,
							0b01101111
    						};

    if(SSD->ComType == SSD_COM_ANODE)
    {
    	GPIO_u8SetPinValue(SSD->EnablePort ,SSD->EnablePin , PIN_HIGH);
    	DIO_u8SetPortValue(SSD->Port,~Local_NumArr[Copy_u8Number]);
    }
    else if (SSD->ComType == SSD_COM_CATHODE)
    {
    	DIO_u8SetPinValue(SSD->EnablePort ,SSD->EnablePin , DIO_u8PIN_LOW);
		DIO_u8SetPortValue(SSD->Port,Local_NumArr[Copy_u8Number]);

    }

    else
    {
    	Local_Errorstate = 1;
    }
    return Local_Errorstate;

}
uint8_t SSD_u8Enable(SSD_T *SSD)
{
	uint8_t Local_Errorstate = 0;

	if(SSD->ComType == SSD_COM_ANODE)
	{
		DIO_u8SetPinValue(SSD->EnablePort ,SSD->EnablePin , DIO_u8PIN_HIGH);
	}
	else if (SSD->ComType == SSD_COM_CATHODE)
	{
		DIO_u8SetPinValue(SSD->EnablePort ,SSD->EnablePin , DIO_u8PIN_LOW);

	}

	else
	{
		Local_Errorstate = 1;
	}
	return Local_Errorstate;
}
uint8_t SSD_u8Disable(SSD_T *SSD)
{

	uint8_t Local_Errorstate = 0;

	if(SSD->ComType == SSD_COM_ANODE)
	{
		DIO_u8SetPinValue(SSD->EnablePort ,SSD->EnablePin , DIO_u8PIN_LOW);
	}
	else if (SSD->ComType == SSD_COM_CATHODE)
	{
		DIO_u8SetPinValue(SSD->EnablePort ,SSD->EnablePin , DIO_u8PIN_HIGH);

	}

	else
	{
		Local_Errorstate = 1;
	}
	return Local_Errorstate;
}
