#include <iostream>

int return5() {
    return 5;
}

int getNumbers() {
    return 5;
    return 7;
}

int main() {
    std::cout << "input"<<std::endl;
    std::cout << return5() <<std::endl;

    std::cout << getNumbers() << std::endl;
    std::cout << getNumbers() << std::endl;


    return5();
    


    return 0;
}