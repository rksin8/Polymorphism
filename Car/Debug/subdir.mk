################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Jeep.cpp \
../Main.cpp \
../SUV.cpp \
../Sedan.cpp \
../Van.cpp 

OBJS += \
./Jeep.o \
./Main.o \
./SUV.o \
./Sedan.o \
./Van.o 

CPP_DEPS += \
./Jeep.d \
./Main.d \
./SUV.d \
./Sedan.d \
./Van.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


