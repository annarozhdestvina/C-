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

void printInf(Employee employee) {
    std::cout << "ID: " << employee.id << '\n';
    std::cout << "age: " << employee.age << '\n';
    std::cout << "salary: " << employee.salary << '\n';
}

int main() {
    Employee john;
    john.id = 5555;

    std::cout << john.id << '\n';

    Employee tom = {44, 24, 15000.0};
    printInf(tom);

    Triangle z{3.0, 8.0};

    return 0;
}