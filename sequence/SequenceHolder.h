//
// Created by Vladislav on 14.05.2021.
//

#ifndef OOPMOD_SEQUENCEHOLDER_H
#define OOPMOD_SEQUENCEHOLDER_H


#include <vector>

class SequenceHolder {

protected:
    int min = 0;
    int max = 0;
    std::vector<int> data;

public:

    virtual void generateRandomSequence() = 0;

    int getMin() const {
        return this->min;
    }

    int getMax() const {
        return max;
    }

    int getAverage() {
        int sum = 0;
        for (int i : data) {
            sum += i;
        }
        return sum / data.size();
    }

};


#endif //OOPMOD_SEQUENCEHOLDER_H
