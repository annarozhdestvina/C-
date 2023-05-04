#include <iostream>

class Dollar {
private:
    int m_dollar;

public:
    Dollar(int dollars) {
        m_dollar = dollars; 
    }

    int getDollar() const {
        return m_dollar;
    }
};

Dollar operator+(const Dollar& d1, const Dollar& d2) {
    return Dollar(d1.getDollar() + d2.getDollar());
}

int main() {
    Dollar d1(43);
    Dollar d2(2);
    Dollar sum = d1 + d2;

    std::cout << "sum is " << sum.getDollar() << " dollars\n";

    return 0;
}