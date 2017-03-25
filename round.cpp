#include "round.h"
#include "deck.h"

namespace AllFours {

Round::Round(std::vector<Player>& p) : players(p)
{ }

bool 
Round::play() 
{
    Deck d;
    d.shuffle();
    std::cout<<d<<std::endl;
   
    for(int i = 0; i < 6; ++i) {
        players[0].addCard(d.getTopCard());
        players[1].addCard(d.getTopCard());
        players[2].addCard(d.getTopCard());
        players[3].addCard(d.getTopCard());
    }

    Card c = d.getTopCard();
    Suit trump = c.suit;

    for(int i = 0; i < 6; ++i) {
        std::vector<Card> cards;
        cards.push_back(players[0].getCard());
        cards.push_back(players[1].getCard());
        cards.push_back(players[2].getCard());
        cards.push_back(players[3].getCard());

        analyze(cards, trump);
    }
}

bool 
Round::analyze(std::vector<Card>& cards, Suit trump) 
{
    for(int i = 0; i < cards.size(); ++i) {
        if(cards[i].suit == trump) {
           if(cards[i].rank == JACK) {
           }
        }
    }
}

}

