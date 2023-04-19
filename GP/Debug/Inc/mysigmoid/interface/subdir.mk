################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/mysigmoid/interface/_coder_mysigmoid_api.c \
../Inc/mysigmoid/interface/_coder_mysigmoid_info.c \
../Inc/mysigmoid/interface/_coder_mysigmoid_mex.c 

OBJS += \
./Inc/mysigmoid/interface/_coder_mysigmoid_api.o \
./Inc/mysigmoid/interface/_coder_mysigmoid_info.o \
./Inc/mysigmoid/interface/_coder_mysigmoid_mex.o 

C_DEPS += \
./Inc/mysigmoid/interface/_coder_mysigmoid_api.d \
./Inc/mysigmoid/interface/_coder_mysigmoid_info.d \
./Inc/mysigmoid/interface/_coder_mysigmoid_mex.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/mysigmoid/interface/%.o Inc/mysigmoid/interface/%.su: ../Inc/mysigmoid/interface/%.c Inc/mysigmoid/interface/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Inc-2f-mysigmoid-2f-interface

clean-Inc-2f-mysigmoid-2f-interface:
	-$(RM) ./Inc/mysigmoid/interface/_coder_mysigmoid_api.d ./Inc/mysigmoid/interface/_coder_mysigmoid_api.o ./Inc/mysigmoid/interface/_coder_mysigmoid_api.su ./Inc/mysigmoid/interface/_coder_mysigmoid_info.d ./Inc/mysigmoid/interface/_coder_mysigmoid_info.o ./Inc/mysigmoid/interface/_coder_mysigmoid_info.su ./Inc/mysigmoid/interface/_coder_mysigmoid_mex.d ./Inc/mysigmoid/interface/_coder_mysigmoid_mex.o ./Inc/mysigmoid/interface/_coder_mysigmoid_mex.su

.PHONY: clean-Inc-2f-mysigmoid-2f-interface

