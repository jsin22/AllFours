#ifndef INCLUDE_TEAM_H
#define INCLUDE_TEAM_H

#include <iostream>

namespace AllFours {

class Team {
    public:
        int score;
        int gameTally;

        friend std::ostream& operator<<(std::ostream& o, const Team& t) {
            o<<"Score: "<<t.score<<std::endl;
            return o;
        }
};

} //AllFours

#endif //INCLUDE_TEAM_H
