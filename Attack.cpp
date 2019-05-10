#include "Attack.h"
#include "Punch.h"
#include "Saber.h"
#include "Firearm.h"

void Attack::establecerAtaque(char punch, char saber, char firearm) {
    Punch ppeleador;
    Saber speleador;
    Firearm fpeleador;
    if (punch == 'P') {
        power = power + ppeleador.valor();
    }
    if (saber == 'S') {
        power = power + speleador.valor();
    }
    if (firearm == 'F') {
        power = power + fpeleador.valor();
    }
}

int Attack::attack() {
    return power;
}