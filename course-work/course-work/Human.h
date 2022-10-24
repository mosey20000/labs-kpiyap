#pragma once

#include <iostream>
#include <string>

class Human
{
protected:
	std::string name;
public:
	Human() = default;
	Human(std::string name);
	~Human() = default;

	void setName(std::string name);
	std::string getName();

	void printData();
};

