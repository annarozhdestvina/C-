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

int allocate_array(TestCase *myTestCase) {
    int *array = new int[7] { 9, 7, 5, 3, 1, 8, 9 };
    int length = 7;

    if (!array) {
        printf("NOT CREATED!!!");
        return FAILURE;
    }
    //myTestCase.input = array;
    //(*myTestCase).input = array;
    myTestCase->input = array;
    myTestCase->input_length = length;

    return SUCCESS;
}
void print_struct(const TestCase *myTestCase) {
    for(int index = 0; index < myTestCase->input_length; index++) {
        std::cout << myTestCase->input[index] << ' ';
    }
    std::cout << '\n';
}

int get_product(TestCase *myTestCase) {
    //std::sort(myTestCase->input, myTestCase->input + myTestCase->input_length);
    //return myTestCase->input[myTestCase->input_length-1] * myTestCase->input[myTestCase->input_length-2];
    if(myTestCase->input_length < 2) {
        return FAILURE;
    }
    int first = myTestCase->input[0] > myTestCase->input[1] ? myTestCase->input[0] : myTestCase->input[1];
    int second = myTestCase->input[0] < myTestCase->input[1] ? myTestCase->input[0] : myTestCase->input[1];

    for (int index = 0; index < myTestCase->input_length; index++) {
        const int current = myTestCase->input[index];
        if (current > first) {
            second = first;
            first = current;
        } else if (current > second) {
            second = current;
        }
    }
    return first * second;
} 

int get_product2(const int* array, int length) {
    int first = array[0] > array[1] ? array[0] : array[1];
    int second = array[0] < array[1] ? array[0] : array[1];

    for (int index = 0; index < length; index++) {
        const int current = array[index];
        if(current > first) {
            second = first;
            first = current;
        } else if(current > second) {
            second = current;
        }
    }
    return first * second;
}

void test_case(TestCase *myTestCase, int* test_number, int* succesful_test, int is_verbose) { 
    std::cout << "test #" << *test_number << "\t\t";

     if(myTestCase->actual == myTestCase->expected) {
            std::cout << "ok\n";
            (*succesful_test)++;
            if(is_verbose) {
                std::cout << "actual is\t" << myTestCase->actual << '\n';
                std::cout << "expected is\t" << myTestCase->expected << '\n';
                print_struct(myTestCase);
            }
        } else {
            std::cout << "FAILED\n";
            std::cout << "actual is\t" << myTestCase->actual << '\n';
            std::cout << "expected is\t" << myTestCase->expected << '\n';
            print_struct(myTestCase);
        }
}
void get_product_test(int is_verbose) {
    int test_number = 1;
    int succesful_test = 0; 
    {
        TestCase myTestCase;
        allocate_array(&myTestCase);
        const int actual = 81;
        const int expected = get_product2(myTestCase.input, myTestCase.input_length);

        myTestCase.actual = actual;
        myTestCase.expected = expected;

        test_case(&myTestCase, &test_number, &succesful_test, is_verbose);
    }
    test_number++;

    {
        TestCase myTestCase;
        int *array = new int[7] { 0, 7, 5, 3, 1, 8, 0 };
        int length = 7;
        myTestCase.input = array;
        myTestCase.input_length = length;

        const int actual = 56;
        const int expected = get_product2(myTestCase.input, myTestCase.input_length);

        myTestCase.actual = actual;
        myTestCase.expected = expected;

        test_case(&myTestCase, &test_number, &succesful_test, is_verbose);
    }
    test_number++;

    {
        TestCase myTestCase;
        int *array = new int[5] { 0, 0, 5, 3, 1 };
        int length = 5;
        myTestCase.input = array;
        myTestCase.input_length = length;

        const int actual = 15;
        const int expected = get_product2(myTestCase.input, myTestCase.input_length);

        myTestCase.actual = actual;
        myTestCase.expected = expected;

        test_case(&myTestCase, &test_number, &succesful_test, is_verbose);
    }
    
    test_number++;

    {
        TestCase myTestCase;
        int array[] = { 0, 0, 5, 3, 0, 7 };
        int length = sizeof(array) / sizeof(array[0]);
        myTestCase.input = array;
        myTestCase.input_length = length;

        const int actual = 35;
        const int expected = get_product2(myTestCase.input, myTestCase.input_length);

        myTestCase.actual = actual;
        myTestCase.expected = expected;

        test_case(&myTestCase, &test_number, &succesful_test, is_verbose);
    }
   
    std::cout << "\nSUMMORY\n";
    std::cout << "test " << succesful_test << '/' << test_number <<'\n';
    std::cout << "percentage: " << 100*succesful_test/ static_cast<float>(test_number) << "%\n";
}

int main() {

    int is_verbose = true;
    get_product_test(is_verbose);

    return 0;
}