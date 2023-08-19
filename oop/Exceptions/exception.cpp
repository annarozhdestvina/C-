#include <iostream>

double divide(int a, int b, bool &success) {
    if (b == 0) {
        success = false;
        return 0.0;
    }
    success = true;
    return static_cast<double>(a)/b;
}

int main() {
    bool success;
    double result = divide(7, 4, success);

    if(!success)
        std::cout << "Error\n";
    else    
        std::cout << "answer is " << result <<'\n';

    return 0;
}