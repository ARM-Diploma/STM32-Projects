################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Inc/1-MCAL/4.GIE/GIE_program.c 

OBJS += \
./Core/Inc/1-MCAL/4.GIE/GIE_program.o 

C_DEPS += \
./Core/Inc/1-MCAL/4.GIE/GIE_program.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Inc/1-MCAL/4.GIE/%.o Core/Inc/1-MCAL/4.GIE/%.su: ../Core/Inc/1-MCAL/4.GIE/%.c Core/Inc/1-MCAL/4.GIE/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Inc-2f-1-2d-MCAL-2f-4-2e-GIE

clean-Core-2f-Inc-2f-1-2d-MCAL-2f-4-2e-GIE:
	-$(RM) ./Core/Inc/1-MCAL/4.GIE/GIE_program.d ./Core/Inc/1-MCAL/4.GIE/GIE_program.o ./Core/Inc/1-MCAL/4.GIE/GIE_program.su

.PHONY: clean-Core-2f-Inc-2f-1-2d-MCAL-2f-4-2e-GIE

