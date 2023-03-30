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

struct Advertising
{
    int shown;
    double percentage;
    double profit;
};

void calculate_profit(Advertising user) {
    std::cout << "shown: " << user.shown << '\n';
    std::cout << "per: " << user.percentage << '\n';
    std::cout << "profit: " << user.profit << '\n';

    double all = user.percentage * user.profit * user.shown;
    std::cout << "all is: " << all << '\n';
}

int main() {
    Advertising user1;
    std::cout << "enter announcments\n";
    std::cin >> user1.shown;
    std::cout << "enter percentage\n";
    std::cin >> user1.percentage;
    std::cout << "enter profit\n";
    std::cin >> user1.profit;

    calculate_profit(user1);


    Employee john;
    john.id = 5555;

    std::cout << john.id << '\n';

    Employee tom = {44, 24, 15000.0};
    printInf(tom);

    Triangle z{3.0, 8.0};

    return 0;
}