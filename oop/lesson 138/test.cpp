#include <iostream>
#include <string>
#include <vector>

struct StudentGrade {

    std::string m_student;
    char grade;

   // StudentGrade() = delete;
};

class GradeMap {
    std::vector<StudentGrade> m_map;

public:
    GradeMap() {}

    char &operator[] (std::string name) {
        for( auto &ref : m_map) {
            if(ref.m_student == name)
                return ref.grade;
        }
        StudentGrade temp { name, ' '};
        m_map.push_back(temp);
        return m_map.back().grade;
    }
};

int main() {
    GradeMap grades;
    grades["John"] = 'A';
    grades["Ann"] = 'B';
    std::cout << "John's grade is " << grades["John"] << std::endl; 
    std::cout << "Ann's grade is " << grades["Ann"] << std::endl; 

}