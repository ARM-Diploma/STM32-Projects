################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/mysigmoid/mysigmoid.c \
../Inc/mysigmoid/mysigmoid_initialize.c \
../Inc/mysigmoid/mysigmoid_terminate.c 

OBJS += \
./Inc/mysigmoid/mysigmoid.o \
./Inc/mysigmoid/mysigmoid_initialize.o \
./Inc/mysigmoid/mysigmoid_terminate.o 

C_DEPS += \
./Inc/mysigmoid/mysigmoid.d \
./Inc/mysigmoid/mysigmoid_initialize.d \
./Inc/mysigmoid/mysigmoid_terminate.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/mysigmoid/%.o Inc/mysigmoid/%.su: ../Inc/mysigmoid/%.c Inc/mysigmoid/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Inc-2f-mysigmoid

clean-Inc-2f-mysigmoid:
	-$(RM) ./Inc/mysigmoid/mysigmoid.d ./Inc/mysigmoid/mysigmoid.o ./Inc/mysigmoid/mysigmoid.su ./Inc/mysigmoid/mysigmoid_initialize.d ./Inc/mysigmoid/mysigmoid_initialize.o ./Inc/mysigmoid/mysigmoid_initialize.su ./Inc/mysigmoid/mysigmoid_terminate.d ./Inc/mysigmoid/mysigmoid_terminate.o ./Inc/mysigmoid/mysigmoid_terminate.su

.PHONY: clean-Inc-2f-mysigmoid

