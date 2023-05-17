#include <iostream>
// #include 
class Dollars
{
private:
    int m_dollars;
public:
    Dollars(int dollars=0)
    {
        m_dollars = dollars;
    }

    operator int() { return m_dollars; }
    int getDollars() { return m_dollars; }
    void setDollars(int dollars) { m_dollars = dollars; }
};

void printInt(int value) {
    std::cout << value;
}

int main() {
    Dollars dollars(9);
    printInt(dollars);
}