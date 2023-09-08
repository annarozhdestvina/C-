#include <iostream>

// указатели

int main() {
    int a = 5;
    int b = a;
    int *px = &a;

    std::cout << b <<'\n';
    std::cout << *px <<'\n';

    a += 6;
    std::cout << b <<'\n';
    std::cout << *px <<'\n';


}