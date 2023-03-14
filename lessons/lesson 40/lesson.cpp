#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = 5;
    int y = ++x;
    std::cout << "x = " << x << " y = " << y << "\n";

    int a = 5;
    int b = a++;
    std::cout << "a = " << a << " b = " << b << "\n";


    int c = 5;
    ++c;
    std::cout << c << "\n";

    int d = 5;
    int value = add(d, d++);
    std::cout << value;

    return 0;
}