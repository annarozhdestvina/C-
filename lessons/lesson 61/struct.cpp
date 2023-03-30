#include <iostream>

struct Employee
{
    short id;
    int age;
    double salary;
};

int main() {
    Employee john;
    john.id = 5555;

    std::cout << john.id << '\n';

    Employee tom = {44, 24, 15000.0};

    return 0;
}