#include <iostream>

template <class ValueType>
class Node {
public:
    ValueType value;
    Node<ValueType>* pNext;

    explicit Node(ValueType mValue = ValueType(), Node* pNext = nullptr) {
        this->pNext = pNext;
        this->value = mValue;
    }

};

template <class ValueType>
class List {
private:
    int size;
    Node<ValueType>* head;
public:
    List() {
        size = 0;
        head = nullptr;
    }

    ~List() {
        while (size)
            popHead();
    }


    void popHead() {
        Node<ValueType>* temp = head;
        head = head->pNext;
        delete temp;
        size--;
    }

    void pushHead(ValueType data) {
        head = new Node<ValueType>(data, head);
        size++;
    }

    Node<ValueType>* find(ValueType data)
    {
        Node<ValueType>* current = head;
        while (current != nullptr)
        {
            if (current->value == data)
                return current;
            current = current->pNext;
        }
        return nullptr;
    }

    void print() {
        for (auto i: *this)
            std::cout << i.value << " ";
        std::cout << std::endl;
    }
};

int main() {
    List<int> lst;
    lst.pushHead(10);
    lst.pushHead(20);
    lst.print();
    lst.popHead();
    lst.popHead();

    return 0;
}
