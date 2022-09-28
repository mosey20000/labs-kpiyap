//
// Created by User on 28.09.2022.
//

#include "../headers/ElectricJigSaw.h"

ElectricJigSaw::ElectricJigSaw(double BladeLength, double Weight, std::string Manufacturer, double Width, double Amplitude):
        Jigsaw(BladeLength, Weight, std::move(Manufacturer), Width), Amplitude_(Amplitude) {} ;

ElectricJigSaw::~ElectricJigSaw() {
    Manufacturer_.clear();
}

void ElectricJigSaw::SetAmplitude(double Amplitude) {
    Amplitude_ = Amplitude;
}

double ElectricJigSaw::GetAmplitude() const {
    return Amplitude_;
}

std::ostream& operator << (std::ostream& out, ElectricJigSaw& object){
    std::cout << "Jigsaw characteristics:" << std::endl;
    std::cout << "Weight is " << object.Weight_ << std::endl;
    std::cout << "Manufacturer is " << object.Manufacturer_ << std::endl;
    std::cout << "BladeLength is " << object.BladeLength_ << std::endl;
    std::cout << "Width is " << object.Width_ << std::endl;
    std::cout << "Amplitude is " << object.Amplitude_ << std::endl;

    return out;
}