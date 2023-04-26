#include <iostream>
 
class Values
{
private:
    int m_value1;
    double m_value2;
    char m_value3;
 
public:
    Values(int value1, double value2, char value3) : m_value1(value1), m_value2(value2), m_value3(value3) // напрямую инициализируем переменные-члены класса
    {
    // Нет необходимости использовать присваивание
    }
 
    void print()
    {
         std::cout << "Values(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
    }
};
 
int main()
{
    Values value(3, 4.5 , 'c');
    value.print();
    return 0;
}