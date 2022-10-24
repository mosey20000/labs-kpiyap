#include "Name.h"

Name::Name(std::string name, std::string surname, std::string patronymic)
{
	this->name = std::move(name);
	this->surname = std::move(surname);
	this->patronymic = std::move(patronymic);
}

void Name::putFullname()
{
	std::cout << this->surname << " " << this->name << " " << this->patronymic;
}

void Name::putName()
{
	std::cout << this->name[0] << ". " << this->patronymic[0] << ". " << this->surname;
}

void Name::putNameSurname()
{
	std::cout << this->surname << " " << this->name;
}
