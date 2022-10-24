#include <iostream>

template <typename Type>
class List {
private:

    template <typename Type>
    class Node {
    public:
        Node* pNext;
        Type data;

        Node(Type data = Type(), Node* pNext = nullptr) {
            this->data = data;
            this->pNext = pNext;
        }
    };

    Node<Type> *head;
    int size;
public:
    List();
    ~List();

    Type& operator[](const int index);

    int getSize() { return this->size; };
    void push_back(Type data);
    void pop_front();
    void clear();
};



int main()
{
    List<int> list;
    list.push_back(10);
    list.push_back(20);
    std::cout << list.getSize();
}

template<typename Type>
List<Type>::List()
{
    this->size = 0;
    head = nullptr;
}

template<typename Type>
List<Type>::~List()
{
    clear();
}

template<typename Type>
Type& List<Type>::operator[](const int index)
{
    int counter = 0;
    Node<Type> *current = this->head;

    while (current != nullptr) {
        if (counter == index) {
            return current->data;
        }
        
        current = current->pNext;
        counter++;
    }
}

template<typename Type>
void List<Type>::push_back(Type data)
{
    if (head == nullptr) {
        head = new Node<Type>(data);
    }
    else {
        Node<Type> *current = this->head;
        while (current->pNext != nullptr) {
            current = current->pNext;
        }

        current->pNext = new Node<Type>(data);
    }

    this->size++;
}

template<typename Type>
void List<Type>::pop_front()
{
    Node<Type> temp = head;
    head = head->pNext;

    delete temp;
    size--;
}


template<typename Type>
void List<Type>::clear()
{
    while (size) {
        pop_front();
    }
}
