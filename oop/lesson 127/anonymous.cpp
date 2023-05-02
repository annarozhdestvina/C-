#include <iostream>

class Dollar {
private:
    int m_dollars;
public:
    Dollar(int dollars) {
        m_dollars = dollars;
    }

    int getDollars() const {
        return m_dollars;
    }
};

void print(const Dollar &dollars) {
    std::cout << dollars.getDollars() << " $.\n";
}

int main() {
    Dollar dollars(7);
    print(dollars);

    print(Dollar(88));
}