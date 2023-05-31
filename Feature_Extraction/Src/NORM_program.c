#include <float.h>
#include <stdint.h>

#include "NORM_interface.h"
#include "NORM_private.h"


float NORM_f32_SlopeSignChange(uint8_t Copy_u8SensorNum , uint32_t Copy_u32SSC)
{
	float Local_f32_NormSSC;

	switch(Copy_u8SensorNum)
	{
	case SNS1 : Local_f32_NormSSC = (Copy_u32SSC - SNS1_SSC_MEAN) / SNS1_SSC_SD; break;
	case SNS2 : Local_f32_NormSSC = (Copy_u32SSC - SNS2_SSC_MEAN) / SNS2_SSC_SD; break;
	case SNS3 : Local_f32_NormSSC = (Copy_u32SSC - SNS3_SSC_MEAN) / SNS3_SSC_SD; break;
	}

	return Local_f32_NormSSC;;

}

float NORM_f32_ZeroCrossing(uint8_t Copy_u8SensorNum , uint32_t Copy_u32zeroCross)
{
	float Local_f32_NormZC;;

	switch(Copy_u8SensorNum)
	{
	case SNS1 : Local_f32_NormZC = (Copy_u32zeroCross - SNS1_ZC_MEAN) / SNS1_ZC_SD; break;
	case SNS2 : Local_f32_NormZC = (Copy_u32zeroCross - SNS2_ZC_MEAN) / SNS2_ZC_SD; break;
	case SNS3 : Local_f32_NormZC = (Copy_u32zeroCross - SNS3_ZC_MEAN) / SNS3_ZC_SD; break;
	}

	return Local_f32_NormZC;;
}

float NORM_f32_WaveformLength(uint8_t Copy_u8SensorNum , uint32_t Copy_u3WaveLength)
{
	float Local_f32_NormWVL;

	switch(Copy_u8SensorNum)
	{
	case SNS1 : Local_f32_NormWVL = (Copy_u3WaveLength - SNS1_WVL_MEAN) / SNS1_WVL_SD; break;
	case SNS2 : Local_f32_NormWVL = (Copy_u3WaveLength - SNS2_WVL_MEAN) / SNS2_WVL_SD; break;
	case SNS3 : Local_f32_NormWVL = (Copy_u3WaveLength - SNS3_WVL_MEAN) / SNS3_WVL_SD; break;
	}

	return Local_f32_NormWVL;
}
float NORM_f32_RMS(uint8_t Copy_u8SensorNum , float Copy_f32RMS)
{
	float Local_f32_NormRMS;

	switch(Copy_u8SensorNum)
	{
	case SNS1 : Local_f32_NormRMS = (Copy_f32RMS - SNS1_RMS_MEAN) / SNS1_RMS_SD; break;
	case SNS2 : Local_f32_NormRMS = (Copy_f32RMS - SNS2_RMS_MEAN) / SNS2_RMS_SD; break;
	case SNS3 : Local_f32_NormRMS = (Copy_f32RMS - SNS3_RMS_MEAN) / SNS3_RMS_SD; break;
	}

	return Local_f32_NormRMS;
}

float NORM_f32_Variance(uint8_t Copy_u8SensorNum , float Copy_f32Variance)
{
	float Local_f32_NormVar;

	switch(Copy_u8SensorNum)
	{
	case SNS1 : Local_f32_NormVar = (Copy_f32Variance - SNS1_VAR_MEAN) / SNS1_VAR_SD; break;
	case SNS2 : Local_f32_NormVar = (Copy_f32Variance - SNS2_VAR_MEAN) / SNS2_VAR_SD; break;
	case SNS3 : Local_f32_NormVar = (Copy_f32Variance - SNS3_VAR_MEAN) / SNS3_VAR_SD; break;
	}

	return Local_f32_NormVar;
}

float NORM_f32_Mean(uint8_t Copy_u8SensorNum , float Copy_f32Mean)
{
	float Local_f32_NormMean;

	switch(Copy_u8SensorNum)
	{
	case SNS1 : Local_f32_NormMean= (Copy_f32Mean - SNS1_MEAN_MEAN) / SNS1_MEAN_SD; break;
	case SNS2 : Local_f32_NormMean= (Copy_f32Mean - SNS2_MEAN_MEAN) / SNS2_MEAN_SD; break;
	case SNS3 : Local_f32_NormMean= (Copy_f32Mean - SNS3_MEAN_MEAN) / SNS3_MEAN_SD; break;
	}

	return Local_f32_NormMean;
}



