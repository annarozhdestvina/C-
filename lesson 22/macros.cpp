#include <iostream>

#define MY_FAVORITE_NUMBER 9
#define USE_YEN
#define PRINT_JOE

int main() {
    std::cout << "My favorite number is " << MY_FAVORITE_NUMBER << '\n';

    #ifdef PRINT_JOE
    std::cout << "Joe" << '\n';
    #endif

    #ifndef PRINT_BOB
    std::cout << "Bob" << '\n';
    #endif
    return 0;
}