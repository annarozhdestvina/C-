#include <iostream>

template<class T>
class Auto_ptr2 {
    T* m_ptr;
public:
    Auto_ptr2(T* ptr = nullptr) : m_ptr(ptr) {}

    ~Auto_ptr2() {
        delete m_ptr;
    }

    Auto_ptr2(Auto_ptr2& a) {
        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
    }

    Auto_ptr2& operator=(Auto_ptr2& a) {
        if (&a == this)
            return *this;

        delete m_ptr;
        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
        return *this;
    }

    T& operator*() const {
        return *m_ptr;
    }

    T* operator->() const {
        return m_ptr; 
    }

    bool isNull() const {
        return m_ptr == nullptr;
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
};
 

int main() {
    Auto_ptr2<Item> item1(new Item);
	Auto_ptr2<Item> item2; // начнем с nullptr
 
	std::cout << "item1 is " << (item1.isNull() ? "null\n" : "not null\n");
	std::cout << "item2 is " << (item2.isNull() ? "null\n" : "not null\n");
 
	item2 = item1; // item2 теперь является "владельцем" значения item1, объекту item1 присваивается null
 
	std::cout << "Ownership transferred\n";
 
	std::cout << "item1 is " << (item1.isNull() ? "null\n" : "not null\n");
	std::cout << "item2 is " << (item2.isNull() ? "null\n" : "not null\n");
 

    return 0;
}