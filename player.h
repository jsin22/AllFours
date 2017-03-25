#ifndef INCLUDE_PLAYER_H
#define INCLUDE_PLAYER_H

#include <vector>
#include <iostream>
#include "card.h"
#include "team.h"

namespace AllFours {

class Player {
    public:
        Player(Team& t);
        Card getCard();
        bool addCard(const Card&);

        friend std::ostream& operator<<(std::ostream&, const Player&);

        std::vector<Card> hand;
        Team* team;
};

} //AllFours

#endif //INCLUDE_PLAYER_H
