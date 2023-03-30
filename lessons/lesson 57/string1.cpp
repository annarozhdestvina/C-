#include <iostream>
#include <string>

int main() {
    std::cout << "pick 1 or 2: ";
    int choice;
    std::cin >> choice;

    std::cin.ignore(32767, '\n'); // удаляем символ новой строки из входного потока данных

    std::cout << "Now enter your name: ";
    std::string myName;
    std::getline(std::cin, myName);
 
    std::cout << "Hello, " << myName << ", you picked " << choice << '\n';
 
    return 0;

}