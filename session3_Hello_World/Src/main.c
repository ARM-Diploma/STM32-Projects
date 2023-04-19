#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int numbers[] = { 456,345,678,567,890,456,3456,123,765,456,896,456,678,987,000,145,90};

int  someData ;

void array_fill_numbers(int pNumbers[], unsigned int len)
{

	for ( unsigned int i = 0 ; i < len ; i++)
	{
		pNumbers[i] = rand() % 1000;
	}

}

void display_numbers(int *pNumbers, unsigned int len, char *pMessage)
{
	someData=10;
	printf("%s",pMessage);

	for (unsigned i = 0 ; i < len ; i++)
	{
		printf("%5d  ",pNumbers[i]);
	}

	printf("\n");
}


void swap_numbers(int *x,int *y)
{
	//	void (*FuncPtr)(void)=(void*)0x20000008;
	//	FuncPtr();
	someData = 20;
	int temp=*x;
	*x=*y;
	*y=temp;

}


void bubble_sort(int *pNumbers , unsigned int len)
{

	int i,j,flag=0;

	for(i=0;i<len-1;i++)
	{
		flag=0;

		for(j=0;j<len-1-i;j++)
		{
			if(pNumbers[j] > pNumbers[j+1])
			{
				swap_numbers(&pNumbers[j],&pNumbers[j+1]);
				flag=1;
			}
		}

		if(flag==0)
			break;
	}
}

void insertion_sort(int *pNumbers , unsigned int len)
{

	int i,j,num;

	for(i=1 ; i<len ; i++)
	{
		j=i-1;

		num = pNumbers[i];

		while( (j>-1) && (pNumbers[j] > num) )
		{
			pNumbers[j+1] = pNumbers[j];
			j--;
		}

		pNumbers[j+1]=num;
	}


}

int main()
{

	unsigned int len = sizeof(numbers)/sizeof(int);

	printf("Hello World\r\n");

	array_fill_numbers(numbers,len);

	display_numbers(numbers,len,"B-unsorted array :");

	bubble_sort(numbers,len);

	display_numbers(numbers,len,"B-sorted array   :");

	array_fill_numbers(numbers,len);

	display_numbers(numbers,len,"I-unsorted array :");

	insertion_sort(numbers,len);

	display_numbers(numbers,len,"I-sorted array   :");



	return 0;
}

//#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//#include "../Inc/4-LIB/STD_TYPES.h"
//#include "../Inc/4-LIB/BIT_MATH.h"
//
//#include "../Inc/1-MCAL/6.Timers/TIMER_interface.h"
//
//
//void main (void)
//{
//	u8 Local_u8Counter,Local_u8Value;
//	u32 Local_u32Flag = 0;
//
//	Local_u8Counter = 0;
//	TIMER_u8Init(TIMER_2,UP, 1, 0xFFFF);
//
//	while(1)
//	{
//		do
//		{
//			TIMER_u8GetOverflowFlag(TIMER_2, &Local_u8Value);
//		}
//		while(!(Local_u8Value));
//		TIMER_u8ClearOverflowFlag(TIMER_2);
//		Local_u32Flag++;
//
//		if(Local_u32Flag == 1)
//		{
//			TOGGLE_BIT(Local_u8Counter,0);
//			Local_u32Flag = 0;
//		}
//	}
//}
