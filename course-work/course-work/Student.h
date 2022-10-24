#pragma once

#include "Human.h"
#include "Marks.h"
#include "StudentInfo.h"


#include <iostream>
#include <string>
#include <vector>

class Student: public Human
{
private:
	std::vector<Marks> marks;
	StudentInfo information;
	// Name name;
	// Date birthdate;
public:
	Student(StudentInfo information, Name name, Date birthdate):
		Human(birthdate, name), information(information) {};

	~Student() = default;


};

