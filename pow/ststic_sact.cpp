#include <iostream>
#include <cmath>

bool isEven(int o) {
    return (o % 2) == 0;
}

const char*  get_word(int comparison) {
    return (comparison == true) ? "true" : "false";
}

int main() {
    int x = 7; 
    int y = 4;

    std::cout << "int / int = " << x / y << "\n";
    std::cout << "double / int = " << static_cast<double>(x) / y << "\n"; 
    std::cout << "int / double = " << x / static_cast<double>(y) << "\n";
    std::cout << "div with reminder 7/4 = " << x % y << "\n";

    int count = 1;
    while (count <= 100) {
        std::cout << count << " ";
        if(count % 30 == 0) {
            std::cout << "\n";
        }
        count = count + 1;
    }
    std::cout << "\n";

    double base, exp;
    std::cout << "input base\n";
    std::cin >> base;
    std::cout << "input exp\n";
    std::cin >> exp;

    std::cout << "pow = " << pow(base, exp) << "\n";

    int o;
    std::cout << "input number\n";
    std::cin >> o;
    //isEven(o);
    // bool a =isEven(o);
    // std::cout << a;

    int comparison = isEven(o);
    std::cout << get_word(comparison);

    return 0;
}