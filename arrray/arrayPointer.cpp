#include <iostream>

int main() {
    int array[4] = {5, 8, 4, 6};
    std::cout << "adress of array: " << array << '\n';
    std::cout << "element is: " << array[0] <<'\n';

    for(int i=0; i<4; i++) {
        std::cout << *(array+i)<< ' ';
    }

    return 0; 
}