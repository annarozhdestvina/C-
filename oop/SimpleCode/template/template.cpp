#include <iostream>
// шаблоны класса используем тогда, когда нам надо, чтобы класс работал с разными типами данных
// и для каждого отдельного типа данныз не надо писать отдельную реализацию

class Point {
public:
    Point() {
        x = y = z = 0;
    }

    Point(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    int x;
    int y;
    int z;
};

template<typename T>
class MyClass {
private:
    T m_value;

public:
    void DataTypeSize() {
        std::cout << sizeof(m_value) << '\n';
        std::cout << typeid(m_value).name() << '\n';
    }

    // MyClass(T value) : m_value(value) {}
    MyClass(T value) {
        this->m_value = value;
    }
};


int main() {
    int a = 5;

    MyClass<int> c(a);
    MyClass n(a); // так как класс шаблонный мы не можем просто создать
    // обьект этого класаа без указания типа и передать туда переменную
    // а в 17 версии можно

    // при создания шаблолнного класса указать тип 

    MyClass g = (88.9);
    g.DataTypeSize();

    return 0;
}

