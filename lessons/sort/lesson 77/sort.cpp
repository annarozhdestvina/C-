#include <iostream>
#include <algorithm>


int main() {
    int a = 3;
    int b = 5;
    std::cout << "Before swap a = " << a << " b = " << b << '\n';
    std::swap(a, b);
    std::cout << "After swap a = " << a << " b = " << b << '\n';
    int array[4] = {88, 2, 44, 4};
    int min = array[0];
    int index = 0;
    for (int i = 1; i < 4; i++) {
        if(min > array[i]) {
            min = array[i];
            index = i;
        }
    }
    std::cout <<"min = "<< min << '\n';
    std::cout << "index= "<< index << '\n';
    std::cout << array[0] << '\n';
    std::swap(array[0], array[index]);

    for(int i =0; i<4; i++){
        printf("%d ", array[i]);
    }
    std::cout << '\n';
    min=array[1];
    for (int i = 2; i < 4; i++) {
        if(min > array[i]) {
            min = array[i];
            index = i;
        }
    }
    std::swap(array[1], array[index]);

    for(int i =0; i<4; i++){
        printf("%d ", array[i]);
    }

    return 0;
}