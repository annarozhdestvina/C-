#include <iostream>

class Dollar {
private:
    int m_dollar;

public:
    /*Dollar (int dollar) {
        m_dollar  = dollar;
    }*/

    Dollar (int dollar): m_dollar(dollar) {
    }

    int getDollar() const{
        return m_dollar;
    }
};

Dollar operator+(const Dollar& d1, const Dollar& d2) {
    return Dollar(d1.getDollar() + d2.getDollar());
}

int main() {
    Dollar d1(88);
    int main_dollar = d1.getDollar();
    std::cout << main_dollar;

    Dollar d2(7);
    Dollar sum = d2 + d2;
    std::cout << sum.getDollar();
}