################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/1-MCAL/4.GIE/GIE_program.c 

OBJS += \
./Inc/1-MCAL/4.GIE/GIE_program.o 

C_DEPS += \
./Inc/1-MCAL/4.GIE/GIE_program.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/1-MCAL/4.GIE/%.o Inc/1-MCAL/4.GIE/%.su: ../Inc/1-MCAL/4.GIE/%.c Inc/1-MCAL/4.GIE/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Inc-2f-1-2d-MCAL-2f-4-2e-GIE

clean-Inc-2f-1-2d-MCAL-2f-4-2e-GIE:
	-$(RM) ./Inc/1-MCAL/4.GIE/GIE_program.d ./Inc/1-MCAL/4.GIE/GIE_program.o ./Inc/1-MCAL/4.GIE/GIE_program.su

.PHONY: clean-Inc-2f-1-2d-MCAL-2f-4-2e-GIE

