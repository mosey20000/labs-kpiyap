#include "String.h"
#include <string>
#include <iostream>

string::string()
{
	this->string_ = nullptr;
	this->size_ = 0;
}

string::string(const int size = 0)
{
	size_ = size;
	string_ = new char[size];
}

string::~string()
{
	if (this->string_ != nullptr)
	{
		delete[] string_;
		this->string_ = nullptr;
	}
}

int string::get_size()
{
	return size_;
}

void* string::operator new(size_t size)
{
	void* ptr = nullptr;
	ptr = malloc(size);
	if (ptr == nullptr) throw new std::exception("nullptr error.");

	return ptr;
}

void* string::operator new[](size_t size)
{
	void* ptr = nullptr;
	ptr = malloc(size);
	if (ptr == nullptr) throw new std::exception("nullptr error.");

	return ptr;
}

std::ostream& operator<<(std::ostream& out, const string& obj)
{
	out << obj.string_ << std::endl;
	return out;
}

string& string::operator()(const char* str)
{
	this->size_ = stringLen(str);
	this->string_ = new char[this->size_];

	for (int i = 0; i < this->size_; i++)
		this->string_[i] = str[i];

	return *this;
}

string& string::operator=(const char* str)
{
	if (this->string_ == nullptr)
		delete[] this->string_;

	this->size_ = stringLen(str);
	this->string_ = new char[this->size_];

	for (int i = 0; i < this->size_; i++)
		this->string_[i] = str[i];

	return *this;
}

string& string::operator=(string& str)
{
	if (this->string_ == nullptr)
		delete[] this->string_;

	this->size_ = stringLen(str.string_);
	this->string_ = new char[this->size_];

	for (int i = 0; i < this->size_; i++)
		this->string_[i] = str.string_[i];

	return *this;
}



int stringLen(const char* str)
{
	if (str == nullptr)
		return 0;

	int length = 0;
	for (; str[length] != '\0'; length++);
	if (length != 0) length++;

	return length;
}


char& string::operator[](const int index)
{
	if (index < 0 || index >= this->size_)
	{
		std::cout << "Index is below zero or above the size of string.";
		return this->string_[0];
	}

	return this->string_[index];
}

bool string::operator<(const string& str2)
{
	int result, i = 0;
	while (this->string_[i] == str2.string_[i])
	{
		if (this->string_[i] == '\0' && str2.string_[i] == '\0')
			return false;

		if (this->string_[i] == '\n' && str2.string_[i] == '\n')
			return false;

		i++;
	}
	return result = this->string_[i] < str2.string_[i] ? true : false;
}

bool operator > (const string& str1, const string& str2)
{
	int result, i = 0;
	while (str1.string_[i] == str2.string_[i])
	{
		if (str1.string_[i] == '\0' && str2.string_[i] == '\0')
			return false;

		if (str1.string_[i] == '\n' && str2.string_[i] == '\n')
			return false;

		i++;
	}
	return result = str1.string_[i] > str2.string_[i] ? true : false;
}