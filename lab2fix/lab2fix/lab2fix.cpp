#include <iostream>
#include "string.h"

#define MAXSIZE 100

int main()
{
    string str1, str2("ABCDFE Planet"), str3("Hello World");
    std::cout << "Initialization with overloaded operator ()" << std::endl;
    str1("Hello C++");
    std::cout << str1 << "\n\n";

    std::cout << "Object of class string:" << std::endl;
    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;
    std::cout << str3 << std::endl;

    std::cout << "Overloaded operator = : \n";
    str1 = str2;
    std::cout << "str1 = " << str1 << "\n\n";

    std::cout << "Overloaded operator [] : \n";
    std::cout << "str2[3] = " << str2[3] << std::endl << std::endl;

    std::cout << "Overloaded operators < and > with class methods and friend-functions \n\n";
    if (str2 == str3) std::cout << "str2 == str3" << std::endl;
    else std::cout << "str2 != str3" << std::endl;

    if (str2 < str3) std::cout << "str2 < str3" << std::endl;
    else std::cout << "str2 > str3" << std::endl;

    std::cout << "Overloaded operator + (copy of the strcat function)" << std::endl;
    str2 + str3;
    std::cout << str2 << std::endl;

    std::cout << "Overloaded unary operator of prefix increment" << std::endl;
    std::cout << ++str1 << std::endl;

    std::cout << "Overloaded unary operator of postfix increment" << std::endl;
    std::cout << str1++ << std::endl;

    std::cout << "Overloaded unary operator of prefix decrement" << std::endl;
    std::cout << --str1 << std::endl;

    std::cout << "Enter a string for char str5: ";
    char* str5 = new char[MAXSIZE];
    std::cin.getline(str5, MAXSIZE);

    std::cout << "str5 = " << str5 << std::endl;

    if (str2 == str5) std::cout << "str2 == str5" << std::endl;
    else std::cout << "str2 != str5" << std::endl;

    if (str2 > str5) std::cout << "str2 > str5" << std::endl;
    else std::cout << "str2 < str5" << std::endl;
    return 0;
}
