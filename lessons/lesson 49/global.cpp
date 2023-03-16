#include <iostream>

int g_x;
const int g_y(3);

void doSomething() {
    g_x = 4;
    std::cout << g_y <<'\n';
}

int main () {
    doSomething();
    g_x = 7;
    std::cout << g_y << '\n';
    return 0;
 }