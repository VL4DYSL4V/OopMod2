cmake_minimum_required(VERSION 3.17)
project(OopMod)

set(CMAKE_CXX_STANDARD 14)

add_executable(OopMod
        main.cpp)

project(tests)

set(CMAKE_CXX_STANDARD 20)

add_executable(tests
        test/tests.cpp)