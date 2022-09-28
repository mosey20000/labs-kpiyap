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
    Saw() = default;
    ~Saw();

    friend std::ostream& operator << (std::ostream& out, Saw& object);
    double GetBladeLength() const;

    void SetBladeLength(double BladeLength);
};


#endif //LAB5_SAW_H
