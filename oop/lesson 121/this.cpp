#include <iostream>

class Another
{
private:
    int m_number;
 
public:
    Another(int number)
    {
        setNumber(number);
    }
 
    void setNumber(int number) { m_number = number; }
    int getNumber() { return m_number; }
};
 
int main()
{
    Another another(3);
    another.setNumber(4);
    std::cout << another.getNumber() << '\n';
 
    return 0;
}