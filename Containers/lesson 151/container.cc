#include <iostream>
#include "ArrayInt.h"

int main() {
    ArrayInt array(10);

    for(int i = 0; i<10; i++)
        array[i] = i + 1;

    array.resize(7);
    array.Print();
}