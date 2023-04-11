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

void get_product_test() {
    int test_number = 1;
    {
        std::cout << "test #" << test_number << "\t\t";
        const int array[] = {1, 2, 3, 4, 5};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = 20;
        const int actual = get_product(array, length);

        if(actual == expected) {
            std::cout << "ok\n";
        } else {
            std::cout << "FAILED\n";
            std::cout << "actual is\t" << actual << '\n';
            std::cout << "expected is\t" << expected << '\n';
        }


        print_array(array, length); 
    } test_number++;

    {
        std::cout << "test #" << test_number << "\t\t";
        const int array[] = {0, 2, 3, 0, 5};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = 15;
        const int actual = get_product(array, length);

        if(actual == expected) {
            std::cout << "ok\n";
        } else {
            std::cout << "FAILED\n";
            std::cout << "actual is\t" << actual << '\n';
            std::cout << "expected is\t" << expected << '\n';
        }
        print_array(array, length); 
    } test_number++;
}

int main() {

    get_product_test();

    return 0;
}