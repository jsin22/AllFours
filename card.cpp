#include "card.h"

namespace AllFours {

static void
getRankString(const Rank rank, 
		      std::string* stringOut) 
{
	switch(rank) {
		case ACE:
			stringOut->append("Ace");
			break;
		case TWO:
			stringOut->append("Two");
			break;
		case THREE:
			stringOut->append("Three");
			break;
		case FOUR:
			stringOut->append("Four");
			break;
		case FIVE:
			stringOut->append("Five");
			break;
		case SIX:
			stringOut->append("Six");
			break;
		case SEVEN:
			stringOut->append("Seven");
			break;
		case EIGHT:
			stringOut->append("Eight");
			break;
		case NINE:
			stringOut->append("Nine");
			break;
		case TEN:
			stringOut->append("Ten");
			break;
		case JACK:
			stringOut->append("Jack");
			break;
		case QUEEN:
			stringOut->append("Queen");
			break;
		case KING:
			stringOut->append("King");
			break;
		default:
			stringOut->append("Unknown");
			break;
	}
}

static void
getSuitString(const Suit suit, 
		      std::string* stringOut)
{
	switch(suit) {
		case HEARTS:
			stringOut->append("Hearts");
			break;
		case SPADES:
			stringOut->append("Spades");
			break;
		case DIAMONDS:
			stringOut->append("Diamonds");
			break;
		case CLUBS:
			stringOut->append("Clubs");
			break;
		default:
			stringOut->append("Unknown");
			break;
	}
}

Card::Card(const Rank& r, const Suit& s) :
	rank(r), suit(s)
{}
		
std::ostream& operator<<(std::ostream& o, const Card& c)
{
	std::string rankStr, suiteStr;
	getRankString(c.rank, &rankStr);
	getSuitString(c.suit, &suiteStr);
	o<<rankStr<<" of "<<suiteStr;
	return o;
}

bool
Card::isSameSuit(const Card& c) const
{
	return (suit == c.suit);
}

bool
Card::isSameRank(const Card& c) const
{
	return (rank == c.rank);
}

} //AllFours
