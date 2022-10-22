#include "Flat.h"

myNamespace::Flat::Flat(int flatNumber, int roomsCount, std::string owner) {
	this->flatNumber = flatNumber;
	this->roomsCount = roomsCount;
	this->owner = std::move(owner);
}

void myNamespace::Flat::printData()
{
	std::cout << "Flat No. " << flatNumber << ". There " << roomsCount << " rooms. This flat is owned by " << owner << std::endl;
}


