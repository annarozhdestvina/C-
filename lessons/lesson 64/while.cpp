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
/*
    int outer1 = 5;
    int inner1 =5;
    while(outer1 >= 1) {
        inner1 = 5;
        while (inner1 <= outer1) 
            std::cout << inner1-- << ' ';
        outer1--;
        std::cout << '\n';
    }*/
    

    std::cout <<"----------------------\n";
    int c = 5;
    while(c > 0) {
        std::cout << c << ' ';
        c--;
    }
    std::cout <<"----------------------\n";

    int a = 0;
    int d = 1;
   
        while(d < 6) {
            //std::cout << "a before " << a << '\n';
            a=0;
            while(a < d) {
                std::cout << ++a << ' ';
                }
            std::cout << '\n';
            //std::cout << "a after " << a << '\n';
            d++;
        }

        a = 8%2;
        std::cout <<a << '\n';
        int q = 6;
        for(int i =0; i < 6; i++) {
            for (int j=0; j < 6; j++) {
                if (q > 0) {
                    std::cout << q << ' ';
                    q--;
                }
            }
            q = 5 - i;
            std::cout << '\n';
        }


    return 0;
}