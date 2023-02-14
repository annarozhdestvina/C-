#include <iostream>

int readNumber (int value1) {
    std::cout << "input integer: " << '\n';
    std::cin >> value1;
    return value1;
} 

void writeAnsver (int value1, int value2) {
    int result = value1 + value2;
    std::cout << "Sum = " << result << '\n';

}

int main() {
    int value1=readNumber(value1);
    int value2=readNumber(value1);
    /*std::cout << "input x: " << '\n';
    std::cin >> value1;
    std::cout << "input y: " << '\n';
    std::cin >> value2;
*/
    writeAnsver(value1, value2);

    return 0;
}