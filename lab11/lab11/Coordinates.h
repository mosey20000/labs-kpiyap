#pragma once
#include <iostream>

namespace myNamespace {

class Coordinates
{
private:
	double xCoordinate;
	double yCoordinate;
public:
	Coordinates() = default;
	Coordinates(double xCoordinate, double yCoordinate);
	~Coordinates() = default;

	double get_xCoordinate();
	double get_yCoordinate();

	void set_xCoordinate(double xCoordinate);
	void set_yCoordinate(double yCoordinate);

	std::ostream& operator << (std::ostream& out);
};

}