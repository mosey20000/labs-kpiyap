#define _CRT_SECURE_NO_WARNINGS

#pragma once

#include <string>
#include <ctime>
#include <iostream>


class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date();
	Date(int day, int month, int year);
	~Date() = default;

	void printDate();
};

