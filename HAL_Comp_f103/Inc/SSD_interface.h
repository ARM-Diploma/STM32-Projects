/********************* *************************************************/
/***********************************************************************/
/************************ AUTHER : Hanin Anwar  ************************/
/************************ LAYER  : HAL          ************************/
/************************ SWC    : SSD          ************************/
/************************ VERSIO : 1.00         ************************/
/***********************************************************************/
/***********************************************************************/


#ifndef  SSD_INTERFACE_H_
#define  SSD_INTERFACE_H_


#define SSD_COM_ANODE	1
#define SSD_COM_CATHODE	0


typedef enum
{
	SSD_NUM0,
	SSD_NUM1,
	SSD_NUM2,
	SSD_NUM3,
	SSD_NUM4,
	SSD_NUM5,
	SSD_NUM6,
	SSD_NUM7,
	SSD_NUM8,
	SSD_NUM9

}SSD_Num_T;

typedef struct
{
	uint8_t Port;
	uint8_t EnablePort;
	uint8_t EnablePin;
	uint8_t ComType;

}SSD_T;

uint8_t SSD_u8Init(void);
uint8_t SSD_u8SetNumber(uint8_t Copy_u8Number , SSD_T *SSD);
uint8_t SSD_u8Enable(SSD_T *SSD);
uint8_t SSD_u8Disable(SSD_T *SSD);

#endif
