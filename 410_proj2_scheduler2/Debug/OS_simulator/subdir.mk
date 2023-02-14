################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../OS_simulator/simulator.cpp 

OBJS += \
./OS_simulator/simulator.o 

CPP_DEPS += \
./OS_simulator/simulator.d 


# Each subdirectory must supply rules for building sources it contributes
OS_simulator/%.o: ../OS_simulator/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


