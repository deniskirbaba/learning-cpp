cmake_minimum_required(VERSION 3.21)
project(blackjack)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(blackjack
        BlackJack.h
        EnumAndStruct.h
        GetCardValue.cpp
        main.cpp
        PlayBlackjack.cpp
        PrintCard.cpp
        PrintDeck.cpp
        ShuffleDeck.cpp
        SwapCards.cpp)
