#ifndef LAB5_CIRCULARSAW_H
#define LAB5_CIRCULARSAW_H

#include "ElectricSaw.h"
#include "ElectricJigSaw.h"

class CircularSaw: virtual public ElectricJigSaw, virtual public ElectricSaw {
protected:
    double Diameter_;
public:
    CircularSaw(double BladeLength, double Weight, std::string Manufacturer,
                double Width, double Amplitude, int Power, double Diameter);
    CircularSaw() = default;
    ~CircularSaw();

    void SetDiameter(double Diameter);
    double GetDiameter() const;
    friend std::ostream& operator << (std::ostream& out, CircularSaw& object);
};


#endif //LAB5_CIRCULARSAW_H
