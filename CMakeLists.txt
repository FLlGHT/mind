cmake_minimum_required(VERSION 3.27)
project(mind)

set(CMAKE_CXX_STANDARD 17)

add_executable(mind src/main.cpp
        src/RandomSelector.h
)
