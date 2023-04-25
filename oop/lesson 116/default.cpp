#include <iostream>

class Fraction {
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction() // конструктор по умолчанию 
    {
         m_numerator = 0;
         m_denominator = 1;
    }
    int getNumerator() {
        return m_numerator;
    }

    int getDenom() {
        return m_denominator;
    }

    double getValue() {
        return static_cast<double>(m_numerator) / m_denominator;
    }
};

int main() {
    Fraction drab; // вызывается конструктор по умолчанию Fraction()
   std::cout << drab.getNumerator() << '/' << drab.getDenom() << '='<<drab.getValue();
}