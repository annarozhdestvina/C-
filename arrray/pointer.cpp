#include <iostream>

int main() {
    //new int;
    int* ptr = new int;
    *ptr = 8;
    std::cout << *ptr;

    int *ptr1 = new int (7);
    int *ptr2 = new int {8};

    delete ptr;
    ptr = 0;

    int *value = new (std::nothrow) int;

    return 0;
}