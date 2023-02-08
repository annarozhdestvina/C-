#include <iostream>

int getInteger() {
    std::cout << "enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}

int main() {
    int x = getInteger();
    int y = getInteger();
    
    std::cout << x << " + " << y << " = " << x+y << '\n';
    return 0;
}