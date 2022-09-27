//
// Created by User on 27.09.2022.
//

#ifndef LAB5_SAW_H
#define LAB5_SAW_H

#include "Tool.h"

class Saw : virtual public Tool{
protected:
    double BladeLength_;
public:
    Saw(double BladeLength, double Weight, std::string Manufacturer);
    ~Saw();

    void PutData();
    void GetBladeLength();
};


#endif //LAB5_SAW_H
