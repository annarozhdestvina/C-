#include <iostream>

int dounbleNumber (int x) {
    return x*x;
}

int main() {
    int x;
    std::cout << "input x:" << std::endl;
    std::cin >> x;
    std::cout << "Double x = " << dounbleNumber(x) << std::endl;

    return 0;
}