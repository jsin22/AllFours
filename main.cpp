#include <iostream>
#include <time.h>
#include <stdlib.h>

//#include "deck.h"
//#include "card.h"
//#include "player.h"
#include "gameplay.h"
using namespace AllFours;

int main()
{
    srand(time(NULL));
    
    Game g;
    std::cout<<g<<std::endl;

    return 0;
}
