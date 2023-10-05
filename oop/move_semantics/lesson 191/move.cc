#include <iostream>

template<class T>
class Auto_ptr3 {
    T* m_ptr;
public:
    Auto_ptr3(T* ptr = nullptr) : m_ptr(ptr) {}

    ~Auto_ptr3() {
        delete m_ptr;
    }

    // Конструктор копирования
    Auto_ptr3(const Auto_ptr3 &x) {
        m_ptr = new T;
        *m_ptr = *x.m_ptr;
    }

    // Оператор присваивания копированием
    Auto_ptr3& operator=(const Auto_ptr3 &x) {
        if(&x == this)
            return *this;
        
        delete m_ptr;

        m_ptr = new T;
        *m_ptr = *x.m_ptr;
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
	Item() { std::cout << "Item acquired\n"; }
	~Item() { std::cout << "Item destroyed\n"; }
};

Auto_ptr3<Item> generatorItem() {
    Auto_ptr3<Item> item(new Item);
    return item;
}

int main() {
    Auto_ptr3<Item> mainItem;
    mainItem = generatorItem();

    return 0;
}