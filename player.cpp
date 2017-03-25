#include <iostream>
#include "player.h"

namespace AllFours {

Player::Player(Team& t) : team(&t) {}

Card
Player::getCard()
{
    Card c = hand.back();
    hand.pop_back();
    return c;
}

bool
Player::addCard(const Card& c)
{
    hand.push_back(c);
}

std::ostream& operator<<(std::ostream& o, const Player& p)
{
    for(int i = 0; i < p.hand.size(); ++i) {
        o<<p.hand[i]<<" | ";
    }

    return o;
}

} //AllFours
