//
// Created by User on 27.09.2022.
//

#include "../headers/Saw.h"
#include <iostream>
#include <utility>

Saw::Saw(double BladeLength, double Weight, std::string Manufacturer):
    Tool(Weight, std::move(Manufacturer)), BladeLength_(BladeLength) {};

Saw::~Saw() {
    Manufacturer_.clear();
}

std::ostream& operator << (std::ostream& out, Saw& object) {
    std::cout << "Saw characteristics:" << std::endl;
    std::cout << "Weight is " << object.Weight_ << std::endl;
    std::cout << "Manufacturer is " << object.Manufacturer_ << std::endl;
    std::cout << "BladeLength is " << object.BladeLength_ << std::endl;

    return out;
}

double Saw::GetBladeLength() const {
    return BladeLength_;
}

void Saw::SetBladeLength(double BladeLength) {
    BladeLength_ = BladeLength;
}