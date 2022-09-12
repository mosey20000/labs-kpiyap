#include "classes.h"


product::product(const int id, const std::string name, const double cost)
{
	id_ = id;
	name_ = name;
	cost_ = cost;
}

product::~product()
{
	name_.clear();
}

void product::set_cost(double cost)
{
	cost_ = cost;
}

void product::put_data()
{
	std::cout << "ID - " << id_ << std::endl;
	std::cout << "NAME - " << name_ << std::endl;
	std::cout << "COST - " << cost_ << std::endl;
	std::cout << std::endl;
}

void product::set_id(const int id)
{
	if (id < 0)
	{
		std::cerr << "Uncorrect ID";
		return;
	}

	id_ = id;
}

void product::set_name(const std::string name)
{
	name_ = name;
}

void salesman::change_cost(product& prod, double cost)
{
	prod.cost_ = cost;
}
