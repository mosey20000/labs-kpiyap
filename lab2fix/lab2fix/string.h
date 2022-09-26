#pragma once
#ifndef STRING_H
#define STRING_H

#include <iostream>


class string
{
private:
    char* string_;
    int size_;
public:
    string(const char* string = "");
    string(const string& object);
    ~string();

    string& operator = (char* str); // work
    string& operator = (const string& object); // work

    friend std::ostream& operator << (std::ostream& out, string& object); // work

    char& operator[] (const int index); // work
    string& operator () (const char* str); // work

    string& operator + (const string& object); // work!!!
    string& operator ++ (); // work
    string& operator ++ (const int empty); // work
    string& operator -- (); // work

    bool operator == (const string& object); // work
    bool operator == (const char* str); // work

    bool operator > (const char* str);  // work
    bool operator < (const string& object); // work

    friend bool operator > (const string& object1, const string& object2); // work
    friend bool operator < (const string& object, const char* str); // work

};

#endif // STRING_H


