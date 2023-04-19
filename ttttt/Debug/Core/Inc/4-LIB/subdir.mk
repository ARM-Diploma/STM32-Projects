################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Inc/4-LIB/Mapping.c 

OBJS += \
./Core/Inc/4-LIB/Mapping.o 

C_DEPS += \
./Core/Inc/4-LIB/Mapping.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Inc/4-LIB/%.o Core/Inc/4-LIB/%.su Core/Inc/4-LIB/%.cyclo: ../Core/Inc/4-LIB/%.c Core/Inc/4-LIB/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Inc-2f-4-2d-LIB

clean-Core-2f-Inc-2f-4-2d-LIB:
	-$(RM) ./Core/Inc/4-LIB/Mapping.cyclo ./Core/Inc/4-LIB/Mapping.d ./Core/Inc/4-LIB/Mapping.o ./Core/Inc/4-LIB/Mapping.su

.PHONY: clean-Core-2f-Inc-2f-4-2d-LIB

