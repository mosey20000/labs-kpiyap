#pragma once
#include "Flat.h"
#include <vector>
#include <iostream>

namespace myNamespace {

class Floor {
private:
	std::vector<Flat> flat;
public:
	Floor() = default;
	Floor(std::vector<Flat> flat);
	~Floor() = default;

	void printFloors();
};

}
