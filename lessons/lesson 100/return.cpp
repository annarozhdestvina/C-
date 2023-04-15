#include <iostream>

int returnValue(int a) {
    int value = a * 3;
    return value;
}

int* allocateArray(int size) {
    return new int[size];
}

int sumTo(const int a) {
    int res = 1;
    for(res; a>1; res += (a--) );
    return res;
}

int main() {
    int number;
    std::cout << "enter a positive number: ";
    std::cin >> number;
    int res = sumTo(number);
    std::cout << res << " is summed\n";
    int a = 8;
    std::cout << a << '\n';
    a = returnValue(a);
    std::cout << a << '\n';

    int* array = allocateArray(20);
    delete[] array;
    
    return 0;
}