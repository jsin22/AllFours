#ifndef INCLUDE_ROUND_H
#define INCLUDE_ROUND_H

#include <vector>
#include <iostream>
#include "player.h"
#include "card.h"

namespace AllFours {

class Round {
    public:

        Round(std::vector<Player>& p);

        bool play();
        bool analyze(std::vector<Card>& cards, Suit trump);
        
        friend std::ostream& operator<<(std::ostream& o, const Round& g) {
            o<<"Round recap: ...\n";
            
            return o;
        }

    private:

        std::vector<Player>& players;
};

} //AllFours

#endif // INCLUDE_ROUND_H
