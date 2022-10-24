#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include "Name.h"


int main() {
	Name name("Yahor", "Maksimchik", "Valerievich");
	name.putFullname();
	std::cout << std::endl;
	name.putName();
	return 0;
}
