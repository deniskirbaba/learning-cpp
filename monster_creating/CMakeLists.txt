cmake_minimum_required(VERSION 3.21)
project(monster_creating)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(monster_creating
        CreateMonster.cpp
        FromIntToMonsterType.cpp
        FromMonsterToInt.cpp
        main.cpp
        MonsterCreating.h
        MonsterTypeAndMonster.h
        NumberOfMonsters.cpp
        PrintMonster.cpp)
