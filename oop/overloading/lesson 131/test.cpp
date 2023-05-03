#include <iostream>

class Fraction {
private:
    int m_numerator;
    int m_denumerator;

public:
    Fraction(int numerator = 0, int denumerator = 1) :
    m_numerator(numerator), m_denumerator(denumerator) {}

    //friend Fraction operator/(int num, int den);

    void print() {
        std::cout << m_numerator << '/' << m_denumerator <<'\n';
    } 
};

/*Fraction operator/ (int num, int den) {
    std::cout << num << '/' << den<< '\n';
}*/

int main() {
    Fraction f1(4, 77);
    f1.print();

    Fraction f2(1, 2);
    f2.print();

    return 0;
}