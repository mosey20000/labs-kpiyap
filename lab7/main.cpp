#include <iostream>
#include <iomanip>
#define SIZE 10

template <typename Type>
Type ReplaceSimilarByKey(Type* Array, int ArraySize, int Key /* ??? */ ) {
    for (int i = 0; i < ArraySize; i++) {
        if (Array[i] > Key) {
            Array[i] = 0;
        }
    }
    return *Array;
}

template <>
char ReplaceSimilarByKey(char* Array, int ArraySize, int Key) {
    for (int i = 0; i < ArraySize; i++) {
        if (Array[i] > Key) {
            Array[i] = '0';
        }
    }
    return *Array;
}

int main() {
    int* int_array = new int [SIZE];
    char* char_array = new char [SIZE];
    double* double_array = new double [SIZE];


    // Int values
    for (int i = 0; i < SIZE; i++) {
        int_array[i] = rand() % 50 - 20;
    }

    for (int i = 0; i < SIZE; i++) {
        std::cout << std::setw(4) << int_array[i] ;
    }

    std::cout << std::endl;
    ReplaceSimilarByKey(int_array, SIZE, 5);

    std::cout << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << std::setw(4) << int_array[i];
    }
    //
    std::cout << std::endl << std::setw(10) << " Char values: " << std::endl;
    // Char values
    for (int i = 0; i < SIZE; i++) {
        char_array[i] = rand() % 57 + 65;
    }

    for (int i = 0; i < SIZE; i++) {
        std::cout << char_array[i] << ' ';
    }

    ReplaceSimilarByKey(char_array, SIZE, 96);

    std::cout << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << char_array[i] << ' ';
    }
    //
    std::cout << std::endl << "Double values: " << std::endl;
    // Double values
    for (int i = 0; i < SIZE; i++) {
        double_array[i] = rand() % 45 - 20;
    }

    for (int i = 0; i < SIZE; i++) {
        std::cout << std::setw(4) << double_array[i] ;
    }

    std::cout << std::endl;
    ReplaceSimilarByKey(double_array, SIZE, 5);

    std::cout << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << std::setw(4) << double_array[i];
    }

    delete[] char_array;
    delete[] int_array;
    delete[] double_array;
}