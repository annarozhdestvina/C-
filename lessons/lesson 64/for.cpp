#include <iostream>

int sumTo(int value) {
    int result = 0;
    while(value > 0) {
        result += value;
        value--;
    }
    return result;
}

int main() {
    int aa, bb;
    for (aa = 0, bb = 9; aa < 10; aa++, bb--) {
        std::cout <<aa<<' ' << bb <<'\n';
    }

    for (int a = 0; a < 21; a = a+2) {
        std::cout << a << ' ';
    }
    std::cout << '\n';

    int value = 3;
    std:: cout << sumTo(value);
    return 0;
}