################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CardManager.cpp \
../src/Main.cpp \
../src/Player.cpp \
../src/Suit.cpp 

OBJS += \
./src/CardManager.o \
./src/Main.o \
./src/Player.o \
./src/Suit.o 

CPP_DEPS += \
./src/CardManager.d \
./src/Main.d \
./src/Player.d \
./src/Suit.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


