#include <iostream>

void doSomething() {
    int *ptr = new int;
}

int main() {
    //new int;
    doSomething();
    int* ptr = new int;
    *ptr = 8;
    std::cout << *ptr;

    int *ptr1 = new int (7);
    int *ptr2 = new int{8};

    delete ptr;
    ptr = 0;

    int *value = new (std::nothrow) int;
    if(!value) {
        std::cout << "couldn't allocate memory\n";
    }

    if(!ptr) 
        ptr = new int;

    if(ptr)
        delete ptr;

    int value1 = 7;
    int *ptr3 = new int;
    delete ptr3;
    ptr3 = &value1;

    return 0;
}