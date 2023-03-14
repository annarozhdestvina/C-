#include <iostream>

void passValue(int value) {
    value = 87;
}

void passArray(int array[5]) {
    array[0] = 10;
    array[2] = 3;
}

enum StudentsNames {
    SMITH,      // 0
    ANDREW,     // 1
    IVAN,
    JOHN,
    ANTON,
    MAX_STUDENTS  // 5
};

int main() {
    int testScores[MAX_STUDENTS];
    testScores[JOHN] = 65;

    int value = 1;
    std::cout << "before passValue: " << value << "\n";
    passValue(value);
    std::cout << "after passValue: " << value << "\n";

    int array[5] = {1, 2, 22, 4, 5};
    std::cout << "before passArray: " << array[0] << " " << array[1] << " " << array[2] << " " << array[3] << " " << array[4] << "\n";
    passArray(array);
    std::cout << "after passArray: " << array[0] << " " << array[1] << " " << array[2] << " " << array[3] << " " << array[4] << "\n";
 
    return 0;
}