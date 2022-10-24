#include "Marks.h"

Marks::Marks(std::string subjectName, int mark)
{
	this->subjectName = std::move(subjectName);
	this->mark = mark;
	this->dateSet = Date();
}

void Marks::printMark()
{
	std::cout << this->subjectName << " --- " << this->mark << " --- "; this->dateSet.printDate(); std::cout << std::endl;
	return;
}
