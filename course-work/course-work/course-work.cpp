#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include "Date.h"
#include "Marks.h"


int main() {
	Date data();
	std::string subject = "Programming";
	Marks mark(subject, 10);
	mark.printMark();
	return 0;
}
