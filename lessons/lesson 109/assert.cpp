#include <iostream>
#include <cassert>

int getArrayValue(const int* array, int index) {
    assert(index >= 0 && index <= 3);
    return array[index];
}

int main() {
    const int array[] = {3, 5, 4, 1, 3};
    getArrayValue(array, -3);

}