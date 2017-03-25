#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "deck.h"

namespace AllFours {

Deck::Deck()
{
    for(int i = 1; i <= CLUBS; i++) {
		Suit suit = (Suit) i;

		for(int j = 1; j <= KING; j++) {
			Rank rank = (Rank) j;

			cards.push_back(Card(rank,suit));
		}
	}
}


int 
Deck::getRand(int max)
{
    return rand() % max;
}

bool 
Deck::getCardsFromTop(std::vector<Card>* cardsOut, 
                      const unsigned int numOfCards) 
{
	cardsOut->clear();

	if(numOfCards > NUM_OF_CARDS || 
	   numOfCards > cards.size()) {
		std::cout<<"Exceeding num of cards\n";
		return false;
	}

	unsigned int i;
	for(i = 0; i < numOfCards; i++) {
		cardsOut->push_back(getTopCard());
	}

    return true;
}

Card
Deck::getTopCard()
{
    Card c = cards.back();
    cards.pop_back();
    return c;
}

void 
Deck::cutCards() 
{
	int cutIndex = getRand(cards.size());

	std::vector<Card> temp_cards;

	for(unsigned int i = cutIndex; i < cards.size(); i++) {
		temp_cards.push_back(cards[i]);
	}

	for(int i = 0; i < cutIndex; i++) {
		temp_cards.push_back(cards[i]);
	}

    std::swap(cards, temp_cards);
}

void 
Deck::shuffle() 
{
	unsigned int i;
	for(i = 0; i < (2 * cards.size()); i++) { 
		int r1 = getRand(cards.size());
		int r2 = getRand(cards.size());
		if(r1 == r2) {
			continue;
		}

		Card temp = cards[r1];
		cards[r1] = cards[r2];
		cards[r2] = temp;
	}
}


std::ostream& operator<<(std::ostream& o, const Deck& d)
{
    for(unsigned int i = 0; i < d.cards.size(); i++) {
		o<<d.cards[i]<<", ";
		if(((i+1) % 13) == 0) {
			o<<std::endl;
		}
	}

    return o;
}

} //AllFours
