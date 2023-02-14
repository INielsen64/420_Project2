################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../scheduler/scheduler.cpp \
../scheduler/scheduler_FIFO.cpp \
../scheduler/scheduler_RR.cpp \
../scheduler/scheduler_SRTF.cpp 

OBJS += \
./scheduler/scheduler.o \
./scheduler/scheduler_FIFO.o \
./scheduler/scheduler_RR.o \
./scheduler/scheduler_SRTF.o 

CPP_DEPS += \
./scheduler/scheduler.d \
./scheduler/scheduler_FIFO.d \
./scheduler/scheduler_RR.d \
./scheduler/scheduler_SRTF.d 


# Each subdirectory must supply rules for building sources it contributes
scheduler/%.o: ../scheduler/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


