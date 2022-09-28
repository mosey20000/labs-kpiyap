//
// Created by User on 27.09.2022.
//

#include "../headers/Tool.h"


#include <iostream>
#include <utility>

Tool::Tool(double Weight, std::string Manufacturer) {
    Weight_ = Weight;
    Manufacturer_ = std::move(Manufacturer);
}

Tool::~Tool() {
    Manufacturer_.clear();
}


double Tool::GetWeight() const {
    return Weight_;
}

std::string Tool::GetManufacturer() const {
    return Manufacturer_;
}

std::ostream& operator <<(std::ostream &out, Tool& object){
    std::cout << "Tool characteristics:" << std::endl;
    std::cout << "Weight is " << object.Weight_ << std::endl;
    std::cout << "Manufacturer is " << object.Manufacturer_ << std::endl;

    return out;
}
