//
// Created by Andrik Meneses on 1/03/24.
//
#include "utils.h"

namespace combat_utils {
    int getRolledAttack(int attack) { // Function definition
        srand(time(0)); // Use current time as seed for random generator
        int lowerLimit = attack * .80;
        return (rand() % (attack - lowerLimit + 1)) + lowerLimit;
    }
}
