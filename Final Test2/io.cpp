#include <iostream>

int readNumber () {
    std::cout << "input integer: " << '\n';
    int value1;
    std::cin >> value1;
    return value1;
} 

void writeAnswer (int result) {
    std::cout << "Sum = " << result << '\n';

}