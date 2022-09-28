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

void Saw::Print() const {
    std::cout << "Saw characteristics:" << std::endl;
    std::cout << "Weight is " << Weight_ << std::endl;
    std::cout << "Manufacturer is " << Manufacturer_ << std::endl;
    std::cout << "BladeLength is " << BladeLength_ << std::endl;

}

double Saw::GetBladeLength() const {
    return BladeLength_;
}