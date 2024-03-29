#include <iostream>

template <typename T>
const T& max(const T& a, const T& b) {
    return (a > b) ? a : b;
}

class Dollar {
private:
    int m_dollar;
public:
    Dollar(int dollar) : m_dollar(dollar) {}

    friend bool operator>(const Dollar &d1, const Dollar &d2) {
        return (d1.m_dollar > d2.m_dollar);
    }

    void Print() {
        std::cout << "dollar = " << m_dollar;
    }
};

int main() {

    Dollar d1 = 6666;
    Dollar d2 = 6667;

    if(d1 > d2)
        std::cout << "bigger\n";
    else
        std::cout << "smaller\n";

    Dollar bigger = max(d1, d2);
    bigger.Print();



    return 0;
}