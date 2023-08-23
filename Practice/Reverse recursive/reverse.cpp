#include <iostream>

void recursive(int a) {
    if (a > 0) {
        recursive(a-1);
        std::cout << a << ' ';
    } 
}

void recursive2(int a) {
    if (a <= 0) 
        return;
    a--;
    std::cout << a << ' ';
    recursive2(a);
}

void recursive3(int a) {
    if (a <= 0) 
        return;
    recursive3(a);
    a--;
    std::cout << a << ' ';
}

int main() {
    int a = 10;
    recursive(a);

    return 0;
}