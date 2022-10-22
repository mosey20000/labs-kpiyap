#pragma once

#include <string>
#include <iostream>

namespace myNamespace {
class Architect {
private:
	std::string name;
	std::string surname;
public:
	Architect() = default;
	Architect(std::string name, std::string surname);
	~Architect() = default;

	std::ostream& operator << (std::ostream& out);
	std::string getName();
	std::string getSurname();
};

}
