#include <iostream>

int add(int a, int b) {
    return a +b;
}

int main() {
    int x = 7;
    int y =8;
    int a =x;
    int b=y;
    std::cout << add(a,b) << std::endl;

    return 0;
}