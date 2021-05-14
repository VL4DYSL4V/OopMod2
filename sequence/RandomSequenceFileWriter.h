//
// Created by Vladislav on 14.05.2021.
//

#ifndef TESTS_RANDOMSEQUENCEFILEWRITER_H
#define TESTS_RANDOMSEQUENCEFILEWRITER_H


#include <fstream>
#include "SequenceHolder.h"
#include "../random/Random.h"
#include "../random/LinearCongruentRandom.h"


class RandomSequenceFileWriter : public SequenceHolder {
private:

    Random* random = new LinearCongruentRandom(17, 41, 10);

    void writeToFile(const std::string &path) {
        std::ofstream my_file;
        my_file.open(path, std::ios::in);
        if (!my_file.is_open()) {
            std::cout << "No such file" << std::endl;
        } else {
            for (int i : data) {
                my_file << std::to_string(i) << " ";
            }
            my_file << std::endl;
        }
        my_file.close();
    }

public:
    void generateRandomSequence() override;

};


#endif //TESTS_RANDOMSEQUENCEFILEWRITER_H
