#pragma once

#include <iostream>
#include <string>

class Name
{
private:
	std::string name;
	std::string surname;
	std::string patronymic;
public:
	Name() = default;
	Name(std::string name, std::string surname, std::string patronymic);
	~Name() = default;

	void putFullname();
	void putName();
	void putNameSurname();
};

