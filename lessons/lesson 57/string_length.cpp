#include <iostream>
#include <string>

int main() {
    std::string myName("Sasha");
    std::cout << myName << " has " << myName.length() << " characters\n";

    std::string myFullName;
    std::cout << "enter your full name: ";
    std::getline(std::cin, myFullName);

    int age;
    std::cout << "enter your age: ";
    std::cin >> age;
    std::cout << "you've lived " << age / static_cast<float>(myFullName.length()) << " years\n";
    return 0;
}