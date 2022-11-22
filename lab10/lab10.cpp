#include <iostream>
#include <string>

template <typename T>
class Node  {
public:
    T value;
    Node<T>* next;
    
    Node(T value) {
        this->value = value;
        this->next = nullptr;
    }
};

template <typename T>
class List {
    Node<T>* first;
    Node<T>* last;

public:
     List() {
        this->first = nullptr;
        this->last = nullptr;
    }

    bool isEmpty() {
        return this->first == nullptr;
    }


    void push_back (T value) {
        Node<T>* p = new Node(value);
        if (this->isEmpty()) {
            first = p;
            last = p;
            return;
        }
        last->next = p;
        last = p;
    }

    void print()  {
        if (isEmpty()) 
            throw "List is empty";

        Node<T>* p = this->first;
        while (p) {
            std::cout << p->value << " ";
            p = p->next;
        }
        std::cout << std::endl;
    }

    void remove_first() {
        if (isEmpty()) 
            throw "List is empty";
        Node<T>* p = first;
        first = p->next;
        delete p;
    }

    void remove_last() {
        if (isEmpty()) 
            throw "List is empty";

        if (first == last) {
            remove_first();
            return;
        }

        Node<T>* p = first;
        while (p->next != last)
            p = p->next;
        
        p->next = nullptr;
        delete last;
        last = p;
    }

    Node<T>* operator [] (const int index) {
        if (isEmpty())
        return nullptr;

        Node<T>* p = first;
        for (int i = 0; i < index; i++) {
            p = p->next;
            if (!p) return nullptr;
        }

        return p;
    }
};


int main(int args, char* argv[]) {

    List<std::string> list;
    try {
        list.push_back("First");
        list.push_back("String2");
        list.push_back("String3");
        list.push_back("String4");
        list.push_back("String5");
        list.push_back("Last");
        
        list.print();

        list.remove_first();
        list.remove_last();

        list.print();

        std::cout << list[2]->value << std::endl;
    } catch (const char* message) {
        std::cout << "Error: " << message << std::endl;
    }

    List<int> list2;
    try {
        list2.print();
    } catch (const char* message) {
        std::cout << "Error: " << message << std::endl;
    }

    return 0;
}