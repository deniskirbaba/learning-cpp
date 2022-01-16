cmake_minimum_required(VERSION 3.21)
project(tower_fall)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tower_fall
        constants.h
        Function.cpp
        main.cpp
        towerfall.h
        UserInput.cpp)
