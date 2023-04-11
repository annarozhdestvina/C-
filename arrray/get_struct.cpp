#include <iostream>
#include <algorithm>
//#include <malloc.h>

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

int allocate_array(TestCase *myTestCase) {
    int *array = new int[7] { 9, 7, 5, 3, 1, 8, 9 };
    //std::cout << "size array " <<sizeof(array) << '\n';
    //std::cout << "size *array " <<sizeof(*array) << '\n';
    //std::cout << "size array " <<sizeof(array) << '\n';
    //std::cout << "size &array " <<sizeof(&array) << '\n';

    //int length = sizeof(*array) / sizeof(array[0]);
    int length = 7;

    if (!array) {
        printf("NOT CREATED!!!");
        return FAILURE;
    }
    //myTestCase.input = array;
    myTestCase->input = array;
    myTestCase->input_length = length;

    return SUCCESS;
}
void print_struct(TestCase *myTestCase) {
    for(int index = 0; index < myTestCase->input_length; index++) {
        std::cout << myTestCase->input[index] << ' ';
    }
    std::cout << '\n';
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
    allocate_array(&myTestCase);
    print_struct(&myTestCase);
    //myTestCase.input = array;

    return 0;
}