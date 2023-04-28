#include <iostream>
#include <string>
 
class Anything
{
private:
    std::string m_value;
 
public:
    Anything(const std::string &value="void") { m_value= value; }
 
    const std::string& getValue() const { return m_value; } // getValue() для константных объектов
    std::string& getValue() { return m_value; } // getValue() для неконстантных объектов

    void print() {
        std::cout << m_value << '\n';
    }
    void const print2() {
        std::cout << m_value;
    }

};

int main()
{
	Anything anything;
	anything.getValue() = "Hello!"; // вызывается неконстантный getValue()
    anything.print();
 
	const Anything anything2;
	std::cout << anything2.getValue(); // вызывается константный getValue()
    
 
	return 0;
}