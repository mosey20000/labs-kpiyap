#include "TeacherInfo.h"

TeacherInfo::TeacherInfo(std::string department, std::string readingCourse)
{
	this->department = std::move(department);
	this->readingCourse = std::move(readingCourse);
}

std::string TeacherInfo::getReadingCourse()
{
	return this->readingCourse;
}
