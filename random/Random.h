//
// Created by Vladislav on 12.05.2021.
//

#ifndef UNTITLED_RANDOM_H
#define UNTITLED_RANDOM_H

#include "ctime"

class Random {

protected:

    int seed = time(0);

public:

    int getSeed() const{
        return this->seed;
    }

    void setSeed(int seed) {
        this->seed = seed;
    }

    virtual int nextInt() = 0;

};


#endif //UNTITLED_RANDOM_H
