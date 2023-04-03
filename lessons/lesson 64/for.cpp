#include <iostream>

int main() {
    int aa, bb;
    for (aa = 0, bb = 9; aa < 10; aa++, bb--) {
        std::cout <<aa<<' ' << bb <<'\n';
    }

    for (int a = 0; a < 21; a = a+2) {
        std::cout << a << ' ';
    }
    std::cout << '\n';
    return 0;
}