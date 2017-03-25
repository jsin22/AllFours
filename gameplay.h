#ifndef INCLUDE_GAMEPLAY_H
#define INCLUDE_GAMEPLAY_H

#include <vector>
#include <iostream>
#include "card.h"
#include "deck.h"
#include "player.h"
#include "team.h"

namespace AllFours {

class Game {
    public:

        Game();
        
        friend std::ostream& operator<<(std::ostream& o, const Game& g) {
            o<<"Team A: "<<g.A<<std::endl
             <<"Team B: "<<g.B;
            
            return o;
        }

    private:
        Team A;
        Team B;
        Player p1;
        Player p2;
        Player p3;
        Player p4;
};

} //AllFours

#endif // INCLUDE_GAMEPLAY_H
