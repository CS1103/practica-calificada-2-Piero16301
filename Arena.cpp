#include <iostream>
#include <fstream>
#include <sstream>
#include "Arena.h"

Arena::Arena() {
    Fight *fight_ptr = new Fight;
    fights.push_back(fight_ptr);
    num_fights += 1;
}

void Arena::run(Fighter *a, Fighter *b) {
    Fight* pelea = fights[num_fights-1];
    pelea->setA(a);
    pelea->setB(b);
}

std::vector <Fight*> Arena::get_fights() {
    return fights;
}

void Arena::load_fights(std::string filename) {
    std::ifstream archivo(filename);
    if (archivo.is_open()) {
        char valores[6];
        std::string fila;
        std::getline(archivo,fila);
        while (!archivo.eof()) {
            std::getline(archivo,fila);
            std::istringstream istringstream(fila);
            unsigned int counter = 0;
            while (std::getline(istringstream, fila, ',')) {
                //valores[counter] = fila;
                counter++;
            }
            Fight *fight = new Fight;
            Fighter *fighter1 = new Fighter(valores[0],valores[1],valores[2],valores[3],valores[4],valores[5]);
            Fighter *fighter2 = new Fighter(valores[0],valores[1],valores[2],valores[3],valores[4],valores[5]);
            fights.push_back(fight);
        }
    }
    archivo.close();
}

void Arena::run_all() {
    Fight *pelea = fights[num_fights-1];
    pelea->getWinner();
}