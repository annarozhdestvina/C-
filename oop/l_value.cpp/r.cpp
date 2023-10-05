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

void fun(const int &lref) {
    std::cout << "l-value ref to const\n";
}

void fun(int &&rref) {
    std::cout << "r-value ref\n";
}


int main() {
    Fraction &&ref = Fraction(4, 7);// ссылка r-value на анонимный объект
    std::cout << ref <<'\n';

    int x = 7;
    fun(x); // аргумент l-value вызывает функцию с ссылкой l-value
	fun(7); // аргумент r-value вызывает функцию с ссылкой r-value

    int x = 8;
    const int &&ref = 9;
    return 0;
}