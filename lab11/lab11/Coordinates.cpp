#include "Coordinates.h"

myNamespace::Coordinates::Coordinates(double xCoordinate, double yCoordinate)
{
	this->xCoordinate = xCoordinate;
	this->yCoordinate = yCoordinate;
}

double myNamespace::Coordinates::get_xCoordinate()
{
	return this->xCoordinate;
}

double myNamespace::Coordinates::get_yCoordinate()
{
	return this->yCoordinate;
}

void myNamespace::Coordinates::set_xCoordinate(double xCoordinate)
{
	this->xCoordinate = xCoordinate;
}

void myNamespace::Coordinates::set_yCoordinate(double yCoordinate)
{
	this->yCoordinate = yCoordinate;
}


std::ostream& myNamespace::Coordinates::operator<<(std::ostream& out)
{
	out << "xCoordinate = " << this->xCoordinate << std::endl;
	out << "yCoordinate = " << this->yCoordinate << std::endl;

	return out;
}
