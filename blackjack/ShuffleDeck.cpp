#include <iostream>
#include <array>
#include <utility>
#include <ctime>
#include <random>
#include "EnumAndStruct.h"
#include "BlackJack.h"

void ShuffleDeck(std::array <Card,52> &deck)
{
	using namespace std;
	mt19937 mersenne(static_cast<unsigned int>(time(0)));

	for (auto &card:deck)
	{
		SwapCards(card,deck[mersenne()%52]);
	}
}
