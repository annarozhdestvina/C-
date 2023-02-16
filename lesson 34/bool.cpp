#include <iostream>

bool isEqual (int x, int y) {
    return (x==y);
}

bool isPrime(int number) {
    if ( number == 2)
        return true;
    if ( number == 3)
        return true;
    if ( number == 5)
        return true;
    if ( number == 7)       
        return true;
    return false;
}

int main () {
    bool b;
    bool b1 = true;
    std::cout << std::boolalpha;
    std::cout << true << '\n';
    std::cout << b1 << '\n';
    b1 = !true;
    std::cout << b1 << '\n';

    if (true)
        std::cout << "the condition is true" << '\n';
    else
        std::cout << "the condition is fault" << '\n';

    bool d = false;
    if (d)
        std::cout << "the condition is true" << '\n';
    else
        std::cout << "the condition is fault" << '\n';

    int x =5;

    if (x == 5)
        std::cout << "the condition is true" << '\n';
    else
        std::cout << "the condition is fault" << '\n';

    std::cout << "enter an integer: " << '\n';
    std::cin >> x;
    std::cout << "enter another integer: " << '\n';
    int y;
    std::cin >> y;

    if (isEqual(x, y)) 
        std::cout << x << " equal " << y << '\n';
    else 
        std::cout << x << " not equal " << y << '\n';

    if (-8) {
        std::cout << "true" << '\n';
    }
    else 
    std::cout << "false" << '\n';


    int p;
    std::cout << "enter an integer: " << '\n';
    std::cin >> p;

    if (isPrime(p) )
        std::cout << "Prime is --- " << p << '\n';

    int k = 0;
    for (int i =2; i<p+1; i++) {
        for (int j =2; j<i; j++) {
            if (i%j == 0)
            k = k+1;
        }
        if (k==0) 
            std::cout << "prime is " << i << '\n';
        else 
            k=0;
    }

    std::cout << "--------------------------------" << '\n';

    for (int j =2; j < 10; j++) {
        if (p%j == 0)
            std::cout << "prime " << p << '\n';
        else 
        std::cout << "not prime" << '\n';
    }

/*
    if (p>0)
        std::cout <<"the digit is prime" << '\n';
        
    else if ((p%p == 0)|| p%1)
        std::cout <<"the digit is prime" << '\n';
    else 
        std::cout << "not prime";

    std::cout << 5%5 << '\n';
    */

   if (p == 2)
        std::cout <<"the digit is prime" << '\n';
    else if (p == 3)
        std::cout <<"the digit is prime" << '\n';
    else if (p == 5)
        std::cout <<"the digit is prime" << '\n';
    else if (p == 7)
        std::cout <<"the digit is prime" << '\n';
    else 
    std::cout << "is not prime" << '\n';


    std::cout << 1%5 << '\n';
    return 0;
}