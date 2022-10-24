#pragma once

#include "Date.h"

#include <string>
#include <iostream>

class Marks
{
private:
	std::string subjectName;
	int mark;
	Date dateSet;
public:
	Marks() = default;
	Marks(std::string subjectName, int mark);
	~Marks() = default;

	void printMark();
};

