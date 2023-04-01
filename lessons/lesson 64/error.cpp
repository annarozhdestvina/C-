#include <iostream>
#include <cmath>

enum class ErrorCode
{
    error_success = 0,
    error_negative = -1,
};

ErrorCode doSomething(int value) {
    if (value < 0 )
        return ErrorCode::error_negative;
    return ErrorCode::error_success; 
}

int main() {
    std::cout << "Enter a positive munber\n";
    int a;
    std::cin >> a;
    if(doSomething(a) == ErrorCode::error_negative) {
        std::cout <<"you entered a negative number\n";
    } else {
        std::cout << "it worked and root= " << sqrt(a);
    }

    return 0;
}