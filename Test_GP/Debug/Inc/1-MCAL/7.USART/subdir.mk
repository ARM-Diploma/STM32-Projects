################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/1-MCAL/7.USART/USART_program.c 

OBJS += \
./Inc/1-MCAL/7.USART/USART_program.o 

C_DEPS += \
./Inc/1-MCAL/7.USART/USART_program.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/1-MCAL/7.USART/%.o Inc/1-MCAL/7.USART/%.su: ../Inc/1-MCAL/7.USART/%.c Inc/1-MCAL/7.USART/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Inc-2f-1-2d-MCAL-2f-7-2e-USART

clean-Inc-2f-1-2d-MCAL-2f-7-2e-USART:
	-$(RM) ./Inc/1-MCAL/7.USART/USART_program.d ./Inc/1-MCAL/7.USART/USART_program.o ./Inc/1-MCAL/7.USART/USART_program.su

.PHONY: clean-Inc-2f-1-2d-MCAL-2f-7-2e-USART

