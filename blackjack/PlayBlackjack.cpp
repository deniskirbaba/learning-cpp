#include <iostream>
#include <array>
#include <utility>
#include <ctime>
#include <random>
#include "EnumAndStruct.h"
#include "BlackJack.h"


bool PlayBlackJack(std::array <Card,52> &deck)
{
    using namespace std;

    int dealerscore;
    int playerscore;
    const Card* currentcard = &deck[0];

	ShuffleDeck(deck);

    cout<<"Dealer first card: ";
	PrintCard(*currentcard);
	cout<<'\n';
	dealerscore = GetCardValue(*currentcard++);

	cout<<"Player start cards: ";
	PrintCard(*currentcard);
	cout<<' ';
	playerscore = GetCardValue(*currentcard++);
	PrintCard(*currentcard);
	cout<<'\n';
	playerscore += GetCardValue(*currentcard++);

	while (playerscore<=21)
    {
        cout<<"Your score is "<<playerscore<<'\n'<<"Do you want to take one more card (y or n)?\n";
        char useranswer;
        cin>>useranswer;

        if (useranswer=='y')
        {
                cout<<"You pulled: ";
                PrintCard(*currentcard);
                cout<<'\n';
                playerscore+=GetCardValue(*currentcard++);
        }

        else if (useranswer=='n')
            break;
    }

    if (playerscore>21)
        return 0;

    while (dealerscore<17)
    {
        cout<<"Dealer score: "<<dealerscore<<'\n';
        cout<<"Dealer taker one more card: ";
        PrintCard(*currentcard);
        cout<<'\n';
        dealerscore+=GetCardValue(*currentcard++);
    }

    if (dealerscore>21)
        return 1;

    return (playerscore>dealerscore);
}
