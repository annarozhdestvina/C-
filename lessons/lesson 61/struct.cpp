#include <iostream>

struct Employee
{
    short id;
    int age;
    double salary;
};

struct Triangle
{
    double length = 2.0;
    double width = 3.0;
};

int main() {
    Employee john;
    john.id = 5555;

    std::cout << john.id << '\n';

    Employee tom = {44, 24, 15000.0};

    Triangle z{3.0, 8.0};

    return 0;
}