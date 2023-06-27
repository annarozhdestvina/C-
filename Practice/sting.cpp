#include <iostream>

void reverse(char* string) {
    const int length = strlen(string);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        const char temp = *(string + i);
        *(string + i) = *(string + j);
        *(string + j) = temp;
    }
}

void reverse2(char* string) {
    char* left = string;
    char* rigth = string;

    while (*rigth) {
        ++rigth;
    }
    --rigth;

    while(rigth > left) {
        const char temp = *rigth;
        *rigth = *left;
        *left = temp;
        rigth--;
        left++;
    }
}

int main() {
    char name[] = "abcd";
    //const int length = sizeof(string);    5
    const int length = strlen(name);  //  4
    // std::cout << length << '\n';
    std::cout << name << '\n';
    std::cout << *name << '\n';
    // std::cout << name + 2 << '\n';
    std::cout << *(name + 1) << '\n';

    reverse(name);
    std::cout << name <<'\n';

    reverse2(name);
    std::cout << name;

    return 0;
}