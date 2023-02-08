#include <iostream>

int add (int x, int y);

int doMath(int first, int second, int third, int fourth);

int main() {
    std::cout << "the sum = " << add(3,4) <<std::endl;
    const int array[] = {9, 1, 2, 3};
    int first = array[0];
    int second = array[1];
    int third = array[2];
    int fourth = array[3];

    int p;
    p = doMath(first, second, third, fourth);
    std::cout << "result of function: " << p << std::endl;

    return 0;
}

int doMath(int first, int second, int third, int fourth) {
    int z = first + second * third / fourth;
    return z;
}


int add(int x, int y) {
    int z = x + y;
    return z;
}