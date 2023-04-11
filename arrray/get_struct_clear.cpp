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

int allocate_array(TestCase *myTestCase) {
    int *array = new int[7] { 9, 7, 5, 3, 1, 8, 9 };
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

int get_product(TestCase *myTestCase) {
    std::sort(myTestCase->input, myTestCase->input + myTestCase->input_length);
    return myTestCase->input[myTestCase->input_length-1] * myTestCase->input[myTestCase->input_length-2];
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
        }
    print_struct(myTestCase);
}
void get_product_test(int is_verbose) {
    int test_number = 1;
    int succesful_test = 0; 
    {
        TestCase myTestCase;
        allocate_array(&myTestCase);
        print_struct(&myTestCase);
        const int actual = 81;
        const int expected = get_product(&myTestCase);

        myTestCase.actual = actual;
        myTestCase.expected = expected;

        test_case(&myTestCase, &test_number, &succesful_test, is_verbose);
    }
    //test_number++;
    
   
    std::cout << "\nSUMMORY\n";
    std::cout << "test " << succesful_test << '/' << test_number <<'\n';
    std::cout << "percentage: " << 100*succesful_test/ static_cast<float>(test_number) << "%\n";
}

int main() {

    int is_verbose = true;
    get_product_test(is_verbose);

    return 0;
}