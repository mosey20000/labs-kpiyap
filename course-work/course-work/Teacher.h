#pragma once

#include "Human.h"
#include "Student.h"
#include "TeacherInfo.h"

#include <iostream>
#include <string>
#include <vector>


class Teacher: public Human {
private:
	TeacherInfo information;
	// Name name;
	// Date birthdate;
public:
	Teacher() = default;
	Teacher(Name name, Date birthdate, TeacherInfo information):
		Human(birthdate, name), information(information) {};

	void setStudentMark(std::string studentName, );
};

