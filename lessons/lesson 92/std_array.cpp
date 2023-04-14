#include <array>
#include <iostream>
#include <algorithm>

void size(const std::array<int, 4> &myarray) {
    std::cout << "length: " <<myarray.size() <<'\n';
}

void print(const std::array<int, 4> &myarray) {
    for(auto &element: myarray) {
        std::cout << element << ' ';
    }
    std::cout <<'\n';
}

/*void sortArray(const std::array<int, 4> &myarray) {
    std::sort(myarray.begin(), myarray.end());
}*/

int main () {
    std::array<int, 4> myarray; // объявляем массив типа int длиной 4
    myarray = {8, 6, 44, 1};

    std::cout << myarray[1] << '\n';
   // myarray.at(8) = 15;
    myarray.at(3) = 15;

    std::cout << "length: " <<myarray.size() << '\n';
    size(myarray);

    print(myarray);
    std::sort(myarray.begin(), myarray.end());
    //sortArray(&myarray);
    print(myarray);

    return 0;
}
 