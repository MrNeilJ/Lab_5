cmake_minimum_required(VERSION 3.7)
project(Lab_5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp inputCheck.cpp inputCheck.hpp menuMaker.cpp menuMaker.hpp Recursion.cpp Recursion.hpp)
add_executable(Lab_5 ${SOURCE_FILES})