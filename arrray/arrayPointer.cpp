#include <iostream>

int main() {
    int array[4] = {5, 8, 4, 6};
    std::cout << "adress of array: " << array << '\n';
    std::cout << "element is: " << array[0] <<'\n';

    for(int i=0; i<4; i++) {
        std::cout << *(array+i)<< ' ';
    }

    const int length = 9;
    char name[length] = "Jonathan";
    int numVowels(0);

    std::cout << "enter a string: \n";
    std::string myName;
    std::getline(std::cin, myName);
    int myLength = myName.length();
    char Name[myLength];
    for (int i =0; i < myLength; i++) {
        Name[i] = myName[i];
    }

    std::cout << Name << '\n';

    for(char* ptr = Name; ptr < Name + length; ptr++) {
        switch(*ptr) {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                ++numVowels;
        }
    }
    std::cout << Name << " has " << numVowels << " vowels\n";

    return 0; 
}