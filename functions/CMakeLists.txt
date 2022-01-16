cmake_minimum_required(VERSION 3.21)
project(functions)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(functions
        addition.cpp
        constants.h
        doubleNumber.cpp
        getValueFromUser.cpp
        header.h
        IsEqual.cpp
        IsEven.cpp
        main.cpp
        sizeOfTypes.cpp)
