#include <iostream>

class Parent {
protected:
    int m_value;

public:
    Parent(int value) : m_value(value) {}
    virtual ~Parent() {}
};

class Child : public Parent {
protected:
    std::string m_name;

public:
    Child(int value, std::string name) : Parent(m_value), m_name(name) {}

    const std::string& getName() {
        return m_name;
    }
};

Parent* getObject (bool breturnChild) {
    if(breturnChild) 
        return new Child(1, "ban");
    else 
        return new Parent(2);
}

int main() {
    Parent *p = getObject(true);
    Child *ch = dynamic_cast<Child*>(p); // используем dynamic_cast для конвертации указателя класса Parent 
    //в указатель класса Child
    if(ch) // проверка на динамический указатель
        std::cout << "The name of the Child is: " << ch->getName() << '\n';
 
	delete p;
    return 0;
}