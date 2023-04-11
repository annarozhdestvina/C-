#include <iostream>
#include <algorithm>

int get_product(int* array, int length) {
    std::sort(array, array + length);
    return array[length-1] * array[length-2];
} 

void print_array(const int* array, int length) {
    for(int index = 0; index < length; index++) {
        std::cout << array[index] << ' ';
    }
    std::cout << '\n';
}

void test_case(int* array, int length, int actual, int expected, int *test_number, int* succesful_test) {
     std::cout << "test #" << *test_number << "\t\t";
     if(actual == expected) {
            std::cout << "ok\n";
            (*succesful_test)++;
        } else {
            std::cout << "FAILED\n";
            std::cout << "actual is\t" << actual << '\n';
            std::cout << "expected is\t" << expected << '\n';
        }
    print_array(array, length);
}

void get_product_test() {
    int test_number = 1;
    int succesful_test = 0; 
    {
        int array[] = {1, 2, 3, 4, 5};
        const int length = sizeof(array) / sizeof(array[0]);
        print_array(array, length);
        const int actual = 20;
        const int expected = get_product(array, length);

        test_case(array, length, actual, expected, &test_number, &succesful_test);
    }
    test_number++;
    
    {
        int array[] = {1, 99, 3, 8, 5};
        const int length = sizeof(array) / sizeof(array[0]);
        print_array(array, length);
        const int actual = 792;
        const int expected = get_product(array, length);

        test_case(array, length, actual, expected, &test_number, &succesful_test);
    }
}

int main() {
    get_product_test();



    return 0;
}