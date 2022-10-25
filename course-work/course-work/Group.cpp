#include "Group.h"

Group::Group(std::string groupNumber)
{
	this->groupNumber = groupNumber;
}

void Group::addStudent(Student student)
{
	this->students.push_back(student);
}

void Group::addStudent(std::vector<Student> students)
{
	for (auto& st : students) {
		this->students.push_back(st);
	}
}
