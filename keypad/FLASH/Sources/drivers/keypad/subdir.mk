################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/drivers/keypad/keypad.c" \

C_SRCS += \
../Sources/drivers/keypad/keypad.c \

OBJS += \
./Sources/drivers/keypad/keypad.o \

C_DEPS += \
./Sources/drivers/keypad/keypad.d \

OBJS_QUOTED += \
"./Sources/drivers/keypad/keypad.o" \

C_DEPS_QUOTED += \
"./Sources/drivers/keypad/keypad.d" \

OBJS_OS_FORMAT += \
./Sources/drivers/keypad/keypad.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/drivers/keypad/keypad.o: ../Sources/drivers/keypad/keypad.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/drivers/keypad/keypad.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/drivers/keypad/keypad.o"
	@echo 'Finished building: $<'
	@echo ' '


