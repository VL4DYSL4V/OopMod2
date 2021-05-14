#include <iostream>
#include "sequence/SequenceHolder.h"
#include "sequence/ConsoleReadingSequenceHolder.h"
#include "sequence/RandomSequenceFileWriter.h"

int main() {
    SequenceHolder *sequenceHolder = new RandomSequenceFileWriter();
    sequenceHolder->generateRandomSequence();
    return 0;
}
