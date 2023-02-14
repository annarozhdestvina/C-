#include <iostream>

void writeValue(int x) {
    std::cout << "x= " << x << std::endl;
}

int getValue(void) {
    int x;
    std::cin >>x;
    return x;
}

int main () {
    int nValue(5); //прямая инициализация
    int value{5}; // uniform-инициализация

}