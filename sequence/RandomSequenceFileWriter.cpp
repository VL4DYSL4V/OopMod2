//
// Created by Vladislav on 14.05.2021.
//

#include <iostream>
#include "RandomSequenceFileWriter.h"

void RandomSequenceFileWriter::generateRandomSequence() {
    std::cout<<"Input length"<<std::endl;
    int length;
    std::cin >> length;
    for(int i = 0; i < length; i++){
        this->data.push_back(this->random->nextInt());
    }
    std::cout<<"Input path" << std::endl;
    std::string path;
    std::cin >> path;
    writeToFile(path);
}
