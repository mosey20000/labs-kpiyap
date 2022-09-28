//
// Created by User on 28.09.2022.
//

#include "../headers/Jigsaw.h"


Jigsaw::Jigsaw(double BladeLength, double Weight, std::string Manufacturer, double Width) :
        Saw(BladeLength, Weight, std::move(Manufacturer)), Width_(Width) {};

Jigsaw::~Jigsaw() {
    Manufacturer_.clear();
}

double Jigsaw::GetWidth() const {
    return Width_;
}

std::ostream& operator << (std::ostream& out, Jigsaw& object) {
    std::cout << "Jigsaw characteristics:" << std::endl;
    std::cout << "Weight is " << object.Weight_ << std::endl;
    std::cout << "Manufacturer is " << object.Manufacturer_ << std::endl;
    std::cout << "BladeLength is " << object.BladeLength_ << std::endl;
    std::cout << "Width is " << object.Width_ << std::endl;

    return out;
}