#include <iostream>

// указатели
int a = 2;

int& f(int x) {
    a = a + x;
    return a;
}

int main(void) {
    int t = 2;
    std::cout << f(t) << '\n';  // 4
    //а в лок области видимости и придет ссылка и выведется 4

    f(t) = 10; // в ссылку записываем 10 в а
    std::cout << f(t) << '\n'; // 12

    t = f(t);  // 12   f(2)-> 14
    std::cout << f(t) << '\n'; //  t = 14 a = 14

    const int M = 100;
    const double X = 20;
    const double dx = X/M;
    for(double x = X; x > 0; x -= dx) {
        // std::cout<< x << ", ";
        if( x < 2.0 + dx/2 && x > 2 - dx/2)
            std::cout << "find x = " << x << '\n';
    }
    // int b = a;
    // int *px = &a;

    // std::cout << b <<'\n';
    // std::cout << *px <<'\n';

    // a += 6;
    // std::cout << b <<'\n';
    // std::cout << *px <<'\n';


}