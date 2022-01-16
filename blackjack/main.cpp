#include <iostream>
#include <array>
#include <utility>
#include <ctime>
#include <random>
#include "EnumAndStruct.h"
#include "BlackJack.h"

int main()
{
	std::array<Card,52> deck;
	for (int k = 0;k<52;++k)
	{
		deck[k].value=static_cast<CardValue>(k%13);
		deck[k].suit=static_cast<CardSuit>(k%4);
	}

	if (PlayBlackJack(deck))
        std::cout<<"You win!";
    else
        std::cout<<"You lose.";

	return 0;
}
