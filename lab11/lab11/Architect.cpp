#include "Architect.h"

myNamespace::Architect::Architect(std::string name, std::string surname)
{
	this->name = std::move(name);
	this->surname = std::move(surname);
}

std::ostream& myNamespace::Architect::operator<<(std::ostream& out)
{
	out << "Architector is " << name << " " << surname << std::endl;
	
	return out;
}

std::string myNamespace::Architect::getName()
{
	return this->name;
}

std::string myNamespace::Architect::getSurname()
{
	return this->surname;
}

