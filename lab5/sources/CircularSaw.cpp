//
// Created by User on 28.09.2022.
//

#include "../headers/CircularSaw.h"

CircularSaw::CircularSaw(double BladeLength, double Weight, std::string Manufacturer, double Width,
                         double Amplitude, int Power, double Diameter) {
    BladeLength_ = BladeLength;
    Weight_ = Weight;
    Manufacturer_ = std::move(Manufacturer);
    Width_ = Width;
    Amplitude_ = Amplitude;
    Power_ = Power;
    Diameter_ = Diameter;
};

CircularSaw::~CircularSaw() {
    Manufacturer_.clear();
}

double CircularSaw::GetDiameter() const {
    return Diameter_;
}

void CircularSaw::SetDiameter(double Diameter) {
    Diameter_ = Diameter;
}

std::ostream& operator << (std::ostream& out, CircularSaw& object){
    std::cout << "Circulasaw characteristics:" << std::endl;
    std::cout << "Weight is " << object.Weight_ << std::endl;
    std::cout << "Manufacturer is " << object.Manufacturer_ << std::endl;
    std::cout << "BladeLength is " << object.BladeLength_ << std::endl;
    std::cout << "Width is " << object.Width_ << std::endl;
    std::cout << "Amplitude is " << object.Amplitude_ << std::endl;
    std::cout << "Power is " << object.Power_ << std::endl;
    std::cout << "Diameter is " << object.Diameter_ << std::endl;

    return out;
}