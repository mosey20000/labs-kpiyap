//
// Created by User on 27.09.2022.
//

#include "CharArray.h"

CharArray::CharArray(const int sizeX, const int sizeY) {
    sizeX_ = sizeX;
    sizeY_ = sizeY;

    array_ = new char* [sizeX_];
    for (int i = 0; i < sizeX_; i++) {
        array_[i] = new char [sizeX_];
    }
}

CharArray::~CharArray() {
    if (array_ != nullptr) {
        for (int i = 0; i < sizeX_; i++) {
            delete[] array_[i];
        }

        delete[] array_;
    }
}
