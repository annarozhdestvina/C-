#include <iostream>
#include <cstdlib>
#include <ctime>

const char alphabet[] = "1234567890~!@#$%^&*-_=+qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
int string_length = sizeof(alphabet);

int main() {
    std::cout << string_length << '\n';
    int length = 0;
    std::cout << "Enter length of the passport: ";
    std::cin >> length;

    srand(time(0));
    std::cout << "Generated Passport: ";
    for (int i = 0; i < length; i++) {
        std::cout << alphabet[rand() % string_length];
    }
}