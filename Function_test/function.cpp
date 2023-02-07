#include <iostream>

int return5() {
    return 5;
}

void doPrint() {
    std::cout << "In doPoint()" << std::endl;
}

int add(int a, int b) {
    return a + b;
}

int multiply(int c, int d) {
    return c*d;
}

int getNumbers() {
    return 5;
    return 7;
}

int main() {
    std::cout << "input"<<std::endl;
    std::cout << return5() <<std::endl;

    std::cout << getNumbers() << std::endl;
    std::cout << getNumbers() << std::endl;

    int a =15;
    int b =30;

    std::cout << "addition: " << add(a,b) << std::endl;
    std::cout << "multiplication: " << multiply(2, 7) << std::endl;
    std::cout << "hard: " << add(1, multiply(2,3)) << std::endl;


    return5();
    


    return 0;
}