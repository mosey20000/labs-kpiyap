//
// Created by User on 28.09.2022.
//

#ifndef LAB5_JIGSAW_H
#define LAB5_JIGSAW_H


#include "Saw.h"
#include <iostream>
#include <utility>

class Jigsaw: virtual public Saw {
protected:
    double Width_;
public:
    Jigsaw(double BladeLength, double Weight, std::string Manufacturer, double Width);
    Jigsaw() = default;
    ~Jigsaw();

    void SetWidth(double Width) { Width_ = Width; };
    double GetWidth () const;

    friend std::ostream& operator << (std::ostream& out, Jigsaw& object);
};


#endif //LAB5_JIGSAW_H
