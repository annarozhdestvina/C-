#include <iostream>

void countOUT(int count) {
    std::cout << "push " << count << '\n';
    if(count > 1)
    countOUT(count-1);
}

int sumCount(int value) {
    if(value <=0)
        return 0;
    else if(value == 1)
        return 1;
    else    
        return sumCount(value - 1) + value;
}

int factorial(int n) {
    int res =1;
    if(n < 0) {
        std::cout << "input positive number!\n";
        return 0;
    } else 
        for(res; n>1; res *= (n--));
    return res;
}

int sumcout(int n) {
    int res = 1;
    for(res; n>1; res += (n--));
    return res;
}

int fibonacci(int number)
{
    if (number == 0)
        return 0; // базовый случай (условие завершения)
    if (number == 1)
        return 1; // базовый случай (условие завершения)
    return fibonacci(number-1) + fibonacci(number-2);
}

int main() {
    countOUT(4);
    std::cout << "sum " <<sumCount(5) << '\n';
    std::cout << "fac " << factorial(5) << '\n';
    std::cout << "mysum " << sumcout(5) << '\n';

    for (int count=0; count < 13; ++count)
        std:: cout << fibonacci(count) << " ";
 
    
}