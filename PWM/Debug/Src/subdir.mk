################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Mapping.c \
../Src/PWM.c \
../Src/gpio.c \
../Src/main.c \
../Src/servo.c \
../Src/stm32f4xx_hal.c \
../Src/stm32f4xx_hal_cortex.c \
../Src/stm32f4xx_hal_dma.c \
../Src/stm32f4xx_hal_dma_ex.c \
../Src/stm32f4xx_hal_exti.c \
../Src/stm32f4xx_hal_flash.c \
../Src/stm32f4xx_hal_flash_ex.c \
../Src/stm32f4xx_hal_flash_ramfunc.c \
../Src/stm32f4xx_hal_gpio.c \
../Src/stm32f4xx_hal_msp.c \
../Src/stm32f4xx_hal_pwr.c \
../Src/stm32f4xx_hal_pwr_ex.c \
../Src/stm32f4xx_hal_rcc.c \
../Src/stm32f4xx_hal_rcc_ex.c \
../Src/stm32f4xx_hal_tim.c \
../Src/stm32f4xx_hal_tim_ex.c \
../Src/stm32f4xx_it.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/system_stm32f4xx.c \
../Src/tim.c 

OBJS += \
./Src/Mapping.o \
./Src/PWM.o \
./Src/gpio.o \
./Src/main.o \
./Src/servo.o \
./Src/stm32f4xx_hal.o \
./Src/stm32f4xx_hal_cortex.o \
./Src/stm32f4xx_hal_dma.o \
./Src/stm32f4xx_hal_dma_ex.o \
./Src/stm32f4xx_hal_exti.o \
./Src/stm32f4xx_hal_flash.o \
./Src/stm32f4xx_hal_flash_ex.o \
./Src/stm32f4xx_hal_flash_ramfunc.o \
./Src/stm32f4xx_hal_gpio.o \
./Src/stm32f4xx_hal_msp.o \
./Src/stm32f4xx_hal_pwr.o \
./Src/stm32f4xx_hal_pwr_ex.o \
./Src/stm32f4xx_hal_rcc.o \
./Src/stm32f4xx_hal_rcc_ex.o \
./Src/stm32f4xx_hal_tim.o \
./Src/stm32f4xx_hal_tim_ex.o \
./Src/stm32f4xx_it.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/system_stm32f4xx.o \
./Src/tim.o 

