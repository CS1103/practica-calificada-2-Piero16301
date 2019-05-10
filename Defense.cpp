#include "Defense.h"
#include "Shield.h"
#include "Armor.h"
#include "Elude.h"

void Defense::establecerDefensa(char elude, char shield, char armor) {
    Elude epeleador;
    Shield speleador;
    Armor apeleador;
    if (elude == 'E') {
        level = level + epeleador.valor();
    }
    if (shield == 'S') {
        level = level + speleador.valor();
    }
    if (armor == 'A') {
        level = level + apeleador.valor();
    }
}

int Defense::defense() {
    return level;
}