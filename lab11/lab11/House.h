#pragma once
#include "ArchitectureObject.h"
#include "Flat.h"
#include "Floor.h"
#include <vector>

namespace myNamespace {

class House: public ArchitectureObject {
private:
	std::vector<Floor> floor;
	std::string streetName;
public:
	House() = default;
	House(Architect architect, Coordinates coordinates, int constructionYear, std::vector<Floor> floor, std::string streetName):
		ArchitectureObject(architect, coordinates, constructionYear), floor(floor), streetName(std::move(streetName)) {};
	~House() = default;

	void printHouseData();
};

}