C_DEPS += \
./Src/Mapping.d \
./Src/PWM.d \
./Src/gpio.d \
./Src/main.d \
./Src/servo.d \
./Src/stm32f4xx_hal.d \
./Src/stm32f4xx_hal_cortex.d \
./Src/stm32f4xx_hal_dma.d \
./Src/stm32f4xx_hal_dma_ex.d \
./Src/stm32f4xx_hal_exti.d \
./Src/stm32f4xx_hal_flash.d \
./Src/stm32f4xx_hal_flash_ex.d \
./Src/stm32f4xx_hal_flash_ramfunc.d \
./Src/stm32f4xx_hal_gpio.d \
./Src/stm32f4xx_hal_msp.d \
./Src/stm32f4xx_hal_pwr.d \
./Src/stm32f4xx_hal_pwr_ex.d \
./Src/stm32f4xx_hal_rcc.d \
./Src/stm32f4xx_hal_rcc_ex.d \
./Src/stm32f4xx_hal_tim.d \
./Src/stm32f4xx_hal_tim_ex.d \
./Src/stm32f4xx_it.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/system_stm32f4xx.d \
./Src/tim.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/Mapping.cyclo ./Src/Mapping.d ./Src/Mapping.o ./Src/Mapping.su ./Src/PWM.cyclo ./Src/PWM.d ./Src/PWM.o ./Src/PWM.su ./Src/gpio.cyclo ./Src/gpio.d ./Src/gpio.o ./Src/gpio.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/servo.cyclo ./Src/servo.d ./Src/servo.o ./Src/servo.su ./Src/stm32f4xx_hal.cyclo ./Src/stm32f4xx_hal.d ./Src/stm32f4xx_hal.o ./Src/stm32f4xx_hal.su ./Src/stm32f4xx_hal_cortex.cyclo ./Src/stm32f4xx_hal_cortex.d ./Src/stm32f4xx_hal_cortex.o ./Src/stm32f4xx_hal_cortex.su ./Src/stm32f4xx_hal_dma.cyclo ./Src/stm32f4xx_hal_dma.d ./Src/stm32f4xx_hal_dma.o ./Src/stm32f4xx_hal_dma.su ./Src/stm32f4xx_hal_dma_ex.cyclo ./Src/stm32f4xx_hal_dma_ex.d ./Src/stm32f4xx_hal_dma_ex.o ./Src/stm32f4xx_hal_dma_ex.su ./Src/stm32f4xx_hal_exti.cyclo ./Src/stm32f4xx_hal_exti.d ./Src/stm32f4xx_hal_exti.o ./Src/stm32f4xx_hal_exti.su ./Src/stm32f4xx_hal_flash.cyclo ./Src/stm32f4xx_hal_flash.d ./Src/stm32f4xx_hal_flash.o ./Src/stm32f4xx_hal_flash.su ./Src/stm32f4xx_hal_flash_ex.cyclo ./Src/stm32f4xx_hal_flash_ex.d ./Src/stm32f4xx_hal_flash_ex.o ./Src/stm32f4xx_hal_flash_ex.su ./Src/stm32f4xx_hal_flash_ramfunc.cyclo ./Src/stm32f4xx_hal_flash_ramfunc.d ./Src/stm32f4xx_hal_flash_ramfunc.o ./Src/stm32f4xx_hal_flash_ramfunc.su ./Src/stm32f4xx_hal_gpio.cyclo ./Src/stm32f4xx_hal_gpio.d ./Src/stm32f4xx_hal_gpio.o ./Src/stm32f4xx_hal_gpio.su ./Src/stm32f4xx_hal_msp.cyclo ./Src/stm32f4xx_hal_msp.d ./Src/stm32f4xx_hal_msp.o ./Src/stm32f4xx_hal_msp.su ./Src/stm32f4xx_hal_pwr.cyclo ./Src/stm32f4xx_hal_pwr.d ./Src/stm32f4xx_hal_pwr.o ./Src/stm32f4xx_hal_pwr.su ./Src/stm32f4xx_hal_pwr_ex.cyclo ./Src/stm32f4xx_hal_pwr_ex.d ./Src/stm32f4xx_hal_pwr_ex.o ./Src/stm32f4xx_hal_pwr_ex.su ./Src/stm32f4xx_hal_rcc.cyclo ./Src/stm32f4xx_hal_rcc.d ./Src/stm32f4xx_hal_rcc.o ./Src/stm32f4xx_hal_rcc.su ./Src/stm32f4xx_hal_rcc_ex.cyclo ./Src/stm32f4xx_hal_rcc_ex.d ./Src/stm32f4xx_hal_rcc_ex.o ./Src/stm32f4xx_hal_rcc_ex.su ./Src/stm32f4xx_hal_tim.cyclo ./Src/stm32f4xx_hal_tim.d ./Src/stm32f4xx_hal_tim.o ./Src/stm32f4xx_hal_tim.su ./Src/stm32f4xx_hal_tim_ex.cyclo ./Src/stm32f4xx_hal_tim_ex.d ./Src/stm32f4xx_hal_tim_ex.o ./Src/stm32f4xx_hal_tim_ex.su ./Src/stm32f4xx_it.cyclo ./Src/stm32f4xx_it.d ./Src/stm32f4xx_it.o ./Src/stm32f4xx_it.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su ./Src/system_stm32f4xx.cyclo ./Src/system_stm32f4xx.d ./Src/system_stm32f4xx.o ./Src/system_stm32f4xx.su ./Src/tim.cyclo ./Src/tim.d ./Src/tim.o ./Src/tim.su

.PHONY: clean-Src

