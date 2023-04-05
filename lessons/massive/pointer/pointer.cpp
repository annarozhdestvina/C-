#include <iostream>

int main() {
    int a = 7;
    std::cout << a << '\n';
    std::cout << &a << '\n';
    std::cout << *&a << '\n';

    int value = 5;
    int *pointer = &value;
    std::cout << *pointer << '\n';

    int x(4);
    std::cout << typeid(&x).name();
}