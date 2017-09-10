################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Circle.cpp \
../Ellipse.cpp \
../Main.cpp \
../Rectangle.cpp \
../Square.cpp 

OBJS += \
./Circle.o \
./Ellipse.o \
./Main.o \
./Rectangle.o \
./Square.o 

CPP_DEPS += \
./Circle.d \
./Ellipse.d \
./Main.d \
./Rectangle.d \
./Square.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++11 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


