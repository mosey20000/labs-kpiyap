#include <iostream>
#include <exception>
#include <cstring>

#define LIST_EMTPY_EXCEPTION "List is empty"
#define LIST_FULL_EXCEPTION "List is full"


template <class Type>
class List {
    static inline Type value[5] = {0, 0, 0, 0, 0};
    int size;
    Type* begin;
    Type* end;
public:
    List() {
        begin = value;
        end = value;
        size = 0;
    }

    Type pop() {
        if (isEmpty()) throw "List is empty";
        return *begin++;
    }

    void push(Type numValue) {
        if (end - begin >= 5) throw "List is full";
        *end++ = numValue;
        size++;
    }

    bool isEmpty() {
        return begin == end;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            std::cout << value[i] << " ";
        }
    }
};

void my_terminate() {
    printf("End of program.");
    abort();
}

void my_unexpected() {
    printf("Unknown error.");
    abort();
}

int main() {
    std::set_terminate(my_terminate);
    std::set_unexpected(my_unexpected);

    List<int> q;

    try
    {
        while (true)
        {
            std::cout << "g - pop, p - push, e - check isEmpty, s - print"<< std::endl;
            switch (getchar())
            {
                case 'g':
                    q.pop();
                    break;
                case 'p':
                    int tmp;
                    std::cin >> tmp;
                    q.push(tmp);
                    break;
                case 'e':
                    if(q.isEmpty())
                        std::cout << "is empty" << std::endl;
                    else
                        std::cout << "not empty" << std::endl;
                    break;
                case '\n':
                    break;
                case 's':
                    q.print();
                    break;
                default:
                    std::cout << "you can write 'a', 'd' or 'e' character" << std::endl;
                    break;
            }
        }
    }
    catch(const char* msg)
    {
        if (!strcmp(msg, LIST_EMTPY_EXCEPTION))
            std::cout << "Already empty" << std::endl;
        else if (!strcmp(msg, LIST_FULL_EXCEPTION))
            std::cout << "Already full" << std::endl;

        return 0;
    }
    catch(...) {
        std::unexpected();
    }

    return 0;
}
