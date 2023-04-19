################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/my_dense/interface/_coder_my_dense_api.c \
../Inc/my_dense/interface/_coder_my_dense_info.c \
../Inc/my_dense/interface/_coder_my_dense_mex.c 

OBJS += \
./Inc/my_dense/interface/_coder_my_dense_api.o \
./Inc/my_dense/interface/_coder_my_dense_info.o \
./Inc/my_dense/interface/_coder_my_dense_mex.o 

C_DEPS += \
./Inc/my_dense/interface/_coder_my_dense_api.d \
./Inc/my_dense/interface/_coder_my_dense_info.d \
./Inc/my_dense/interface/_coder_my_dense_mex.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/my_dense/interface/%.o Inc/my_dense/interface/%.su: ../Inc/my_dense/interface/%.c Inc/my_dense/interface/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Inc-2f-my_dense-2f-interface

clean-Inc-2f-my_dense-2f-interface:
	-$(RM) ./Inc/my_dense/interface/_coder_my_dense_api.d ./Inc/my_dense/interface/_coder_my_dense_api.o ./Inc/my_dense/interface/_coder_my_dense_api.su ./Inc/my_dense/interface/_coder_my_dense_info.d ./Inc/my_dense/interface/_coder_my_dense_info.o ./Inc/my_dense/interface/_coder_my_dense_info.su ./Inc/my_dense/interface/_coder_my_dense_mex.d ./Inc/my_dense/interface/_coder_my_dense_mex.o ./Inc/my_dense/interface/_coder_my_dense_mex.su

.PHONY: clean-Inc-2f-my_dense-2f-interface

