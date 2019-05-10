#ifndef PC2_ARENA_H
#define PC2_ARENA_H

#include <vector>
#include <string>

#include "Fight.h"

class Arena {
    std::vector <Fight*> fights;
    int num_fights = 0;

public:
    Arena();
    void run(Fighter *a, Fighter *b);
    std::vector <Fight*> get_fights();
    void load_fights(std::string filename);
    void run_all();
};


#endif //PC2_ARENA_H
