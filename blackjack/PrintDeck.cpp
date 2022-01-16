#include <iostream>
#include <array>
#include <utility>
#include <ctime>
#include <random>
#include "EnumAndStruct.h"
#include "BlackJack.h"

void PrintDeck(const std::array <Card,52> &deck)
{
	for (const auto &card: deck)
    {
        PrintCard(card);
        std::cout<<' ';
    }
	std::cout<<'\n';
}
