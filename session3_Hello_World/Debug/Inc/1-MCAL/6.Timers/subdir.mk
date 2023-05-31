################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/1-MCAL/6.Timers/TIMER_program.c 

OBJS += \
./Inc/1-MCAL/6.Timers/TIMER_program.o 

C_DEPS += \
./Inc/1-MCAL/6.Timers/TIMER_program.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/1-MCAL/6.Timers/%.o Inc/1-MCAL/6.Timers/%.su Inc/1-MCAL/6.Timers/%.cyclo: ../Inc/1-MCAL/6.Timers/%.c Inc/1-MCAL/6.Timers/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Inc-2f-1-2d-MCAL-2f-6-2e-Timers

clean-Inc-2f-1-2d-MCAL-2f-6-2e-Timers:
	-$(RM) ./Inc/1-MCAL/6.Timers/TIMER_program.cyclo ./Inc/1-MCAL/6.Timers/TIMER_program.d ./Inc/1-MCAL/6.Timers/TIMER_program.o ./Inc/1-MCAL/6.Timers/TIMER_program.su

.PHONY: clean-Inc-2f-1-2d-MCAL-2f-6-2e-Timers

