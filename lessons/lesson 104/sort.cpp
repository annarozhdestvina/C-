#include <algorithm>
#include <iostream>

void SelectionSort (int* array, int size, bool (*comparison)(int, int)) {
    for (int start = 0; start < size; start++) {
        int best = start;
        for(int current = start + 1; current < size; current++) {
            if(comparison(array[best], array[current]))
                best = current;
        }
        std::swap(array[start], array[best]);
    }
}

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

bool ascending(int a, int b) {
    return a > b;
}

bool descending(int a, int b) {
    return a < b;
}
 
int main() {
    int array[7] = {3, 55, 6, 2, 9, 0, 1};
    int size = sizeof(array) / sizeof(array[0]);
    //printArray(array, size);

    // Сортируем массив в порядке убывания
    SelectionSort(array, size, descending);
    printArray(array, size);

    // Сортируем массив в порядке возрастания
    SelectionSort(array, size, ascending);
    printArray(array, size);


    return 0;
}