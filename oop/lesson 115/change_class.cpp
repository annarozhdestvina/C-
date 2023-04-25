#include <iostream>

class Values {
private: 
    int m_number1;
    int m_number2;
    int m_number3;
public:
    void setNumber1(int number) { m_number1 = number;}
    int getNumber1() {return m_number1;}
};

class ValuesMas {
private:
    int m_numbers[3];

public:
    void setNumber1(int number) {
        m_numbers[0] = number;
    }
    int getNumber1() {
        return m_numbers[0];
    }
};
 
int main()
{
    Values value;
    value.setNumber1(7);
    std::cout << value.getNumber1() << '\n';

    ValuesMas myMas;
    myMas.setNumber1(88);
    std::cout << myMas.getNumber1() << '\n';
}