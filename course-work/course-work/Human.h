#pragma once

#include "Name.h"
#include "Date.h"

#include <iostream>
#include <string>

class Human
{
protected:
	Date birthdate;
	Name name;
public:
	Human(Date birthdate, Name name);
	~Human() = default;
};

