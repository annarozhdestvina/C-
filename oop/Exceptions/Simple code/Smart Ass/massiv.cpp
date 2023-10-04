#include <iostream>
#include <memory>


int main() {
    int size = 5;
    int* prt1 = new int[size] {2, 55, 6, 3, 2};

    std::shared_ptr<int[]> ptr(new int[size] {2, 55, 6, 3, 2});

    for (int i = 0; i < size; i++)
        std::cout << ptr[i] << ' ';

    return 0;
}