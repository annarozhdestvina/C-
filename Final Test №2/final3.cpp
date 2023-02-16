#include <iostream>

void print_Result (double a, double b, char symbol) {
    if (symbol == '+') 
        std::cout <<a << symbol << b << " = "<< a+b << '\n';
    if (symbol == '-') 
        std::cout <<a << symbol << b << " = "<< a-b << '\n';
    if (symbol == '*') 
        std::cout <<a << symbol << b << " = "<< a*b << '\n';
    if (symbol == '/') 
        std::cout <<a << symbol << b << " = "<< a/b << '\n';

}

int main() {
    double a, b;
    std::cout << "enter two double " << '\n';
    std::cin >> a;
    std::cin >> b;

    char symbol;

    std::cout << "Enter one of the following: +, -, *, or /: *" << '\n';
    std::cin >> symbol;

    print_Result(a, b, symbol);
    
    return 0;
}