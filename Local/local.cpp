#include <iostream>

int add(int a, int b) {
    return a +b;
}

void doMath(int a) {
    int b = 5;
    std::cout << "doMath: a = " <<a << "and b= " << b << std::endl;
    a =4;
    std::cout << "doMath: a = " <<a << "and b= " << b << std::endl;

}

int main() {
    int x = 7;
    int y =8;
    int a = 6;
    int b= 7;
    std::cout << add(a,b) << std::endl;

    std::cout << "main: a = " <<a << "and b= " << b << std::endl;
    doMath(a);
    std::cout << "main: a = " <<a << "and b= " << b << std::endl;

    return 0;
}