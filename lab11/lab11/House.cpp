#include "House.h"

void myNamespace::House::printHouseData()
{
	std::cout << "This house was built by " << architect.getName() << " " << architect.getSurname() << "in " << constructionYear << "." << std::endl;
	std::cout << "Location: x = " << coordinates.get_xCoordinate() << ", y = " << coordinates.get_yCoordinate() << std::endl;
	
	for (int counter = 0; counter < floor.size(); counter++) {
		std::cout << "----- FLOOR NO. " << counter+1 << " -----" << std::endl;
		floor[counter].printFloors();
	}
}
