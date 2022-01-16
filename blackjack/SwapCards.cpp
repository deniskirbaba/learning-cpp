#include <iostream>
#include <array>
#include <utility>
#include <ctime>
#include <random>
#include "EnumAndStruct.h"
#include "BlackJack.h"

void SwapCards(Card& first,Card& second)
{
	std::swap(first,second);
}
