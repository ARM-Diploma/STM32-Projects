################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Inc/1-MCAL/8.SPI/SPI_program.c 

OBJS += \
./Core/Inc/1-MCAL/8.SPI/SPI_program.o 

C_DEPS += \
./Core/Inc/1-MCAL/8.SPI/SPI_program.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Inc/1-MCAL/8.SPI/%.o Core/Inc/1-MCAL/8.SPI/%.su Core/Inc/1-MCAL/8.SPI/%.cyclo: ../Core/Inc/1-MCAL/8.SPI/%.c Core/Inc/1-MCAL/8.SPI/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Inc-2f-1-2d-MCAL-2f-8-2e-SPI

clean-Core-2f-Inc-2f-1-2d-MCAL-2f-8-2e-SPI:
	-$(RM) ./Core/Inc/1-MCAL/8.SPI/SPI_program.cyclo ./Core/Inc/1-MCAL/8.SPI/SPI_program.d ./Core/Inc/1-MCAL/8.SPI/SPI_program.o ./Core/Inc/1-MCAL/8.SPI/SPI_program.su

.PHONY: clean-Core-2f-Inc-2f-1-2d-MCAL-2f-8-2e-SPI

