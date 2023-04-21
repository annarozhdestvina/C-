#include <iostream>

class Numbers {
public:
    int a;
    int b;

    void set() {
        std::cout << "enter a number a: ";
        std::cin >> a;
        std::cout << "enter a number b: ";
        std::cin >> b;
    }

    void setRav(int m_a, int m_b) {
        a = m_a;
        b = m_b;
    }

    void print() {
        std::cout << "a = " << a << '\n';
        std::cout << "b = " << b << '\n';
    }
};

int main() {
    Numbers mynumbers;
    mynumbers.set();
    mynumbers.print();

    mynumbers.setRav(4, 4);
    mynumbers.print();
}