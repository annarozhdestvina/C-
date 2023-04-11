#include <iostream>
#include <algorithm>

#define SUCCESS 1
#define FAILURE 0

struct TestCase {
    int expected;
    int actual;
    int *input;
    int input_length;
};

enum Failuers {
    OK = 0,
    Unabled_array = 1,
    Calc_array = 2,
} errors;

void print_struct(TestCase myTestCase) {

}

int allocate_array(TestCase myTestCase) {
    int *array = new int[5] { 9, 7, 5, 3, 1 };

    if (!array) {
        printf("NOT CREATED!!!");
        return FAILURE;
    }
}
void print_array(const int* array, int length) {
    for (int i = 0; i < length; ++i)
        printf("%d ", array[i]);
    printf("\n");
}
/*
void get_struct(TestCase myTestCase) {
    int test_number = 1;
    int succesful_test = 0; 
    
        //int array[] = {1, 2, 3, 4, 5};
        myTestCase.input = {1, 2, 3, 4, 5};
        const int length = sizeof(array) / sizeof(array[0]);
        const int actual = 20;
        const int expected = get_product(array, length);

        test_case(array, length, actual, expected, &test_number, &succesful_test, is_verbose);
    
    test_number++;
}*/

int main() {
    int is_verbose = false;
    //get_product_test(is_verbose);

    TestCase myTestCase;
    int *array = new int[5] { 9, 7, 5, 3, 1 };

    if (!array) {
        printf("NOT CREATED!!!");
        return FAILURE;
    }
    myTestCase.input = array;

    return 0;
}