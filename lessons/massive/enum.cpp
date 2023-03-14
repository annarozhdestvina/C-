#include <iostream>

void passValue(int value) {
    value = 87;
}

void passArray(int array[5]) {
    array[0] = 10;
    array[2] = 3;
}

void printSize(int array[]) {
    std::cout << sizeof(array) << '\n';
}

namespace AnimalsNames
{
    enum Animals{
        chicken,
        lion,
        giraffe,
        elephant,
        duck, 
        snake,
        MAX_ELEMENTS
    };
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

    int legs[AnimalsNames::MAX_ELEMENTS] = {2, 4, 4, 4, 2, 0};
    std::cout << "eleghant legs = " << legs[AnimalsNames::elephant] << '\n';
    std::cout << "snake legs = " << legs[AnimalsNames::snake] << '\n';

    int array_main[] = {1, 4, 2, 3, 8, 5, 5};
    std::cout << sizeof(array_main) << '\n';
    printSize(array_main);

    int length = sizeof(array_main) / sizeof(array_main[0]);
    std::cout << "length = " << length << '\n';

    int value = 1;
    std::cout << "before passValue: " << value << "\n";
    passValue(value);
    std::cout << "after passValue: " << value << "\n";

    int array[5] = {1, 2, 22, 4, 5};
    std::cout << "before passArray: " << array[0] << " " << array[1] << " " << array[2] << " " << array[3] << " " << array[4] << "\n";
    passArray(array);
    std::cout << "after passArray: " << array[0] << " " << array[1] << " " << array[2] << " " << array[3] << " " << array[4] << "\n";

    double prognoz[356];
    for (int i = 0; i < 356; i++) {
        prognoz[i] = 0.0;
    }

    double temperature[356] = { 0.0 };
 
    return 0;
}