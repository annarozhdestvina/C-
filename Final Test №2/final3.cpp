#include <iostream>

int main() {
    double a, b;
    std::cout << "enter two double " << '\n';
    std::cin >> a;
    std::cin >> b;

    char symbol;

    std::cout << "Enter one of the following: +, -, *, or /: *" << '\n';
    std::cin >> symbol;

    if (symbol == '+') 
        std::cout <<a << symbol << b << " = "<< a+b << '\n';
    if (symbol == '-') 
        std::cout <<a << symbol << b << " = "<< a-b << '\n';
    if (symbol == '*') 
        std::cout <<a << symbol << b << " = "<< a*b << '\n';
    if (symbol == '/') 
        std::cout <<a << symbol << b << " = "<< a/b << '\n';

}