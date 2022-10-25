#pragma once

#include <iostream>
#include <string>
#include <vector>

class TeacherInfo
{
private:
	std::string department;
	std::string readingCourse;
public:
	TeacherInfo(std::string department, std::string readingCourse);
	~TeacherInfo() = default;

	std::string getReadingCourse();
};

