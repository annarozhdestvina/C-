#include <iostream>

int main() {
    std::cout << "How many names would you like to enter?\n";
    int myLength;
    std::cin >> myLength;
    char* myarray = new char[myLength];



    std::cout << "enter a positive integer:\n";
    int length;
    std::cin >> length;

    int* array = new int[length];
    std::cout << "i allocated array of " << length << '\n';
    array[0] = 7;

    delete[] array;
    array = 0;

    int *array2 = new int[length]();
    int fixedArray[5] = {9, 7, 5, 3, 1};
    int *array3 = new int[5] {9, 7, 5, 3, 1};

    char fixedArray2[14] { "hello world" };
    char* array4 = new char[14] { "hellou you" };

    std::cout << fixedArray2 << '\n';
    std::cout << array4 << '\n';


    return 0;
}