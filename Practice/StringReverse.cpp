#include <iostream>

int main() {
    char string[] = "abcd";
    int length = strlen(string);
    std::cout << length << '\n';
    std::cout << string << '\n';

    int temp, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
    std::cout << string;

    return 0;
}