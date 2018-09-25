#include <iostream>
#include <vector>
#include <string> // подключаем строки
#include <fstream> // подключаем файлы

class StringManipilator {
private:
    const std::string inputFile = "input.txt";
    const std::string outputFile = "output.txt";
public:
    StringManipilator() = default;
    ~StringManipilator() = default;

    void makeList() {
        std::fstream inputStream;
        inputStream.open(this->inputFile);

        if (!inputStream.is_open()) 
            throw "Error: can`t open the file.";

        std::vector<std::string> data;

        std::string tempStr;
        while (std::getline(inputStream, tempStr)) {
            data.push_back(tempStr.substr(tempStr.find("=") + 1, tempStr.size() - tempStr.find("=")));
        }

        inputStream.close();

        std::ofstream outputStream;
        outputStream.open(this->outputFile);
        if (!outputStream.is_open())
            throw "Error: can`t open the file";

        for (auto& vect : data) {
            outputStream << vect;
            outputStream << " ";
        }

        return;
    }
};


int main() {
    StringManipilator strManip;
    strManip.makeList();
    return 0;
}