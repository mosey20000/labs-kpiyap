#include <iostream>

#include "headers/Saw.h"
#include "headers/Tool.h"

int main() {
    Saw chainsaw(400, 1500, "Bosh");
    chainsaw.SetBladeLength(500);
    chainsaw.Print();
    double weight = chainsaw.GetWeight();
    std::cout << "Weight === " << weight;
}
