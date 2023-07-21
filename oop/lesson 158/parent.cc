#include <iostream>
 
class Parent {
protected:
    int m_value;
 
public:
    Parent(int value)
        : m_value(value) {}
 
    void identify() { std::cout << "I am a Parent\n"; }
};

class Child: public Parent {
public:
    Child(int value)
        : Parent(value) {}

    int getValue() {
        return m_value;
    }
};

int main() {
    Child child(7);
    std::cout << "child has value " << child.getValue() << '\n';
    
    // Parent parent(7);   dont work
    // std::cout << "parent has value " << parent.getValue() << '\n';
 
    return 0;
}