#include <iostream>
#include <array>
#include <utility>
#include <ctime>
#include <random>
#include "EnumAndStruct.h"
#include "BlackJack.h"

int GetCardValue(const Card &card)
{
    int value = static_cast<int>(card.value);
    if (value<=8)
        return value+2;
    else if (value==12)
        return 11;
    else
        return 10;
}
