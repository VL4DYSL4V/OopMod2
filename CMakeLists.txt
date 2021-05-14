cmake_minimum_required(VERSION 3.17)
project(OopMod)

set(CMAKE_CXX_STANDARD 14)

add_executable(OopMod
        sequence/SequenceHolder.cpp
        sequence/ConsoleReadingSequenceHolder.cpp
        sequence/RandomSequenceFileWriter.cpp
        random/Random.cpp
        random/LinearCongruentRandom.cpp
        main.cpp)

project(tests)

set(CMAKE_CXX_STANDARD 20)

add_executable(tests
        sequence/SequenceHolder.cpp
        sequence/ConsoleReadingSequenceHolder.cpp
        sequence/RandomSequenceFileWriter.cpp
        random/Random.cpp
        random/LinearCongruentRandom.cpp
        test/tests.cpp)