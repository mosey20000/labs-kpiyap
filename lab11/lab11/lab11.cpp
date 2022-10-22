#include <iostream>
#include "Coordinates.h"
#include "Floor.h"
#include "Flat.h"
#include "ArchitectureObject.h"
#include "House.h"

using namespace myNamespace;


int main() {
	Architect architect("Leonid", "Levin");
	Coordinates coordinates(50.87167 , 21.12571);
	int constructionYear = 2022;
	
	std::vector<Flat> floor1;
	std::vector<Flat> floor2;
	std::vector<Floor> FLOOR;

	std::string streetName = "ul. Mira";

	Flat flat1(20, 2, "Egor");
	Flat flat2(12, 4, "Liana");
	Flat flat3(31, 5, "Nikita");
	Flat flat4(2, 1, "Evgeniy");


	floor1.push_back(flat1);
	floor1.push_back(flat2);
	floor2.push_back(flat3);
	floor2.push_back(flat4);

	Floor floor_1(floor1);
	Floor floor_2(floor2);

	FLOOR.push_back(floor_1);
	FLOOR.push_back(floor_2);

	House house1(architect, coordinates, constructionYear, FLOOR, streetName);
	house1.printHouseData();

	return 0;
}