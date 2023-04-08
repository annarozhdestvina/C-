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
    char Name[myLength + 1];
    for (int i =0; i < myLength; i++) {
        Name[i] = myName[i];
    }
    Name[myLength] = '\0';

    std::cout << Name << '\n';

    for(const char* ptr = Name; ptr < Name + myLength; ptr++) {
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
            case 'Y':
            case 'y':
                ++numVowels;
        }
    }
    std::cout << Name << " has " << numVowels << " vowels\n";

    char a = 'R';
    std::cout << a;

    return 0; 
}