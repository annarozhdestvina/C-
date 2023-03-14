#include <iostream>

int main() {
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