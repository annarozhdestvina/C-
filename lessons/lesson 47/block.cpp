#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a = 5;
    int b = 6;
    add(a, b);
    std::cout << "a+b = " << add(a, b) << '\n';

    std::cout <<"enter a value\n";
    int value;
    std::cin >> value;

    if(value >= 0) {
        std::cout << "value is positive " << value << '\n';
    } else {
        std::cout << "value is negative " << value << '\n';
    }

    return 0;
}