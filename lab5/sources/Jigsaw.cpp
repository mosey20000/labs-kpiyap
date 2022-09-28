//
// Created by User on 28.09.2022.
//

#include "../headers/Jigsaw.h"


Jigsaw::Jigsaw(double BladeLength, double Weight, std::string Manufacturer, double Width) :
        Saw(BladeLength, Weight, Manufacturer), Width_(Width) {};

Jigsaw::~Jigsaw() {
    Manufacturer_.clear();
}