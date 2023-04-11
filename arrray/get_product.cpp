#include <iostream>

int get_product(const int* array, int length) {
    int first = array[0] > array[1] ? array[0] : array[1];
    int second = array[0] < array[1] ? array[0] : array[1];

    for (int index = 0; index < length; index++) {
        const int current = array[index];
        if(current > first) {
            second = first;
            first = current;
        } else if(current < first) {
            second = current;
        }
    }
    return first * second;
}

void print_array(const int* array, int length) {
    for(int index = 0; index < length; index++) {
        std::cout << array[index] << ' ';
    }
    std::cout << '\n';
}

void test_case(const int* array, int length, int actual, int expected, int* test_number, int *succesful_test) {
   
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
        const int array[] = {1, 2, 3, 4, 5};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = 20;
        const int actual = get_product(array, length);

        test_case(array, length, actual, expected, &test_number, &succesful_test);
    } test_number++;

    {
        const int array[] = {0, 2, 3, 0, 5};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = 15;
        const int actual = get_product(array, length);

        test_case(array, length, actual, expected, &test_number, &succesful_test);
        
    } test_number++;
    
    {
        const int array[] = {0, 0, -3, 0, 5};
        const int length = sizeof(array) / sizeof(array[0]);
        const int expected = 0;
        const int actual = get_product(array, length);

        test_case(array, length, actual, expected, &test_number, &succesful_test);
        
    } 

    std::cout << "\nSUMMORY\n";
    std::cout << "test " << succesful_test << '/' << test_number <<'\n';
    std::cout << "percentage: " << 100*succesful_test/ static_cast<float>(test_number) << "%\n";
}

int main() {

    get_product_test();

    return 0;
}