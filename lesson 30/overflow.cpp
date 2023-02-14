#include <iostream>
//#include <cstdint>

int main() {
    unsigned short x = 65535;
    std::cout << "x was = " << x <<'\n';
    x +=1;
    std::cout << "x now = " << x << '\n';   

    const int8_t a = 55;
    std::cout << "x is " << sizeof(x) << '\n'; 
    std::cout << sizeof(int8_t) << '\n';

    std::int16_t i(5);
    std::cout << i << '\n';

    std::int8_t myint = 65;
    std::cout << myint << '\n';

    float f = 9.847353426;
    std::cout << f << '\n';
    f = 0.00054322665665f;
    std::cout << f << std::endl;

    float b = 3.45e1;
    std::cout << "b = " << b << '\n';

    double g = 8e-10;
    std::cout << "g= " << g << '\n';
}