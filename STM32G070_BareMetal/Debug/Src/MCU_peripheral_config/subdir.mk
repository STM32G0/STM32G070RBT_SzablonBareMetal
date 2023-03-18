################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/MCU_peripheral_config/clock_config.c \
../Src/MCU_peripheral_config/pin_config.c \
../Src/MCU_peripheral_config/system_config.c 

OBJS += \
./Src/MCU_peripheral_config/clock_config.o \
./Src/MCU_peripheral_config/pin_config.o \
./Src/MCU_peripheral_config/system_config.o 

C_DEPS += \
./Src/MCU_peripheral_config/clock_config.d \
./Src/MCU_peripheral_config/pin_config.d \
./Src/MCU_peripheral_config/system_config.d 


# Each subdirectory must supply rules for building sources it contributes
Src/MCU_peripheral_config/%.o Src/MCU_peripheral_config/%.su: ../Src/MCU_peripheral_config/%.c Src/MCU_peripheral_config/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DSTM32G070RBTx -DSTM32 -DSTM32G0 -DSTM32G070xx -c -I../Inc -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -I../Inc/MCU_peripheral_config -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src-2f-MCU_peripheral_config

clean-Src-2f-MCU_peripheral_config:
	-$(RM) ./Src/MCU_peripheral_config/clock_config.d ./Src/MCU_peripheral_config/clock_config.o ./Src/MCU_peripheral_config/clock_config.su ./Src/MCU_peripheral_config/pin_config.d ./Src/MCU_peripheral_config/pin_config.o ./Src/MCU_peripheral_config/pin_config.su ./Src/MCU_peripheral_config/system_config.d ./Src/MCU_peripheral_config/system_config.o ./Src/MCU_peripheral_config/system_config.su

.PHONY: clean-Src-2f-MCU_peripheral_config

