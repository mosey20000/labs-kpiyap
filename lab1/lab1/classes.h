#pragma once
#include <string>
#include <iostream>

class product
{
private:
	int id_;
	std::string name_;
	double cost_;
public:
	product(const int id = 0, const std::string name = "", const double cost = 0);
	~product();

	void set_id(const int id);
	void set_name(const std::string name);
	void set_cost(double cost);

	void put_data();

	friend class salesman;
};

class salesman
{
public:
	void change_cost(product& prod, double cost);
	~salesman() {};
};



