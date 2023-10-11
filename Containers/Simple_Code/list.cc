// list 
#include <iostream>
#include <cassert>

template<typename T>
class List {
public:
    List();
    ~List();
    void push_back(T data);
    void print();
    int GetSize() {
        return Size;
    }

    T& operator[](const int index);

private:
    class Node {
    public:
        Node *pNext;
        T data;

        Node(T data = T(), Node *pNext = nullptr) {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int Size;

    Node *head;
};

template<typename T>
List<T>::List() {
    Size = 0;
    head = nullptr;
}

template<typename T>
List<T>::~List() {}

template<typename T>
void List<T>::print() {
    std::cout << "list\n";
}

template <typename T>
T &List<T>::operator[](const int index) {
    assert(index <= Size && index > 0);

    int count = 0;
    Node *current = this->head;

    while(current != nullptr) {
        if (count == index)
            return current->data;

        current = current->pNext;
        count++;
    }

}

template<typename T>
void List<T>::push_back(T data) {
    if(head == nullptr)
        head = new Node(data);
    else {
        Node *current = this->head;
        while(current->pNext != nullptr)  {
            current = current->pNext;
        }

        current->pNext = new Node(data);
    }

    Size++;
}

int main() {
    List<int> lst;
    lst.push_back(5); 
    lst.push_back(10); 
    lst.push_back(22);

    std::cout << lst.GetSize() << '\n';

    std::cout << lst[2] <<'\n';

    return 0;
}