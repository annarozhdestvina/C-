#include <iostream>

void changeN(int &ref) {
    ref = 8;
}

void change_by_Pointer (int* a) {
    *a = 11;
}

struct Something {
    int value1;
    float value2;
};

struct Other {
    Something my_something;
    int otherValue;
};

int main() {
    Other other;
// работаем с полем value1 структуры Something 
//     переменной other структуры Other

//доступ к этому полю осуществлялся бы через other.something.value1
    int& ref = other.my_something.value1;
    other.my_something.value1 = 77;
    std::cout << other.my_something.value1 << '\n';
    //идентично этому 
    ref = 88;
    std::cout << ref << '\n';


    int x = 3;
    std::cout << "before change x: " << x <<'\n';

    changeN(x);
    std::cout << "after change x: " << x <<'\n';

    int a = 1;
    std::cout << "before change a: " << a <<'\n';
    change_by_Pointer(&a);
    std::cout << "after change a: " << a <<'\n';

    return 0;
}