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
 
	virtual const char* getName() const { return "Parent"; }
};
 
class Child: public Parent
{
public:
	Child(int value)
		: Parent(value)
	{
	}
 
	const char* getName() const { return "Child"; }
};
 
int main()
{
	Child ch(7);
	Parent &p = ch;
	std::cout << p.getName();
 
	return 0;
}