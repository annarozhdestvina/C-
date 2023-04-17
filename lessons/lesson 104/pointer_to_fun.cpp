#include <iostream>

int boo(){
    return 7;
}
int doo(){
    return 8;
}
int moo(int a) {
    return a * 2;
}

int main() {
    boo();

    int (*fctPtr2)(int) = moo;
    fctPtr2(7);
    std::cout << fctPtr2(7) << '\n';

    std::cout<< boo();
    std::cout<< reinterpret_cast<void*>(boo);

    int (*fctPtr)() = boo; //указатель на функцию
    fctPtr = doo; //теперь указывает на doo()

    return 0;
}