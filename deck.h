#ifndef INCLUDE_DECK_H
#define INCLUDE_DECK_H

#include <vector>
#include <iostream>
#include "card.h"

#define NUM_OF_CARDS 52

namespace AllFours {

class Deck {
    public:
        Deck();  
        bool getCardsFromTop(std::vector<Card>*, 
                             const unsigned int);
        Card getTopCard();
        void cutCards();
        void shuffle();

        friend std::ostream& operator<<(std::ostream&, const Deck&);

    private:
        static int getRand(int max);
        std::vector<Card> cards;

};

} //AllFours

#endif //INCLUDE_DECK_H
