#include <iostream>

int multiply(int a, int b) {
    return a*b;
}

int multiply2(int a, int b) {
    int product = a*b;
    return product;
}

int doubleNumber(int x) {
    return x*x;
}

int main() {
    std::cout << multiply (7,8) << std::endl;
    std::cout << multiply2(3, 3) << std::endl;

    std::cout << "double = " << doubleNumber(4) << std::endl;
    return 0;
}