#include <iostream>
#include "gameplay.h"
#include "deck.h"
#include "round.h"

namespace AllFours {

Game::
Game() : p1(A), p2(B), p3(A), p4(B)
{
    A.score = 0;
    B.score = 0;

    std::vector<Player> players;
    players.push_back(p1);
    players.push_back(p2);
    players.push_back(p3);
    players.push_back(p4);
    
    while(A.score < 14 && B.score < 14) {
        std::cout << "Round begin >>>> \n";
        Round r(players);
        r.play();
        std::cout << r << std::endl;
        std::cout << "Round end >>>> \n\n";
    }

    std::cout<<"\n Game done!\n";
}

}
