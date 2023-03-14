#include <iostream>

int maxNumber(int* people, int length) {
    int max = people[0];
    for (int i = 1; i < length; i++) {
        if(max < people[i]) {
            max = people[i];
        }
    }
    return max;
}

int main() {
    int people[] = {73, 85, 85, 44, 78};
    const int length = sizeof(people) / sizeof(people[0]);
    int maxScore = 0;
    std::cout << maxNumber(people, length) << '\n';

    const int numStudents = 5;
    int student0 = 73;
    int student1 = 83;
    int student2 = 84;
    int student3 = 44;
    int student4 = 78;

    const int masStudents = 5;
    int students[masStudents] = {73, 44, 56, 78, 34};
    int totalScore = 0;
    for(int person = 0; person < masStudents; person++) {
        totalScore += students[person];
    }
    double averageScore = static_cast<double>(totalScore) / masStudents;

    std::cout << "aver = " << averageScore << '\n';

    int array[] = {7, 5, 6, 4, 9, 8, 2, 1, 3};
    int length_array = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length_array; i++) {
        std::cout << array[i] << ' ';
    }

    int array_user[9];
    std::cout << "input nember 1 to 9\n";
    for (int i = 0; i < 9; i++) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        } else {
            std::cin >> array_user[i];
        }
    }

    for (int i = 0; i < 9; i++) {
        std::cout << array_user[i] << ' ';
    }

    return 0;
}