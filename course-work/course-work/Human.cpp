#include "Human.h"

Human::Human(std::string name)
{
	this->name = name;
}

void Human::setName(std::string name)
{
	this->name = name;
}

std::string Human::getName()
{
	return this->name;
}

void Human::printData()
{
	std::cout << name;
}
