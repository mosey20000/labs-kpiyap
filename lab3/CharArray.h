//
// Created by User on 27.09.2022.
//

#ifndef LAB3_CHARARRAY_H
#define LAB3_CHARARRAY_H


class CharArray {
private:
    char **array_;
    int sizeX_, sizeY_;
public:
    CharArray(const int sizeX, const int sizeY);
    ~CharArray();

};


#endif //LAB3_CHARARRAY_H
