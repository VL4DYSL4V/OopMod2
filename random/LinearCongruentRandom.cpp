//
// Created by Vladislav on 12.05.2021.
//

#include "LinearCongruentRandom.h"

int LinearCongruentRandom::nextInt() {
    int next = (this->a * this->getSeed() + this->b) % this->mod;
    setSeed(next);
    return next;
}
