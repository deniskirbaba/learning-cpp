#include <iostream>
#include <array>
#include <utility>
#include <ctime>
#include <random>
#include "EnumAndStruct.h"
#include "BlackJack.h"

void PrintCard(const Card& card)
{
	using namespace std;

	switch(card.value)
	{
		case CARDVALUE_2:
			cout<<'2';
			break;
		case CARDVALUE_3:
			cout<<'3';
			break;
		case CARDVALUE_4:
			cout<<'4';
			break;
		case CARDVALUE_5:
			cout<<'5';
			break;
		case CARDVALUE_6:
			cout<<'6';
			break;
		case CARDVALUE_7:
			cout<<'7';
			break;
		case CARDVALUE_8:
			cout<<'8';
			break;
		case CARDVALUE_9:
			cout<<'9';
			break;
		case CARDVALUE_10:
			cout<<"10";
			break;
		case CARDVALUE_Jack:
			cout<<'J';
			break;
		case CARDVALUE_Queen:
			cout<<'Q';
			break;
		case CARDVALUE_King:
			cout<<'K';
			break;
		case CARDVALUE_Ace:
			cout<<'A';
			break;
	}

	switch(card.suit)
	{
		case CARDSUIT_Spades:
			cout<<'S';
			break;
		case CARDSUIT_Diamonds:
			cout<<'D';
			break;
		case CARDSUIT_Clubs:
			cout<<'C';
			break;
		case CARDSUIT_Hearts:
			cout<<'H';
			break;
	}
}
