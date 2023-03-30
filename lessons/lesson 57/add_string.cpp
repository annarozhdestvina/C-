#include <iostream>
#include <string>

int main() {
    std::string x ("44");
    std::string y ("12");

    std::cout << x + y << '\n';
    x += " cats";
    std::cout << x;

    return 0;
}