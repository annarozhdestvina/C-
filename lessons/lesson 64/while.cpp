#include <iostream>

int main() {
    int count = 0;
    while(count < 10) {
        std::cout << count << ' ';
        count++;
    }
    std::cout << "done\n";

    int outer = 1;
    while(outer <=5 ) {
        int inner = 1;
        while (inner <= outer) 
            std::cout << inner++ << ' ';
        std::cout << '\n';
        ++outer;
    }

    char symbol_begin = 97; //122
    char symbol_end = 122; //122
    std::cout << symbol_begin << std::endl;

    while(symbol_begin <= symbol_end) {
        std::cout << symbol_begin << '\n';
        symbol_begin++;
    }

    return 0;
}