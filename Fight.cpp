#include "Fight.h"

void Fight::setA(Fighter *a1) {
    Fight::a = a1;
}

void Fight::setB(Fighter *b1) {
    Fight::b = b1;
}

Fighter* Fight::getWinner() {
    int score_peleador_1 = a->defense()-a->attack();
    int score_peleador_2 = b->defense()-b->attack();
    if (score_peleador_1 > score_peleador_2) {
        winner = a;
        return a;
    }
    else {
        winner = b;
        return b;
    }
}