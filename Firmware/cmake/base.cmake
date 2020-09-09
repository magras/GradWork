if( NOT ARM_NONE_EABI_TOOLCHAIN_PATH )
    #set(ARM_NONE_EABI_TOOLCHAIN_PATH "C:/gcc_none_eabi_9_2_1")
    set(ARM_NONE_EABI_TOOLCHAIN_PATH "C:/gcc_none_eabi_10_1_preview")
    message(STATUS "No ARM_NONE_EABI_TOOLCHAIN_PATH specified, using default: " ${ARM_NONE_EABI_TOOLCHAIN_PATH})
else()
    file(TO_CMAKE_PATH "${ARM_NONE_EABI_TOOLCHAIN_PATH}" ARM_NONE_EABI_TOOLCHAIN_PATH)
endif()

if(NOT NORDIC_TARGET_TRIPLET)
    set(NORDIC_TARGET_TRIPLET "arm-none-eabi")
    message(STATUS "No NORDIC_TARGET_TRIPLET specified, using default: " ${NORDIC_TARGET_TRIPLET})
endif()

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)

set(TOOLCHAIN_SYSROOT  "${ARM_NONE_EABI_TOOLCHAIN_PATH}/${NORDIC_TARGET_TRIPLET}")
set(TOOLCHAIN_BIN_PATH "${ARM_NONE_EABI_TOOLCHAIN_PATH}/bin")
set(TOOLCHAIN_INC_PATH "${ARM_NONE_EABI_TOOLCHAIN_PATH}/${NORDIC_TARGET_TRIPLET}/include")
set(TOOLCHAIN_LIB_PATH "${ARM_NONE_EABI_TOOLCHAIN_PATH}/${NORDIC_TARGET_TRIPLET}/lib")


find_program(CMAKE_OBJCOPY NAMES ${NORDIC_TARGET_TRIPLET}-objcopy PATHS ${TOOLCHAIN_BIN_PATH})
find_program(CMAKE_OBJDUMP NAMES ${NORDIC_TARGET_TRIPLET}-objdump PATHS ${TOOLCHAIN_BIN_PATH})
find_program(CMAKE_SIZE NAMES ${NORDIC_TARGET_TRIPLET}-size PATHS ${TOOLCHAIN_BIN_PATH})
find_program(CMAKE_DEBUGGER NAMES ${NORDIC_TARGET_TRIPLET}-gdb PATHS ${TOOLCHAIN_BIN_PATH})
find_program(CMAKE_CPPFILT NAMES ${NORDIC_TARGET_TRIPLET}-c++filt PATHS ${TOOLCHAIN_BIN_PATH})


#include(nordic/sdk)