#include <iostream>

int getUserInput() {
    std::cout << "enter an integer " << '\n';
    int value;
    std::cin >> value;
    return value;
}

int getMathOperation() {
    std::cout << "enter an Operator " << '\n';
    int op;
    std::cin >> op;

    return op;
}

int calculateResult (int x, int op, int y) {
    if (op == 1) 
        return x+y;
    if (op == 2) 
        return x-y;
    if (op == 3) 
        return x*y;
    if (op == 4) 
        return x/y;

    return -1; //incorrect input
}

void printResult(int result) {
    std::cout << "result = " << result << '\n';
}

int main() {
    using namespace std;
    cout << "helo" << '\n';

    int input1 = getUserInput();

    int op = getMathOperation();

    int input2 = getUserInput();

    int result = calculateResult(input1, op, input2);
    printResult(result);

    return 0;
}