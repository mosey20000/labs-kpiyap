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

void Tool::PutData() const {
    std::cout << "Tool weight is " << Weight_ << std::endl;
}

double Tool::GetWeight() const {
    return Weight_;
}

std::string Tool::GetManufacturer() const {
    return Manufacturer_;
}