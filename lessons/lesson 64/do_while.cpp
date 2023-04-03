#include <iostream>

int main() {
    int choise;
    do {
        std::cout <<"pick 1 for sum!\n";
        std::cout <<"pick 2 for div!\n";
        std::cout <<"pick 3 for mul!\n";
        std::cout <<"pick 4 for sub!\n";
        std::cin >> choise;
    } while ((choise != 1) && (choise != 2) && (choise != 3) && (choise != 4));

    std::cout << "you picked " << choise;
    return 0;
}