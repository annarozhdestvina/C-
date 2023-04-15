#include <iostream>

void fucc(int &x) {
    x = x+2;
}

int main() {
    int x =7;
    std::cout << x << '\n';
    fucc(x);
    std::cout << x << '\n';


    return 0;
}