#include <vector>
#include <iostream>

enum Things {
    heal,
    torch,
    arrow,
    max_things
};

int countTotalIteams (int *numbers) {
    int res =0;
    for(int i = 0; i<max_things; i++) {
        res +=numbers[i]; 
    }
    return res;
}

void change(int &a, int &b) {
    int z = b;
    b = a;
    a = z; 
}

int main() {
    int a = 9;
    int b = 8;
    change(a, b);
    std::cout << "a " << a << " b " << b <<'\n';
    int number[max_things]{3, 6, 12};
    std::cout << "items " << countTotalIteams(number);

    std::vector<int> array = {10, 5, 6, 1, 3};
    std::cout << "length is: " << array.size() <<'\n';
    for(auto &element:array ) {
        std::cout << element << ' ';
    }
    return 0;
}