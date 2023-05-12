#include <iostream>

class Dollar{
private:
    int m_dollars;

public:
    Dollar(int dollar): m_dollars(dollar) {}

    // Выполняем -Dollars через метод класса
    Dollar operator-() const;

    int getDollar() const {
        return m_dollars;
    }
};

Dollar Dollar::operator-() const {
    return Dollar(-m_dollars);
}

int main() {
    const Dollar dollar1(7);
    std::cout << "my is " << (-dollar1).getDollar();
}