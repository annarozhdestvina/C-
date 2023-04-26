#include <iostream>
 
class Something
{
private:
    double m_length = 3.5;
    double m_width = 3.5;
 
public:
 
    // Обратите внимание, здесь нет конструктора по умолчанию 
 
    Something(double length, double width)
        : m_length(length), m_width(width)
    {
        // m_length и m_width инициализируются этим конструктором (значения по умолчанию, приведенные выше, не используются)
    }
 
    void print()
    {
        std::cout << "length: " << m_length << ", width: " << m_width << '\n';
    }
 
};
 
int main()
{
    //Something a; // не скомпилируется, так как требуется конструктор по умолчанию, даже если члены класса имеют значения по умолчанию
    Something a(4.6, 8.8); // ok
    a.print();
    return 0;
}