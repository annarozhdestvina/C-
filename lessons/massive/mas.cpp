#include <iostream>

struct Rectangle {
    int length;
    int width;
};
//Rectangle rects[4];

int main() {
    int testResult[30];
    Rectangle rects[4];

    rects[0].length = 15;

    std::cout << rects[0].length;
    return 0;
}