#include <algorithm>
#include <iostream>

void SelectionSort (int* array, int size) {
    for (int start = 0; start < size; start++) {
        int smallest = start;
        for(int current = start + 1; current < size; current++) {
            if(array[smallest] > array[current])
                smallest = current;
        }
        std::swap(array[start], array[smallest]);
    }
}

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}
 
int main() {
    int array[7] = {3, 55, 6, 2, 9, 0, 1};
    int size = sizeof(array) / sizeof(array[0]);
    printArray(array, size);

    SelectionSort(array, size);
    printArray(array, size);


    return 0;
}