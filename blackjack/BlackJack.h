#ifndef BLACKJACK_H_INCLUDED
#define BLACKJACK_H_INCLUDED

bool PlayBlackJack(std::array <Card,52> &deck);
int GetCardValue(const Card &card);
void ShuffleDeck(std::array <Card,52> &deck);
void SwapCards(Card& first,Card& second);
void PrintDeck(const std::array <Card,52> &deck);
void PrintCard(const Card& card);

#endif // BLACKJACK_H_INCLUDED
