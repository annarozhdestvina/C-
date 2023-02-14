#include <iostream>
#include <cstdint>

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
}