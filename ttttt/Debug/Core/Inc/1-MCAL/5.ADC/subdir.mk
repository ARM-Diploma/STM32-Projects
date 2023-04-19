################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Inc/1-MCAL/5.ADC/ADC_program.c 

OBJS += \
./Core/Inc/1-MCAL/5.ADC/ADC_program.o 

C_DEPS += \
./Core/Inc/1-MCAL/5.ADC/ADC_program.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Inc/1-MCAL/5.ADC/%.o Core/Inc/1-MCAL/5.ADC/%.su: ../Core/Inc/1-MCAL/5.ADC/%.c Core/Inc/1-MCAL/5.ADC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Inc-2f-1-2d-MCAL-2f-5-2e-ADC

clean-Core-2f-Inc-2f-1-2d-MCAL-2f-5-2e-ADC:
	-$(RM) ./Core/Inc/1-MCAL/5.ADC/ADC_program.d ./Core/Inc/1-MCAL/5.ADC/ADC_program.o ./Core/Inc/1-MCAL/5.ADC/ADC_program.su

.PHONY: clean-Core-2f-Inc-2f-1-2d-MCAL-2f-5-2e-ADC

