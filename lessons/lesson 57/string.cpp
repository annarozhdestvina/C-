#include <string>
#include <iostream>

int main() {
    //std::string name;
    std::string name("Sasha");
    name = "Masha";


    std::string myId("34");

    std::cout << name << '\n';

    std::cout << "enter your full name: \n";
    std::string myName;
    std::getline(std::cin, myName);

    std::cout << "enter your age: \n";
    std::string myAge;
    std::getline(std::cin, myAge);

    std::cout << "name is " << myName << " and age is " << myAge;

    return 0;
}