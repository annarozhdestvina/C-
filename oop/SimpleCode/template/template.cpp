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

    MyClass(T value) : m_value(value) {}
};


int main() {

    MyClass g = (88.9);
    g.DataTypeSize();

    return 0;
}

