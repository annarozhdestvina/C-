#include <iostream>

int main() {
    int x(4); //переменная х создается и инициализируется здесь
    int y = 5;

    int a; // переменная a создается здесь
    std::cout << "enter a number\n";
    std::cin >> a;
    int b; // переменная b создается здесь
    std::cout << "enter a number\n";
    std::cin >> b;

    if(b<a) {
        int z = b; // переменная z создается здесь
        b = a;
        a = z;
    } // переменная z уничтожается здесь

    std::cout << "less number is = " << a << '\n';
    std::cout << "greater number is = " << b << '\n';

    return 0;
} // x и y выходят из области видимости и уничтожаются здесь