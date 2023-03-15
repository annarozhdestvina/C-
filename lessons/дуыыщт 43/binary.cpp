#include <iostream>

int pow(int base, int exp) {
    int result = 1;
    while(exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

int main() {
    int base = 2;
    int exp = 7;
    int array[8];
    int x;
    std::cout << "input 0 to 255: \n";
    std::cin >> x;
    for(int i = 0; i < 8; i++) {
        if(x >= pow(base, exp)) {
            x -= pow(base, exp);
            array[i] = 1;  
        } else {
            array[i] = 0;
        }
        exp--;
    }
    for (int i = 0; i < 8; i++) {
        if(i == 4) 
            std::cout << ' ';
        std::cout << array[i];
    }
    return 0;
}