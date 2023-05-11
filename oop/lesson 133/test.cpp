#include <iostream>

class Fraction {
private:
    int m_numerator = 0;
    int m_denumerator = 1;

public:
    Fraction(int num = 0, int den = 1) : m_numerator(num), m_denumerator(den) {}

    friend std::ostream& operator<<(std::ostream &out, const Fraction &f);
    friend std::istream& operator>>(std::istream &in, Fraction &f);

    void Print() {
        std::cout << m_numerator << '/' << m_denumerator <<'\n';
    }
};

std::istream& operator>>(std::istream &in, Fraction &f) {
    char c;
    in >> f.m_numerator;
    in >> c;
    in >> f.m_denumerator;

    return in;
}

std::ostream& operator<<(std::ostream &out, const Fraction &f) {
    out << f.m_numerator << '/' << f.m_denumerator; 
    return out;
}

int main()
{
 
	Fraction f1;
	std::cout << "Enter fraction 1: ";
	std::cin >> f1;
    f1.Print();
 
	//Fraction f2;
	//std::cout << "Enter fraction 2: ";
	//std::cin >> f2;

    //std::cout << f1;
 
	//std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';
 
	return 0;
}