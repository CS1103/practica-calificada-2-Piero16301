#include "Fighter.h"
#include "Attack.h"
#include "Defense.h"

Fighter::Fighter(char e, char sh, char a, char p, char sa, char f) {
    Attack apeleador;
    Defense dpeleador;
    apeleador.establecerAtaque(p,sa,f);
    dpeleador.establecerDefensa(e,sh,a);
}

int Fighter::attack() {
    return ataque;
}

int Fighter::defense() {
    return defensa;
}