#include <iostream>

class Dollar {
private:
    int m_dollar;
public:
    Dollar(int dollar): m_dollar(dollar) {}

    Dollar operator+(int value);

    int getDollar() {
        return m_dollar;
    }
};

Dollar Dollar::operator+(int value) {
    return Dollar(m_dollar + value);
}

int main() {
    Dollar d1(7);
    Dollar d2 = d1 + 1;
    std::cout << d2.getDollar();
}