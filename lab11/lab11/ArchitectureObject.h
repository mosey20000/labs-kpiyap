#pragma once
#include <iostream>
#include "Architect.h"
#include "Coordinates.h"
#include <string>

namespace myNamespace {

class ArchitectureObject {
protected:
	Architect architect;
	Coordinates coordinates;
	int constructionYear;
public:
	ArchitectureObject() = default;
	ArchitectureObject(Architect architect, Coordinates coordinates, int constructionYear);
	~ArchitectureObject() = default;
};

}
