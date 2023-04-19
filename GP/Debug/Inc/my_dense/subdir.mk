################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/my_dense/my_dense.c \
../Inc/my_dense/my_dense_initialize.c \
../Inc/my_dense/my_dense_terminate.c 

OBJS += \
./Inc/my_dense/my_dense.o \
./Inc/my_dense/my_dense_initialize.o \
./Inc/my_dense/my_dense_terminate.o 

C_DEPS += \
./Inc/my_dense/my_dense.d \
./Inc/my_dense/my_dense_initialize.d \
./Inc/my_dense/my_dense_terminate.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/my_dense/%.o Inc/my_dense/%.su: ../Inc/my_dense/%.c Inc/my_dense/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Inc-2f-my_dense

clean-Inc-2f-my_dense:
	-$(RM) ./Inc/my_dense/my_dense.d ./Inc/my_dense/my_dense.o ./Inc/my_dense/my_dense.su ./Inc/my_dense/my_dense_initialize.d ./Inc/my_dense/my_dense_initialize.o ./Inc/my_dense/my_dense_initialize.su ./Inc/my_dense/my_dense_terminate.d ./Inc/my_dense/my_dense_terminate.o ./Inc/my_dense/my_dense_terminate.su

.PHONY: clean-Inc-2f-my_dense

