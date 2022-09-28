//
// Created by User on 28.09.2022.
//

#ifndef LAB5_ELECTRICJIGSAW_H
#define LAB5_ELECTRICJIGSAW_H

#include "Jigsaw.h"

class ElectricJigSaw: virtual public Jigsaw {
protected:
    double Amplitude_;
public:
    ElectricJigSaw(double BladeLength, double Weight, std::string Manufacturer, double Width, double Amplitude);
    ElectricJigSaw() = default;
    ~ElectricJigSaw();

    void SetAmplitude(double Amplitude);
    double GetAmplitude() const;
    friend std::ostream& operator << (std::ostream& out, ElectricJigSaw& object);
};


#endif //LAB5_ELECTRICJIGSAW_H
