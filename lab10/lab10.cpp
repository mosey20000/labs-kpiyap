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

    while (true) {
        try {
            std::cout << "\n\n\n";
            std::cout << "Menu: \n";
            std::cout << "1. push_back\n";
            std::cout << "2. remove_first\n";
            std::cout << "3. remove_last\n";
            std::cout << "4. print\n";
            std::cout << "5. find [index]\n";
            int option;
            std::cin >> option;

            switch (option) {
            case 1: {
               std::cout << "Enter value (std::string): ";
               std::string value;
               std::cin >> value;
               list.push_back(value);
               break;
            }
            case 2: {
                list.remove_first();
                break;
            }
            case 3: {
                list.remove_last();
                break;
            }
            case 4: {
                list.print();
                break;
            }
            case 5: {
                int index;
                std::cout << "Enter index: ";
                std::cin >> index;
                std::cout << list[index];
                break;
            }
            default:
               break;
            }
        } catch (const char* message) {
           std::cout << "Error: " << message << std::endl;
        }
    }


    return 0;
}