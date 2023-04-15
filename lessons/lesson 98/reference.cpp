#include <iostream>
#include <math.h>

void getSinCos(double degrees, double& sinOut, double& cosOut) {
    const double pi = 3/1415926535;
    double radians = degrees * pi / 180;
    sinOut = sin(radians);
    cosOut = cos(radians);
}

void fucc(int &x) {
    x = x+2;
}

void boo(int *ptr) {
    *ptr = 7;
}

void printArray(int* array, int length) {
    if(!array)
        return;
    for(int index = 0; index < length; index++) {
        std::cout << array[index] << ' ';
    }
}

int main() {
    int array[7] = { 8, 5, 4, 8, 4, 3, 7};
    printArray(array, 7);

    int value = 8;
    std::cout << "value = " << value << '\n';
    boo(&value);
    std::cout << "value = " << value << '\n';

    int x =7;
    std::cout << x << '\n';
    fucc(x);
    std::cout << x << '\n';

    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos);
    std::cout << "The sin is " << sin << '\n';
    std::cout << "The cos is " << cos << '\n';


    return 0;
}