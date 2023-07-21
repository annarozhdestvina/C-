#include <iostream>
 
class Parent {
protected:
    int m_value;
 
public:
    Parent(int value)
        : m_value(value) {}
 
    void identify() { 
        std::cout << "I am a Parent!\n"; }
};
 
class Child : public Parent
{
public:
    Child(int value)
        : Parent(value) {}
    
    void identify() {
        std::cout << "child\n"; 
    }
};

int main() {
    Parent parent(6);
    parent.identify();
 
    Child child(8);
    child.identify();
 
    return 0;
}