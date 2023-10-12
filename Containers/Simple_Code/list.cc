// list 
#include <iostream>
#include <cassert>

template<typename T>
class List {
public:
    List();
    ~List();
    void push_back(T data);
    void pop_front();

    void push_front(T data);

    void insert(T value, int index);
    void removeAT(int index);
    
    void clear();
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
List<T>::~List() {
    clear();
}

template<typename T>
void List<T>::print() {
    std::cout << "list\n";
}

template <typename T>
T &List<T>::operator[](const int index) {
    assert(index <= Size && index >= 0);

    int count = 0;
    Node *current = this->head;

    while(current != nullptr) {
        if (count == index)
            break;
            // return current->data;
        current = current->pNext;
        count++;
    }
    return current->data;
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

template <typename T>
void List<T>::insert(T value, int index) {
    if(!index) 
        push_front(value);    
    else {    
        Node *previous = this->head; 
        for(int i = 0; i < index - 1; i++) 
            previous = previous->pNext;
        
        Node *newnode = new Node(value, previous->pNext);
        previous->pNext = newnode;
    }
    Size++;

}

template <typename T>
void List<T>::removeAT(int index) {
    if(index > Size || index < 0)
        assert(index > Size && "invalid index!!");

    if(index == 0)
        pop_front();
    else {
        Node *previous = this->head;
        for(int i = 0; i < index - 1; i++) 
            previous = previous->pNext;
        Node *current = this->head;
        for(int i = 0; i < index; i++) 
            current = current->pNext;
        previous->pNext = current->pNext; 
    
        Size--;
        delete current;
    }
}

template <typename T>
void List<T>::push_front(T data) {
    head = new Node(data, head); 
    Size++;
}

template <typename T>
void List<T>::pop_front() {
    Node* tmp = head;
    head = head->pNext;

    delete tmp;
    Size--;
}

template <typename T>
void List<T>::clear() {
    // while(head != nullptr)
    while(Size) 
        pop_front();
    
}

int main() {
    List<int> lst;
    lst.push_back(5); 
    lst.push_back(10); 
    lst.push_back(22);

    std::cout << lst.GetSize() << '\n';

    // std::cout << lst[2] <<'\n';
    // std::cout << lst[0] <<'\n';

    for(int i = 0; i < lst.GetSize(); i++)
        std::cout << "list: " << lst[i] << ' ';
    std::cout << '\n';

    lst.pop_front();
    for(int i = 0; i < lst.GetSize(); i++)
        std::cout << "list: " << lst[i] << ' ';
    std::cout << '\n';

    lst.clear();
    std::cout << "list: " << lst.GetSize();
    std::cout << '\n';

    lst.push_front(90);
    lst.push_front(1);
    lst.push_front(9);
    for(int i = 0; i < lst.GetSize(); i++)
        std::cout << "list: " << lst[i] << ' ';
    std::cout << '\n';

    lst.insert(6, 3);
    for(int i = 0; i < lst.GetSize(); i++)
        std::cout << "list: " << lst[i] << ' ';
    std::cout << '\n';

    lst.removeAT(0);
    for(int i = 0; i < lst.GetSize(); i++)
        std::cout << "list: " << lst[i] << ' ';
    std::cout << '\n';


    return 0;
}