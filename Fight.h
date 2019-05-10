#ifndef PC2_FIGHT_H
#define PC2_FIGHT_H

#include "Fighter.h"

class Fight {
    Fighter* a;
    Fighter* b;
    Fighter* winner;
    int score;

public:
    void setA(Fighter *a1);

    void setB(Fighter *b1);

    Fighter* getWinner();
};


#endif //PC2_FIGHT_H
