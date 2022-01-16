#ifndef ENUMANDSTRUCT_H_INCLUDED
#define ENUMANDSTRUCT_H_INCLUDED
#include <iostream>

enum CardValue
{
	CARDVALUE_2,
	CARDVALUE_3,
	CARDVALUE_4,
	CARDVALUE_5,
	CARDVALUE_6,
	CARDVALUE_7,
	CARDVALUE_8,
	CARDVALUE_9,
	CARDVALUE_10,
	CARDVALUE_Jack,
	CARDVALUE_Queen,
	CARDVALUE_King,
	CARDVALUE_Ace,
	LengthCardValue,
};

enum CardSuit
{
	CARDSUIT_Spades,
	CARDSUIT_Clubs,
	CARDSUIT_Hearts,
	CARDSUIT_Diamonds,
	LengthCardSuit,
};

struct Card
{
	CardValue value;
	CardSuit suit;
};

#endif // ENUMANDSTRUCT_H_INCLUDED
