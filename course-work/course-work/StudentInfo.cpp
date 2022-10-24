#include "StudentInfo.h"

StudentInfo::StudentInfo(std::string department, bool getSchoolarship, int skippedClasses)
{
	this->getSchoolarship = getSchoolarship;
	this->skippedClasses = skippedClasses;
	this->department = std::move(department);
}
