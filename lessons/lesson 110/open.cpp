#include <iostream>
#include <string>
#include <array>
#include <cassert>

int getarrayNumber(std::array<int, 10> array, int index) {
    if(index < 0 || index >= array.size())
        return -1;
    return array[index];
}

int get2(std::array<int, 10> array, int index) {
    assert (index < 0 || index >= array.size());
    return array[index];
}

int main(int argc, char* argv[]) {
    std::cout << "entered" << argc << " arguments\n";
    for(int i =0; i < argc; i++) {
            std::cout << i<<" " << argv[i] << '\n';
    }
    std::array<int, 10> myarray = { 4, 5, 6, 3, 4, 5, 4, 5, 4, 5};
    std::cout << getarrayNumber(myarray, -4) << '\n';
    std::cout << get2(myarray, -4) << '\n';

    get2(myarray, -5);



    
    return 0;
}