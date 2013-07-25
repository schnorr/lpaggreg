################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Eval.cpp \
../src/LPAggreg.cpp \
../src/LPAggregWrapper.cpp \
../src/MLPAggregWrapper.cpp \
../src/MatrixLPAggreg.cpp \
../src/Node.cpp \
../src/NodeLPAggreg.cpp \
../src/Quality.cpp \
../src/ScalarLPAggreg.cpp \
../src/VLPAggregWrapper.cpp \
../src/VectorLPAggreg.cpp 

OBJS += \
./src/Eval.o \
./src/LPAggreg.o \
./src/LPAggregWrapper.o \
./src/MLPAggregWrapper.o \
./src/MatrixLPAggreg.o \
./src/Node.o \
./src/NodeLPAggreg.o \
./src/Quality.o \
./src/ScalarLPAggreg.o \
./src/VLPAggregWrapper.o \
./src/VectorLPAggreg.o 

CPP_DEPS += \
./src/Eval.d \
./src/LPAggreg.d \
./src/LPAggregWrapper.d \
./src/MLPAggregWrapper.d \
./src/MatrixLPAggreg.d \
./src/Node.d \
./src/NodeLPAggreg.d \
./src/Quality.d \
./src/ScalarLPAggreg.d \
./src/VLPAggregWrapper.d \
./src/VectorLPAggreg.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O1 -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


