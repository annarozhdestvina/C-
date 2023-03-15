#include <iostream>

int factorial(int a) {
    int r = 1;
    for(r = 1; a > 1; r *= (a--));
    return r;
}

int pow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

int main() {
    int a = true;
    int b = false;

    int c = 55;

    int count = 2;

    if(static_cast<bool>(c) != b){
        std::cout << "xor";
    } else 
        std::cout << "not xor";

    int x;
    std::cout << "input 0 to 255: \n";
    std::cin >> x; 
    int v = 2;
    std::cout << pow(2,3) << '\n';
    std::cout << factorial(3) << '\n';
    int exp = 7;
    int base = 2;
    char string[8];
    int array[8];
    std::cout << pow(base, exp) << '\n';
    //while(x >= 0) {
    for (int i = 0; i < 8; i++) {
        if( x >= pow(base, exp)) {
            std::cout << "x = " << x << '\n';
            x = x-pow(base,exp);
            std::cout << "x = " << x << '\n';
            array[i] = 1;
            
            std::cout << "array = " << array[i] << '\n';
            //exp--;
        } else {
            array[i] = 0;
            std::cout << "array = " << array[i] << '\n';
        }
        exp--;
        //array[i] = 1;
        }
   // }
    for(int i =0; i <8; i++) {
        std::cout << array[i] << ' ';
    }

}