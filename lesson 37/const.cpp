#include <iostream>
#include "constants.h"
#define MAX_STUDENTS_PER_CLASS 30
#define MAX_NAME_LENGTH 30


void printInteger(const int myValue) {
    std::cout << myValue << '\n';
}

void setMax(const int MAX_NAME_LENGTH) {
    int x = MAX_NAME_LENGTH -3;
}

int main() {

    int max_students = numClassrooms * MAX_STUDENTS_PER_CLASS;
    setMax(MAX_NAME_LENGTH);

    int x = {4};
    x =5;
    const double gravity ={9.8};

    std::cout << "enter your age: ";
    int age;
    std::cin >> age;

    const int usersAge(age); // че это?

    printInteger(age);

    //constexpr int t=  9.8;

    #if __cplusplus == 201703L
  std::cout << "It's C++17" << std::endl;
#elif __cplusplus == 201402L
  std::cout << "It's C++14" << std::endl;
#elif __cplusplus == 201103L
  std::cout << "It's C++11" << std::endl;
#else
  std::cout << "It's C++" << std::endl;
#endif

std::cout << __cplusplus; //узнать версию си++

}