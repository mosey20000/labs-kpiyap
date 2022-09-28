//
// Created by User on 28.09.2022.
//

#include <utility>

#include "../headers/ElectricSaw.h"

ElectricSaw::ElectricSaw(double BladeLength, double Weight, std::string Manufacturer, double Width, int Power):
        Saw(BladeLength, Weight, std::move(Manufacturer)), Power_(Power) {} ;

ElectricSaw::~ElectricSaw() {
    Manufacturer_.clear();
}

void ElectricSaw::SetPower(int Power) {
    Power_ = Power;
}

double ElectricSaw::GetPower() const {
    return Power_;
}

std::ostream& operator << (std::ostream& out, ElectricSaw& object){
    std::cout << "Saw characteristics:" << std::endl;
    std::cout << "Weight is " << object.Weight_ << std::endl;
    std::cout << "Manufacturer is " << object.Manufacturer_ << std::endl;
    std::cout << "BladeLength is " << object.BladeLength_ << std::endl;
    std::cout << "Power is " << object.Power_ << std::endl;

    return out;
}