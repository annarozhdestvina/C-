#include <iostream>
#include <algorithm>

void bubble_sort(int list[], int size) {
    while(size--) {
        bool swapped = false;
        for(int i = 0; i < size; i++) {
            if(list[i] > list[i+1]) {
                std::swap(list[i], list[i+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}

int main() {
    int list[5] = {5, 88, 34, 1, 0};
    const int size = sizeof(list) / sizeof(list[0]);

    for(int i = 0; i < size; i++)
        std::cout << list[i] << ' ';
    
    std::cout << '\n';

    bubble_sort(list, 5);
    for(int i = 0; i < size; i++)
        std::cout << list[i] << ' ';

}