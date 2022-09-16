#pragma once
#include <ostream>

int stringLen(const char* str);

class string
{
private:
	int size_;
	char* string_;
public:
	string();
	explicit string(const int size);
	~string();

	friend std::ostream& operator<<(std::ostream& out, const string& obj);

	friend bool operator > (const string& str1, const string& str2);
	friend bool operator < (const string& str1, const char* str2);
	bool operator < (const string& str2);
	bool operator > (const char* str2);

	void* operator new(size_t size);
	void* operator new[](size_t size);

	char& operator [] (const int index);

	string& operator () (const char* str);

	string& operator = (string& str);
	string& operator = (const char* str);


	int get_size();
};