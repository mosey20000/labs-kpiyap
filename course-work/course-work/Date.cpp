#include "Date.h"


Date::Date()
{
	const int BASE_YEAR = 1900;
	time_t timer;
	tm* time;

	std::time(&timer);
	time = localtime(&timer);
	this->month = time->tm_mon;
	this->day = time->tm_mday;
	this->year = time->tm_year + BASE_YEAR;
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}


void Date::printDate()
{

	if (day < 10 && month < 10) {
		std::cout << "0" << this->day << ".0" << this->month << "." << this->year;
		return;
	}

	if (day < 10 && month >= 10) {
		std::cout << "0" << this->day << "." << this->month << "." << this->year;
		return;
	}

	if (day >= 10 && month >= 10) {
		std::cout << "" << this->day << "." << this->month << "." << this->year;
		return;
	}

	if (day >= 10 && month < 10) {
		std::cout << "" << this->day << ".0" << this->month << "." << this->year;
		return;
	}

}
