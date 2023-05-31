################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../X-CUBE-AI/App/aiPbIO.c \
../X-CUBE-AI/App/aiPbMemRWServices.c \
../X-CUBE-AI/App/aiPbMgr.c \
../X-CUBE-AI/App/aiTestHelper.c \
../X-CUBE-AI/App/aiTestUtility.c \
../X-CUBE-AI/App/aiValidation.c \
../X-CUBE-AI/App/app_x-cube-ai.c \
../X-CUBE-AI/App/lc_print.c \
../X-CUBE-AI/App/pb_common.c \
../X-CUBE-AI/App/pb_decode.c \
../X-CUBE-AI/App/pb_encode.c \
../X-CUBE-AI/App/stm32msg.pb.c \
../X-CUBE-AI/App/syscalls.c \
../X-CUBE-AI/App/test1.c \
../X-CUBE-AI/App/test1_data.c \
../X-CUBE-AI/App/test1_data_params.c 

OBJS += \
./X-CUBE-AI/App/aiPbIO.o \
./X-CUBE-AI/App/aiPbMemRWServices.o \
./X-CUBE-AI/App/aiPbMgr.o \
./X-CUBE-AI/App/aiTestHelper.o \
./X-CUBE-AI/App/aiTestUtility.o \
./X-CUBE-AI/App/aiValidation.o \
./X-CUBE-AI/App/app_x-cube-ai.o \
./X-CUBE-AI/App/lc_print.o \
./X-CUBE-AI/App/pb_common.o \
./X-CUBE-AI/App/pb_decode.o \
./X-CUBE-AI/App/pb_encode.o \
./X-CUBE-AI/App/stm32msg.pb.o \
./X-CUBE-AI/App/syscalls.o \
./X-CUBE-AI/App/test1.o \
./X-CUBE-AI/App/test1_data.o \
./X-CUBE-AI/App/test1_data_params.o 

C_DEPS += \
./X-CUBE-AI/App/aiPbIO.d \
./X-CUBE-AI/App/aiPbMemRWServices.d \
./X-CUBE-AI/App/aiPbMgr.d \
./X-CUBE-AI/App/aiTestHelper.d \
./X-CUBE-AI/App/aiTestUtility.d \
./X-CUBE-AI/App/aiValidation.d \
./X-CUBE-AI/App/app_x-cube-ai.d \
./X-CUBE-AI/App/lc_print.d \
./X-CUBE-AI/App/pb_common.d \
./X-CUBE-AI/App/pb_decode.d \
./X-CUBE-AI/App/pb_encode.d \
./X-CUBE-AI/App/stm32msg.pb.d \
./X-CUBE-AI/App/syscalls.d \
./X-CUBE-AI/App/test1.d \
./X-CUBE-AI/App/test1_data.d \
./X-CUBE-AI/App/test1_data_params.d 


# Each subdirectory must supply rules for building sources it contributes
X-CUBE-AI/App/%.o X-CUBE-AI/App/%.su X-CUBE-AI/App/%.cyclo: ../X-CUBE-AI/App/%.c X-CUBE-AI/App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../X-CUBE-AI/App -I../X-CUBE-AI -I../X-CUBE-AI/Target -I../Middlewares/ST/AI/Inc -I"C:/Users/Hanin Anwar/STM32Cube/Repository/STM32Cube_FW_F4_V1.27.1/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/Hanin Anwar/STM32Cube/Repository/STM32Cube_FW_F4_V1.27.1/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"C:/Users/Hanin Anwar/STM32Cube/Repository/STM32Cube_FW_F4_V1.27.1/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Hanin Anwar/STM32Cube/Repository/STM32Cube_FW_F4_V1.27.1/Drivers/CMSIS/Include" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-X-2d-CUBE-2d-AI-2f-App

clean-X-2d-CUBE-2d-AI-2f-App:
	-$(RM) ./X-CUBE-AI/App/aiPbIO.cyclo ./X-CUBE-AI/App/aiPbIO.d ./X-CUBE-AI/App/aiPbIO.o ./X-CUBE-AI/App/aiPbIO.su ./X-CUBE-AI/App/aiPbMemRWServices.cyclo ./X-CUBE-AI/App/aiPbMemRWServices.d ./X-CUBE-AI/App/aiPbMemRWServices.o ./X-CUBE-AI/App/aiPbMemRWServices.su ./X-CUBE-AI/App/aiPbMgr.cyclo ./X-CUBE-AI/App/aiPbMgr.d ./X-CUBE-AI/App/aiPbMgr.o ./X-CUBE-AI/App/aiPbMgr.su ./X-CUBE-AI/App/aiTestHelper.cyclo ./X-CUBE-AI/App/aiTestHelper.d ./X-CUBE-AI/App/aiTestHelper.o ./X-CUBE-AI/App/aiTestHelper.su ./X-CUBE-AI/App/aiTestUtility.cyclo ./X-CUBE-AI/App/aiTestUtility.d ./X-CUBE-AI/App/aiTestUtility.o ./X-CUBE-AI/App/aiTestUtility.su ./X-CUBE-AI/App/aiValidation.cyclo ./X-CUBE-AI/App/aiValidation.d ./X-CUBE-AI/App/aiValidation.o ./X-CUBE-AI/App/aiValidation.su ./X-CUBE-AI/App/app_x-cube-ai.cyclo ./X-CUBE-AI/App/app_x-cube-ai.d ./X-CUBE-AI/App/app_x-cube-ai.o ./X-CUBE-AI/App/app_x-cube-ai.su ./X-CUBE-AI/App/lc_print.cyclo ./X-CUBE-AI/App/lc_print.d ./X-CUBE-AI/App/lc_print.o ./X-CUBE-AI/App/lc_print.su ./X-CUBE-AI/App/pb_common.cyclo ./X-CUBE-AI/App/pb_common.d ./X-CUBE-AI/App/pb_common.o ./X-CUBE-AI/App/pb_common.su ./X-CUBE-AI/App/pb_decode.cyclo ./X-CUBE-AI/App/pb_decode.d ./X-CUBE-AI/App/pb_decode.o ./X-CUBE-AI/App/pb_decode.su ./X-CUBE-AI/App/pb_encode.cyclo ./X-CUBE-AI/App/pb_encode.d ./X-CUBE-AI/App/pb_encode.o ./X-CUBE-AI/App/pb_encode.su ./X-CUBE-AI/App/stm32msg.pb.cyclo ./X-CUBE-AI/App/stm32msg.pb.d ./X-CUBE-AI/App/stm32msg.pb.o ./X-CUBE-AI/App/stm32msg.pb.su ./X-CUBE-AI/App/syscalls.cyclo ./X-CUBE-AI/App/syscalls.d ./X-CUBE-AI/App/syscalls.o ./X-CUBE-AI/App/syscalls.su ./X-CUBE-AI/App/test1.cyclo ./X-CUBE-AI/App/test1.d ./X-CUBE-AI/App/test1.o ./X-CUBE-AI/App/test1.su ./X-CUBE-AI/App/test1_data.cyclo ./X-CUBE-AI/App/test1_data.d ./X-CUBE-AI/App/test1_data.o ./X-CUBE-AI/App/test1_data.su ./X-CUBE-AI/App/test1_data_params.cyclo ./X-CUBE-AI/App/test1_data_params.d ./X-CUBE-AI/App/test1_data_params.o ./X-CUBE-AI/App/test1_data_params.su

.PHONY: clean-X-2d-CUBE-2d-AI-2f-App

