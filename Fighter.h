#ifndef PC2_FIGHTER_H
#define PC2_FIGHTER_H


class Fighter {
    int ataque;
    int defensa;
public:
    Fighter(char e, char sh, char a, char p, char sa, char f);
    int attack();
    int defense();
};


#endif //PC2_FIGHTER_H
