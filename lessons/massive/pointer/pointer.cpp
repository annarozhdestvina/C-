#include <iostream>

int main() {
    int a = 7;
    std::cout << a << '\n';
    std::cout << &a << '\n';
    std::cout << *&a << '\n';

    int value1 = 5;
    int *pointer = &value1;
    std::cout << *pointer << '\n';

    int x(4);
    std::cout << typeid(&x).name();

short value = 7; // &value = 0012FF60
short otherValue = 3; // &otherValue = 0012FF54
 
short *ptr = &value;  // 0012FF60
 
std::cout << &value << '\n';  // 0012FF60
std::cout << value << '\n';   // 7
std::cout << ptr << '\n';     // 0012FF60
std::cout << *ptr << '\n';    // 7
std::cout << '\n';
 
*ptr = 9;
 
std::cout << &value << '\n';  // 0012FF60
std::cout << value << '\n';   // 7 no 9!!!!!
std::cout << ptr << '\n';     // 0012FF60
std::cout << *ptr  << '\n';   // 9
std::cout << '\n';
 
ptr = &otherValue;              // 0012FF54
 
std::cout << &otherValue << '\n';   // 0012FF54
std::cout << otherValue << '\n';    // 3
std::cout << ptr << '\n';           // 0012FF54
std::cout << *ptr << '\n';          // 3
std::cout << '\n';
 
std::cout << sizeof(ptr) << '\n';    // 4  8
std::cout << sizeof(*ptr) << '\n';   // 1  2
}