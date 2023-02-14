#include <iostream>

int readNumber () {
    std::cout << "input integer: " << '\n';
    int value1;
    std::cin >> value1;
    return value1;
} 

void writeAnsver (int value1, int value2) {
    int result = value1 + value2;
    std::cout << "Sum = " << result << '\n';

}