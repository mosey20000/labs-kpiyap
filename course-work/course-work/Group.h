#pragma once

#include <vector>

#include "Student.h"

class Group
{
private:
	std::vector<Student> students;
	std::string groupNumber;
public:
	Group(std::string groupNumber);
	~Group() = default;

	void addStudent(Student student);
	void addStudent(std::vector<Student> students);
};

