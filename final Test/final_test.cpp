#include "io.cpp"

int readNumber();
void writeAnsver(int value1, int value2);

int main () {
    int value1 = readNumber();
    int value2 = readNumber();

    writeAnsver(value1, value2);
    return 0;
}