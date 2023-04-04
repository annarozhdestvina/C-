#include <iostream>

int break_or_return() {

    while (true) // бесконечный цикл
    {
        std::cout << "Enter 'b' to break or 'r' to return: ";
        char sm;
        std::cin >> sm;
 
        if (sm == 'b')
            break; // выполнение кода продолжится с первого стейтмента после цикла
 
        if (sm == 'r')
            return 1; // выполнение return приведет к тому, что управление сразу возвратится в caller (в этом случае, в функцию main())
    }
 
    // Использование оператора break приведет к тому, что выполнение цикла продолжится здесь
 
    std::cout << "We broke out of the loop\n";
 
    return 33;
}

int main() {

    int returnValue = break_or_return();
    std::cout << "function reterned" << returnValue << '\n';
    {
        while(true) {
            std::cout << "enter 0 to exit or else to continue\n";
            int val;
            std::cin >> val;

            if(val == 0)
                break;
        }
        std::cout << "we're out\n";
    }
    return 0;
}