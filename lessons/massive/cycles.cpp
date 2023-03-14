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

    std::cout << "aver = " << averageScore;

    return 0;
}