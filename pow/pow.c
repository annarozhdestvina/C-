#include <stdio.h>

int pow(int base, int exp) {
    int result = 1;
    while(exp>0) {
            result *= base;
            exp--;
        
    }
    return result;
}

int main() {
    int base = 2;
    int exp = 3;
    int resulr = pow(base, exp);
    printf("result = %d\n", resulr);
}