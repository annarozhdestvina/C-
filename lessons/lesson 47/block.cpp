#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a = 5;
    int b = 6;
    add(a, b);
    std::cout << "a+b = " << add(a, b) << '\n';
    
    return 0;
}