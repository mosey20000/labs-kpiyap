#include "Floor.h"

myNamespace::Floor::Floor(std::vector<Flat> flat)
{
	this->flat = flat;
}


void myNamespace::Floor::printFloors()
{
	for (auto& fl : flat) {
		fl.printData();
	}
}
