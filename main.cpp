#include <iostream>
#include "sequence/SequenceHolder.h"
#include "sequence/ConsoleReadingSequenceHolder.h"
#include "sequence/RandomSequenceFileWriter.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    SequenceHolder *sequenceHolder = new RandomSequenceFileWriter();
//    sequenceHolder->generateRandomSequence();
//    std::cout<<"Max: "<<sequenceHolder->getMax()<<std::endl;
//    std::cout<<"Min: "<<sequenceHolder->getMin()<<std::endl;
//    std::cout<<"Avg: "<<sequenceHolder->getAverage()<<std::endl;
    sequenceHolder->generateRandomSequence();

    return 0;
}
