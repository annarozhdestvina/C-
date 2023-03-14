#include <iostream>
#include <algorithm>


int main() {
    int a = 3;
    int b = 5;
    std::cout << "Before swap a = " << a << " b = " << b << '\n';
    std::swap(a, b);
    std::cout << "After swap a = " << a << " b = " << b << '\n';
    
}