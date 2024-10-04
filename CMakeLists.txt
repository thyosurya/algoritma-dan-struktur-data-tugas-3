cmake_minimum_required(VERSION 3.29)
project(perulangan_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(perulangan_project
    include/perulangan.h
    src/do.cpp
    src/for..cpp
    src/main.cpp
    src/while.cpp)
