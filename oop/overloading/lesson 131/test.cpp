#include <iostream>

class Fraction {
private:
    int m_numerator;
    int m_denumerator;
    std::string m_name;

public:
    Fraction(int numerator = 0, int denumerator = 1, std::string name = "fraction") :
    m_numerator(numerator), m_denumerator(denumerator), m_name(name) {}

    friend Fraction operator*(int value, const Fraction& f1);
    friend Fraction operator*(const Fraction& f1, int value);
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);

    void print() {
        std::cout << m_name << std::endl;
        std::cout << m_numerator << '/' << m_denumerator <<'\n';
    } 
};

Fraction operator*(int value, const Fraction& f1) {
    return Fraction(f1.m_numerator * value);
}

Fraction operator*(const Fraction& f1, int value) {
    return Fraction(f1.m_numerator * value);
}

Fraction operator*(const Fraction& f1, const Fraction& f2) {
    return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denumerator * f2.m_denumerator);
}

int main() {
    Fraction f1(4, 77, "f1:");
    f1.print();

    Fraction f2(1, 2, "f2:");
    f2.print();

    Fraction f3 = 5 * f1;
    f3.print();

    Fraction f4 = f2 * 3;
    f4.print();

    Fraction f5 = f1 * f2;
    f5.print();

    Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
    f6.print();

    return 0;
}