#include <iostream>

bool isEqual (int x, int y) {
    return (x==y);
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

    
    

    return 0;
}