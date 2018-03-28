cmake_minimum_required(VERSION 3.8)
project(cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp swordToOffer/Problem3.cpp swordToOffer/Problem3.h swordToOffer/Problem4.cpp swordToOffer/Problem4.h swordToOffer/Problem53.cpp swordToOffer/Problem53.h swordToOffer/Problem55.cpp swordToOffer/Problem55.h swordToOffer/Problem56.cpp swordToOffer/Problem56.h swordToOffer/Problem57.cpp swordToOffer/Problem57.h swordToOffer/Problem58.cpp swordToOffer/Problem58.h)
add_executable(cpp ${SOURCE_FILES})