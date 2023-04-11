#include <iostream>

int get_product(const int* array, int length) {
    return array[0] * length;
}

void print_array(const int* array, int length) {
    for(int index = 0; index < length; index++) {
        std::cout << array[index] << ' ';
    }
    std::cout << '\n';
}

int main() {
    const int array[] = {1, 2, 3, 4, 5};
    const int length = sizeof(array) / sizeof(array[0]);

    std::cout << length << '\n';
    print_array(array, length); 



    return 0;
}