#include <iostream>

int main() {
    double t = 7.0;
    std::cout << sizeof(t) << "\n";
    int a = 7;
    std::cout << sizeof(a) << "\n";
    int b = 9;
    int larger = (a > b) ? a : b;
    std::cout << larger << "\n";

    bool inBigClassroom = true;
    const int classSize = inBigClassroom ? 30 : 20;
    std::cout << inBigClassroom << "\n";
    std::cout << classSize << "\n";

}