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

    const int length =5;
    int array2[length] = {20, 10, 50, 40, 30};

    for (int start= 0; start < length-1; start++) {
        int smallest = start;
        for(int current = start+1; current < length; current++) {
            if(array2[current] < array2[smallest])
            smallest = current;
        }
        std::swap(array2[start], array2[smallest]);
    }
    for(int i =0; i<length; i++){
        std::cout << array2[i] << ' ';
    }

    


    return 0;
}