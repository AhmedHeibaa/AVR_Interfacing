################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/I2C/I2C_Prog.c 

OBJS += \
./MCAL/I2C/I2C_Prog.o 

C_DEPS += \
./MCAL/I2C/I2C_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/I2C/%.o: ../MCAL/I2C/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\E_S_DIPLOMA\NTI_CCGroup\APP" -I"D:\E_S_DIPLOMA\NTI_CCGroup\HAL" -I"D:\E_S_DIPLOMA\NTI_CCGroup\MCAL" -I"D:\E_S_DIPLOMA\NTI_CCGroup\LIB" -I"D:\E_S_DIPLOMA\NTI_CCGroup\APP\Projects" -I"D:\E_S_DIPLOMA\NTI_CCGroup\HAL\Buzzer" -I"D:\E_S_DIPLOMA\NTI_CCGroup\HAL\Keypad" -I"D:\E_S_DIPLOMA\NTI_CCGroup\HAL\LCD" -I"D:\E_S_DIPLOMA\NTI_CCGroup\HAL\LDR" -I"D:\E_S_DIPLOMA\NTI_CCGroup\HAL\LED" -I"D:\E_S_DIPLOMA\NTI_CCGroup\HAL\PushButton" -I"D:\E_S_DIPLOMA\NTI_CCGroup\HAL\Relay" -I"D:\E_S_DIPLOMA\NTI_CCGroup\HAL\SSD" -I"D:\E_S_DIPLOMA\NTI_CCGroup\MCAL\ADC" -I"D:\E_S_DIPLOMA\NTI_CCGroup\MCAL\DIO" -I"D:\E_S_DIPLOMA\NTI_CCGroup\MCAL\EXINT" -I"D:\E_S_DIPLOMA\NTI_CCGroup\MCAL\GIE" -I"D:\E_S_DIPLOMA\NTI_CCGroup\MCAL\I2C" -I"D:\E_S_DIPLOMA\NTI_CCGroup\MCAL\Timer" -I"D:\E_S_DIPLOMA\NTI_CCGroup\MCAL\UART" -I"D:\E_S_DIPLOMA\NTI_CCGroup\MCAL\WDT" -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


