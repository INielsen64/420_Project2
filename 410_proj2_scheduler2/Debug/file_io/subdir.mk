################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../file_io/file_io.cpp \
../file_io/joblist.cpp 

OBJS += \
./file_io/file_io.o \
./file_io/joblist.o 

CPP_DEPS += \
./file_io/file_io.d \
./file_io/joblist.d 


# Each subdirectory must supply rules for building sources it contributes
file_io/%.o: ../file_io/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


