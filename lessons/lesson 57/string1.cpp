#include <iostream>
#include <string>

int main() {
    std::cout << "pick 1 or 2\n";
    int choice;
    std::cin >> choice;

    std::cout << "Now enter your name: ";
    std::string myName;
    std::getline(std::cin, myName);
 
    std::cout << "Hello, " << myName << ", you picked " << choice << '\n';
 
    return 0;

}