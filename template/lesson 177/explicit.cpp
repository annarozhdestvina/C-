#include <iostream>
template <class T>
class Repository {
private:
    T m_value;
public:
    Repository(T value) {
        m_value = value;
    }
 
    ~Repository()
    {}
 
    void print() {
        std::cout << m_value << '\n';
    }
};

int main() {
    // Инициализируем объекты класса
    Repository<int> nValue(7);
    Repository<double> dValue(8.4);
 
    // Выводим значения объектов класса
    nValue.print();
    dValue.print();
}