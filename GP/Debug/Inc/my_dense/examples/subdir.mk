################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/my_dense/examples/main.c 

OBJS += \
./Inc/my_dense/examples/main.o 

C_DEPS += \
./Inc/my_dense/examples/main.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/my_dense/examples/%.o Inc/my_dense/examples/%.su: ../Inc/my_dense/examples/%.c Inc/my_dense/examples/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Inc-2f-my_dense-2f-examples

clean-Inc-2f-my_dense-2f-examples:
	-$(RM) ./Inc/my_dense/examples/main.d ./Inc/my_dense/examples/main.o ./Inc/my_dense/examples/main.su

.PHONY: clean-Inc-2f-my_dense-2f-examples

