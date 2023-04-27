#include <iostream>

class Mathem
{
private:
    int m_value;
 
public:
    Mathem() { m_value = 0; }
 
    void add(int value) { m_value += value; }
    void sub(int value) { m_value -= value; }
    void multiply(int value) { m_value *= value; }
 
    int getValue() { return m_value; }
};
 
int main()
{
    Mathem operation;
    operation.add(7); // возвращает void
    operation.sub(5); // возвращает void
    operation.multiply(3); // возвращает void
 
    std::cout << operation.getValue() << '\n';
    return 0;
}