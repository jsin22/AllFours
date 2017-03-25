#ifndef INCLUDE_CARD_H
#define INCLUDE_CARD_H

#include <string>
#include <iostream>

namespace AllFours {

typedef enum {
	HEARTS = 1,
	SPADES,
	DIAMONDS,
	CLUBS
} Suit;

typedef enum {
	ACE = 1,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING
} Rank;

class Card {

	public:
		Card(const Rank& r, const Suit& s);

		bool isSameSuit(const Card& c) const; 
		bool isSameRank(const Card& c) const; 

		std::string getRankString() const;
		std::string getSuitString() const;

		Rank rank;
		Suit suit;

        friend std::ostream& operator<<(std::ostream&, const Card&);
};

} //AllFours

#endif
