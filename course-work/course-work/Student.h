#pragma once
#include "Human.h"
#include "Marks.h"

#include <vector>

class Student: public Human
{
protected:
	std::string speciality;
	std::vector<Marks> marks;
	bool getSchoolarship;
public:
	Student() = default;
	Student(std::string name, std::string speciality, bool getSchoolarship): 
		Human(name), speciality(speciality), getSchoolarship(getSchoolarship) {};
	~Student() = default;

	void setMark(Marks mark);

};

