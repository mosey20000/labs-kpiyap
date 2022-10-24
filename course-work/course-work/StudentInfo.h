#pragma once

#include <string>
#include <iostream>

class StudentInfo
{
protected:
	bool getSchoolarship;
	int skippedClasses;
	std::string department;
public:
	StudentInfo() = default;
	StudentInfo(std::string department,bool getSchoolarship = false, int skippedClasses = 0);
	~StudentInfo() = default;
};

