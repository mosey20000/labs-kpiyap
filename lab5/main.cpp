#include <iostream>



//            /   Saw          --------->     Jigsaw      \
//  Tool ---                                                 --- > CircularSaw
//             \  ElecticSaw   ---------> ElectricJigSaw  /
//

#include "headers/CircularSaw.h"

int main() {
    CircularSaw Bosch(120, 1400, "Alpine", 20, 180, 220, 360);
    std::cout << Bosch;
}
