#ifndef FEAT_EXT_H_
#define FEAT_EXT_H_


uint32_t FEAT_EXT_u32_SlopeSignChange(uint32_t *Copy_int32Data ,uint32_t Copy_int32_Size);

uint32_t FEAT_EXT_u32_ZeroCrossing(uint32_t *Copy_u32Data ,uint32_t Copy_u32_Size);

uint32_t FEAT_EXT_u32_WaveformLength(uint32_t *Copy_u32Data ,uint32_t Copy_u32_Size);

float FEAT_EXT_f32_RMS(float Copy_f32_Variance);

float FEAT_EXT_f32_Variance(uint32_t *Copy_u32Data ,uint32_t Copy_u32_Size);

float FEAT_EXT_f32_Mean(uint32_t *Copy_u32Data ,uint32_t Copy_u32_Size);

float FEAT_EXT_f32_MeanAbsolute(uint32_t *Copy_u32Data ,uint32_t Copy_u32_Size);

#endif
