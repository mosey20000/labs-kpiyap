#include "string.h"


#include <string.h>
#include <iostream>
#include <iomanip>

int string_length(const char* str) {
    if (str == nullptr) return 0;

    int length = 0;
    for (; str[length] != '\0'; length++);
    length++;


    return length;
}

string::string(const char* str) {
    this->size_ = string_length(str);
    this->string_ = new char[this->size_];

    for (int i = 0; i < this->size_; i++) {
        this->string_[i] = str[i];
    }

    return;
}

string::~string() {
    if (this->string_ != nullptr) {
        delete[] this->string_;
        this->string_ = nullptr;
    }
}

std::ostream& operator << (std::ostream& out, string& object) {
    out << std::setw(4) << object.string_;
    return out;
}

string& string::operator = (char* str) {

    if (this->string_ != nullptr) {
        delete[] this->string_;
    }

    this->size_ = string_length(str);
    this->string_ = new char[this->size_];

    for (int i = 0; i < this->size_; i++) {
        this->string_[i] = str[i];
    }

    return *this;
}

string& string::operator = (const string& object) {
    if (this->string_ != nullptr) {
        delete[] this->string_;
    }

    this->size_ = object.size_;
    this->string_ = new char[this->size_];

    for (int i = 0; i < this->size_; i++) {
        this->string_[i] = object.string_[i];
    }

    return *this;
}

char& string::operator[] (const int index) {
    if (index < 0) {
        std::cout << "Error. Index can`t be lower than zero.";
        return this->string_[0];
    }

    if (index > this->size_) {
        std::cout << "Error. Index cant` be higher than size of the string.";
        return this->string_[0];
    }

    return this->string_[index];
}

string& string::operator () (const char* str) {

    if (this->string_ != nullptr) {
        delete[] this->string_;
    }

    this->size_ = string_length(str);
    this->string_ = new char[this->size_];

    for (int i = 0; i < this->size_; i++) {
        this->string_[i] = str[i];
    }

    return *this;
}

bool string::operator== (const char* str) {
    int i = 0;
    while (this->string_[i] == str[i]) {
        if (this->string_[i] == '\0' && str[i] == '\0') return true;
        if (this->string_[i] == '\n' && str[i] == '\n') return true;
        i++;
    }

    return false;
}

bool string::operator== (const string& object) {
    int i = 0;
    while (this->string_[i] == object.string_[i]) {
        if (this->string_[i] == '\0' && object.string_[i] == '\0') return true;
        if (this->string_[i] == '\n' && object.string_[i] == '\n') return true;
        i++;
    }

    return false;
}


bool string::operator> (const char* str) {
    int i = 0;
    while (this->string_[i] == str[i]) {
        if (this->string_[i] == '\0' && str[i] == '\0') return true;
        if (this->string_[i] == '\n' && str[i] == '\n') return true;
        i++;
    }

    return this->string_[i] < str[i] ? true : false;
}

bool string::operator< (const string& object) {
    int i = 0;
    while (this->string_[i] == object.string_[i]) {
        if (this->string_[i] == '\0' && object.string_[i] == '\0') return true;
        if (this->string_[i] == '\n' && object.string_[i] == '\n') return true;
        i++;
    }

    return this->string_[i] > object.string_[i] ? true : false;
}

bool operator > (const string& object1, const string& object2) {
    int i = 0;
    while (object1.string_[i] == object2.string_[i]) {
        if (object1.string_[i] == '\0' && object2.string_[i] == '\0') return true;
        if (object1.string_[i] == '\n' && object2.string_[i] == '\n') return true;
        i++;
    }

    return object1.string_[i] > object2.string_[i] ? true : false;
}

bool operator < (const string& object, const char* str) {
    int i = 0;
    while (object.string_[i] == str[i]) {
        if (object.string_[i] == '\0' && str[i] == '\0') return true;
        if (object.string_[i] == '\n' && str[i] == '\n') return true;
        i++;
    }

    return object.string_[i] > str[i] ? true : false;
}

string::string(const string& object) {
    this->size_ = object.size_;
    this->string_ = new char[this->size_];
    for (int i = 0; i < this->size_; i++)
    {
        this->string_[i] = object.string_[i];
    }
}

string& string::operator+(const string& object) {
    if (this->string_ == nullptr) {
        *this = object;
        return *this;
    }

    string temp = *this;
    delete[] this->string_;
    this->size_ = temp.size_ + object.size_ - 1;
    this->string_ = new char[this->size_];
    int i = 0;
    for (; i < temp.size_ - 1; i++) {
        this->string_[i] = temp.string_[i];
    }

    for (int j = 0; j < this->size_; j++, i++) {
        this->string_[i] = object.string_[j];

    }

    return *this;
}


string& string::operator++() {
    string temp = *this;

    delete[] this->string_;
    this->size_++;
    this->string_ = new char[this->size_];

    int i = 0;
    for (i = 0; i < temp.size_; i++) {
        this->string_[i] = temp.string_[i];
    }

    i--;
    this->string_[i++] = '?';
    this->string_[i] = '\0';

    return *this;
}

string& string::operator++(const int empty) {
    string temp = *this;

    delete[] this->string_;
    this->size_++;
    this->string_ = new char[this->size_];

    int i = 0;
    for (i = 0; i < temp.size_; i++) {
        this->string_[i] = temp.string_[i];
    }

    i--;
    this->string_[i++] = '!';
    this->string_[i] = '\0';

    return *this;
}

string& string::operator--() {
    string temp = *this;

    delete[] this->string_;
    this->size_++;
    this->string_ = new char[this->size_];

    int i = 0;
    for (int j = 0, i = 1; i < temp.size_ - 1; i++, j++) {
        this->string_[j] = temp.string_[i];
    }
    this->string_[i] = '\0';

    return *this;
}