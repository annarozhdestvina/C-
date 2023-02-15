#include "io.h"
#include <iostream>

int readNumber();
void writeAnswer(int x);

int main () {
    int value1 = readNumber();
    int value2 = readNumber();

    int result = value1 + value2;

    writeAnswer(result);
    return 0;
}