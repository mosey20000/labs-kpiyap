//
// Created by User on 27.09.2022.
//

#ifndef LAB5_TOOL_H
#define LAB5_TOOL_H

#include <string>

class Tool {
protected:
    double Weight_;
    std::string Manufacturer_;
public:
    Tool(double Weight, std::string Manufacturer);
    Tool() = default;
    ~Tool();

    friend std::ostream& operator << (std::ostream& out, Tool& object);
    double GetWeight() const;
    std::string GetManufacturer() const;

    void SetWeight(double Weight) { Weight_ = Weight; };
    void SetManufacturer(std::string Manufacturer) { Manufacturer_ = Manufacturer; };
};


#endif //LAB5_TOOL_H
