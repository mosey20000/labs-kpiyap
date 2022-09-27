cmake_minimum_required(VERSION 3.23)
project(lab5)

set(CMAKE_CXX_STANDARD 23)

add_executable(lab5 main.cpp sources/Tool.cpp headers/Tool.h sources/Saw.cpp headers/Saw.h sources/ElectricSaw.cpp headers/ElectricSaw.h)
