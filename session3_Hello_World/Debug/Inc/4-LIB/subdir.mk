################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/4-LIB/Mapping.c 

OBJS += \
./Inc/4-LIB/Mapping.o 

C_DEPS += \
./Inc/4-LIB/Mapping.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/4-LIB/%.o Inc/4-LIB/%.su Inc/4-LIB/%.cyclo: ../Inc/4-LIB/%.c Inc/4-LIB/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Inc-2f-4-2d-LIB

clean-Inc-2f-4-2d-LIB:
	-$(RM) ./Inc/4-LIB/Mapping.cyclo ./Inc/4-LIB/Mapping.d ./Inc/4-LIB/Mapping.o ./Inc/4-LIB/Mapping.su

.PHONY: clean-Inc-2f-4-2d-LIB

