#include <iostream>

void changeN(int &ref) {
    ref = 8;
}

void change_by_Pointer (int* a) {
    *a = 11;
}

int main() {
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