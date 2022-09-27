//
// Created by User on 27.09.2022.
//

#include "../headers/Saw.h"

Saw::Saw(double BladeLength, double Weight, std::string Manufacturer):
    Tool(Weight, std::move(Manufacturer)), BladeLength_(BladeLength) {};

Saw::~Saw() {
    Manufacturer_.clear();
}