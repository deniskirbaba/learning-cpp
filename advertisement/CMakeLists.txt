cmake_minimum_required(VERSION 3.21)
project(advertisement)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(advertisement
        CalculationTotalEarnings.cpp
        Functions.h
        main.cpp
        OutputResult.cpp
        Structs.h
        UserInput.cpp)
