#include <iostream>
#include <exception>
#include <cstring>

#define LIST_EMTPY_EXCEPTION "List is empty"
#define LIST_FULL_EXCEPTION "List is full"


template <class Type>
class List {
    static inline Type value[5] = {0, 0, 0, 0, 0};
    Type* begin;
    Type* end;
public:
    List() {
        begin = value;
        end = value;
    }

    Type pop() {
        if (isEmpty()) throw "List is empty";
        return *begin++;
    }

    void push(Type numValue) {
        if (end - begin >= 10) throw "List is full";
        *end++ = numValue;
    }

    bool isEmpty() {
        return begin == end;
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
        else
            std::unexpected();

        return 0;
    }

    return 0;
}
