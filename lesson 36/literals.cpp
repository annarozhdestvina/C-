#include <iostream>

int main() {
    bool myNameIsAlex = true;
    int x =5;

    double pi = 3.14159;
    double avogadro = 6.02e23;
    double electron = 1.6e-19;

    unsigned int nValue = 5u;
    long nValue2 =5L;

    float fValue = 5.0f;
    double d = 6.02e23;

    char c = 'A';
    std::cout << "hello";
    std::cout << "hello" "world";

    //литерала из восьмеричной системы счисления
    int a = 012;
    std::cout << a;

    //литерала из шестнадцатеричной системы счисления
    int b = 0xF;
    std::cout << b;

    int bin(0);
    bin = 0x01; //присваиваем переменной бинарный литерал 0000 0001 
    bin = 0x02;
    bin = 0x20;
    bin = 0xFF;
    bin = 0xB3;
    bin = 0xF770;

    //int maxStudents = numClassrooms * 30;


    return 0;

}