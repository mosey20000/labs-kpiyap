//
// Created by User on 28.09.2022.
//

#ifndef LAB5_ELECTRICSAW_H
#define LAB5_ELECTRICSAW_H

#include "Saw.h"
#include <iostream>
#include <utility>

class ElectricSaw : virtual public Saw {
protected:
    int Power_;
public:
    ElectricSaw(double BladeLength, double Weight, std::string Manufacturer, double Width, int Power);
    ElectricSaw() = default;
    ~ElectricSaw();

    void SetPower(int Power);
    double GetPower() const ;

    friend std::ostream& operator << (std::ostream& out, ElectricSaw& object);
};


#endif //LAB5_ELECTRICSAW_H
