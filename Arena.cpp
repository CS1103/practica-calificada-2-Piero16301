#include <iostream>
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

}

void Arena::run_all() {

}