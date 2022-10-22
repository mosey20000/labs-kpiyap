#pragma once
#include <iostream>
#include <string>

namespace myNamespace {

class Flat {
private:
	int flatNumber;
	int roomsCount;
	std::string owner;
public:
	Flat() = default;
	Flat(int flatNumber, int roomsCount, std::string owner);
	~Flat() = default;

	void printData();

	std::ostream& operator << (std::ostream& out);
};

}
