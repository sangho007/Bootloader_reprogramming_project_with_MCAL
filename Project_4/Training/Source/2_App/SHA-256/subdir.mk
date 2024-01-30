################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Source/2_App/SHA-256/KISA_SHA256.c 

OBJS += \
./Source/2_App/SHA-256/KISA_SHA256.o 

COMPILED_SRCS += \
./Source/2_App/SHA-256/KISA_SHA256.src 

C_DEPS += \
./Source/2_App/SHA-256/KISA_SHA256.d 


# Each subdirectory must supply rules for building sources it contributes
Source/2_App/SHA-256/%.src: ../Source/2_App/SHA-256/%.c Source/2_App/SHA-256/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING C/C++ Compiler'
	cctc -D_TASKING_C_TRICORE_ "-fD:/OTA_Traning/Project_4/Training/TASKING_C_C___Compiler-Include_paths.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc23x -o "$@"  "$<"  -cs --misrac-version=2012 -N0 -Z0 -Y0 2>&1;
	@echo 'Finished building: $<'
	@echo ' '

Source/2_App/SHA-256/%.o: ./Source/2_App/SHA-256/%.src Source/2_App/SHA-256/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING Assembler'
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<" --list-format=L1 --optimize=gs
	@echo 'Finished building: $<'
	@echo ' '


