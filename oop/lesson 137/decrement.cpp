#include <iostream>
 
class Number
{
private:
    int m_number;
public:
    Number(int number=0)
        : m_number(number) {}
 
    Number& operator++();
    Number& operator--();
 
    friend std::ostream& operator<< (std::ostream &out, const Number &n);
};

Number& Number::operator++() {
    if (m_number == 8) 
        m_number = 0;
    else 
        ++m_number;
    return *this;
}

Number& Number::operator--() {
    if (m_number == 0) 
        m_number = 8;
    else 
        --m_number;
    return *this;
}

std::ostream& operator<< (std::ostream &out, const Number &n) {
    out << n.m_number;
    return out;
}

int main() {
    Number number(5);

    std::cout << number << ++number << ++number;

    return 0;
}