#include <iostream>

template<class T>
class Auto_ptr1 {
    T* m_ptr;
public:
    Auto_ptr1(T* ptr = nullptr) : m_ptr(ptr) {}

    ~Auto_ptr1() {
        delete m_ptr;
    }

    T& operator*() const {
        return *m_ptr;
    }

    T* operator->() const {
        return m_ptr; 
    }
};

class Item {
public:
    Item() {
        std::cout << "Item acquired\n";
    }

    ~Item() {
        std::cout << "Item destroyed\n";
    }

    void sayHi() {
        std::cout << "Hi!\n";
    }
};

void myFunction() {
    Auto_ptr1<Item> ptr(new Item);

    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;

    if(a == 0)
        return;

    ptr->sayHi();
}

int main() {
    myFunction();

    return 0;
}