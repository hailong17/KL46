################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/main1.c" \
"../Sources/sa_mtb.c" \

C_SRCS += \
../Sources/main1.c \
../Sources/sa_mtb.c \

OBJS += \
./Sources/main1.o \
./Sources/sa_mtb.o \

C_DEPS += \
./Sources/main1.d \
./Sources/sa_mtb.d \

OBJS_QUOTED += \
"./Sources/main1.o" \
"./Sources/sa_mtb.o" \

C_DEPS_QUOTED += \
"./Sources/main1.d" \
"./Sources/sa_mtb.d" \

OBJS_OS_FORMAT += \
./Sources/main1.o \
./Sources/sa_mtb.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/main1.o: ../Sources/main1.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/main1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/main1.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/sa_mtb.o: ../Sources/sa_mtb.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/sa_mtb.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/sa_mtb.o"
	@echo 'Finished building: $<'
	@echo ' '


