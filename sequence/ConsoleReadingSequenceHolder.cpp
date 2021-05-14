//
// Created by Vladislav on 14.05.2021.
//

#include <iostream>
#include "ConsoleReadingSequenceHolder.h"

void ConsoleReadingSequenceHolder::generateRandomSequence() {
    int lastNumber = -1;
    std::cout<<"Input your numbers. To exit, input 0"<<std::endl;
    while(lastNumber != 0){
        std::cin >> lastNumber;
        if(lastNumber > this->getMax()){
            this->max = lastNumber;
        }else if(lastNumber < this->getMin()){
            this->min = lastNumber;
        }
        this->data.push_back(lastNumber);
    }
}
