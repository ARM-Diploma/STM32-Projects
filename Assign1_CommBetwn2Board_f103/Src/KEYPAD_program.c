/***********************************************************************/
/***********************************************************************/
/************************ AUTHER : Hanin Anwar  ************************/
/************************ LAYER  : HAL          ************************/
/************************ SWC    : KEYPAD          ************************/
/************************ VERSION : 1.00         ************************/
/***********************************************************************/
/***********************************************************************/

#include <stdint.h>

#include "../Inc/GPIO_interface.h"
#include "../Inc/KEYPAD_private.h"
#include "../Inc/KEYPAD_config.h"
#include "../Inc/KEYPAD_interface.h"

void KPD_KeyInit(void)
{

	GPIO_PinConfig_T Key_Row0 =
	{
			.Port = PORTA,
			.PinNum = ROW0_PIN,
			.Mode = INPUT,
			.InputOutConfig = PULL_UPDN,
			.PullType = PULL_UP,

	};
	GPIO_PinConfig_T Key_Row1 =
	{
			.Port = PORTA,
			.PinNum = ROW1_PIN,
			.Mode = INPUT,
			.InputOutConfig = PULL_UPDN,
			.PullType = PULL_UP,

	};
	GPIO_PinConfig_T Key_Row2 =
	{
			.Port = PORTA,
			.PinNum = ROW2_PIN,
			.Mode = INPUT,
			.InputOutConfig = PULL_UPDN,
			.PullType = PULL_UP,

	};
	GPIO_PinConfig_T Key_Row3 =
	{
			.Port = PORTA,
			.PinNum = ROW3_PIN,
			.Mode = INPUT,
			.InputOutConfig = PULL_UPDN,
			.PullType = PULL_UP,

	};
	GPIO_PinConfig_T Key_Col0 =
	{
			.Port = PORTB,
			.PinNum = COL0_PIN,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL,

	};

	GPIO_PinConfig_T Key_Col1 =
	{
			.Port = PORTB,
			.PinNum = COL1_PIN,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL,

	};

	GPIO_PinConfig_T Key_Col2 =
	{
			.Port = PORTB,
			.PinNum = COL2_PIN,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL,

	};

	GPIO_PinConfig_T Key_Col3 =
	{
			.Port = PORTB,
			.PinNum = COL3_PIN,
			.Mode = OUTPUT_10MHZ,
			.InputOutConfig = GPO_PUSHPULL,

	};

	GPIO_u8PinInit(&Key_Col0);
	GPIO_u8PinInit(&Key_Col1);
	GPIO_u8PinInit(&Key_Col2);
	GPIO_u8PinInit(&Key_Col3);

	GPIO_u8PinInit(&Key_Row0);
	GPIO_u8PinInit(&Key_Row1);
	GPIO_u8PinInit(&Key_Row2);
	GPIO_u8PinInit(&Key_Row3);


	GPIO_u8SetPinValue(Key_Col0.Port, Key_Col0.PinNum, PIN_HIGH);
	GPIO_u8SetPinValue(Key_Col1.Port, Key_Col1.PinNum, PIN_HIGH);
	GPIO_u8SetPinValue(Key_Col2.Port, Key_Col2.PinNum, PIN_HIGH);
	GPIO_u8SetPinValue(Key_Col3.Port, Key_Col3.PinNum, PIN_HIGH);

}
uint8_t KPD_GetPressedKey(void)
{
	uint8_t Local_u8ColumnIdx , Local_u8RowIdx,Local_u8PinSate;
	uint8_t Local_u8PressedKey = KPD_NO_PRESSED_KEY;

	static uint8_t Local_u8KPDArr[ROW_NUM][COLUMN_NUM] = KPD_ARR_VAL;
	static uint8_t Local_u8ColumnArr[COLUMN_NUM] = {COL0_PIN,COL1_PIN,COL2_PIN,COL3_PIN};
	static uint8_t Local_u8RowArr[ROW_NUM] = {ROW0_PIN,ROW1_PIN,ROW2_PIN,ROW3_PIN};

	for(Local_u8ColumnIdx = 0 ; Local_u8ColumnIdx < COLUMN_NUM ; Local_u8ColumnIdx++)
	{
		/*Activate Current Column*/
		GPIO_u8SetPinValue(KPD_COL_PORT, Local_u8ColumnArr[Local_u8ColumnIdx],PIN_LOW);

		for(Local_u8RowIdx = 0 ; Local_u8RowIdx < ROW_NUM ; Local_u8RowIdx++)
		{
			/*Read The Current Row*/
			GPIO_u8ReadPinValue(KPD_ROW_PORT,Local_u8RowArr[Local_u8RowIdx],&Local_u8PinSate);

			/*Check it the Switch is pressed*/
			if (PIN_LOW == Local_u8PinSate)
			{
				Local_u8PressedKey = Local_u8KPDArr[Local_u8RowIdx][Local_u8ColumnIdx];

				/*Polling(busy waiting) until the key is released*/
				while(PIN_LOW == Local_u8PinSate)
				{
					GPIO_u8ReadPinValue(KPD_ROW_PORT,Local_u8RowArr[Local_u8RowIdx],&Local_u8PinSate);
				}
				return Local_u8PressedKey;
			}

		}

		/*Deactivate Current Column*/
		GPIO_u8SetPinValue(KPD_COL_PORT,Local_u8ColumnArr[Local_u8ColumnIdx],PIN_HIGH);
	}


	return Local_u8PressedKey;
}
