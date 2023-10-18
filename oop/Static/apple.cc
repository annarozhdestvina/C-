#include <iostream>

class Apple {
private:
    int wight_;
    std::string color_;

public:
    static int Count;

    Apple(int weight, std::string color) {
        this->wight_ = weight;
        this->color_ = color;
        Count++;
    }
};

int Apple::Count = 0;

int main() {
    Apple(23, "red");
    Apple(10, "green");

    std::cout << Apple::Count << '\n';

    return 0;
}