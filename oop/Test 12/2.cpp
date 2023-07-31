#include <iostream>
 
class Parent
{
protected:
	int m_value;
 
public:
	Parent(int value)
		: m_value(value)
	{
	}
 
	virtual const char* getName() { return "Parent"; }
};
 
class Child: public Parent
{
public:
	Child(int value)
		: Parent(value)
	{
	}
 
	virtual const char* getName() = 0;
};
 
const char* Child::getName()
{
    return "Child";
}
 
int main()
{
	Child ch(7); // class Child явдяется обстрактным и его обхекиы создавать нельзя
	Parent &p = ch;
	std::cout << p.getName();
 
	return 0;
}