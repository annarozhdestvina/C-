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

template<typename T, typename T2>
class MyClass {
private:
    T m_value;
    T2 m_value2;

public:
    void DataTypeSize() {
        std::cout << sizeof(m_value) << '\n';
        std::cout << typeid(m_value).name() << '\n';
        std::cout << sizeof(m_value2) << '\n';
        std::cout << typeid(m_value2).name() << '\n';
    }

    // MyClass(T value) : m_value(value) {}
    MyClass(T value, T2 value2) {
        this->m_value = value;
        this->m_value2 = value2;
    }

    T Foo() {
        return m_value;
    }
};


int main() {
    int a = 5;
    double b = 6.66;

    MyClass<int, double> c(a, b);
    MyClass n(a, b); // так как класс шаблонный мы не можем просто создать
    // обьект этого класаа без указания типа и передать туда переменную
    // а в 17 версии можно
    n.DataTypeSize();

    // при создания шаблолнного класса указать тип 

    MyClass g (88.9, 6.f);
    g.DataTypeSize();
    g.Foo();

    Point point;
    MyClass clas(point, a);
    clas.DataTypeSize();

    return 0;
}

