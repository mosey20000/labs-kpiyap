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

    void PutData() const;
    double GetWeight() const;
    std::string GetManufacturer() const;
};


#endif //LAB5_TOOL_H
