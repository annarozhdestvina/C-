#include <iostream>

class Fraction {
private:
    int m_num;
    int m_den;
public:
    Fraction(int num = 0, int den = 1) :
    m_num(num), m_den(den) {}

    friend std::ostream& operator<<(std::ostream& out, const Fraction &f1) {
        out << f1.m_num << "/" << f1.m_den;
        return out;
    }
};


int main() {
    Fraction &&ref = Fraction(4, 7);// ссылка r-value на анонимный объект
    std::cout << ref <<'\n';

    return 0;
}