#include <iostream>

class Animal {
protected:
    std::string m_name;
    const char* m_speak;
 
    Animal(std::string name, const char* speak)
        : m_name(name), m_speak(speak)
    {}
 
public:
    std::string getName() { return m_name; }
    const char* speak() { return m_speak; }

    void report(Animal &rAnimal)
{
    std::cout << rAnimal.getName() << " says " << rAnimal.speak() << '\n';
}
};

class Cat: public Animal {
public:
    Cat(std::string name)
        : Animal(name, "Meow")
    {}
 
    const char* speak() { return "Meow"; }

    void report(Cat &cat)
{
    std::cout << cat.getName() << " says " << cat.speak() << '\n';
}
};
 
class Dog: public Animal {
public:
    Dog(std::string name)
        : Animal(name, "Woof")
    {}
 
    const char* speak() { return "Woof"; }

    void report(Dog &dog)
{
    std::cout << dog.getName() << " says " << dog.speak() << '\n';
}
};
 
int main() {
    Cat matros("Matros"), ivan("Ivan"), martun("Martun");
    Dog barsik("Barsik"), tolik("Tolik"), tyzik("Tyzik");
 
    // Создаем массив указателей на наши объекты Cat и Dog
    Animal *animals[] = { &matros, &ivan, &martun, &barsik, &tolik, &tyzik};
    for (int iii=0; iii < 6; iii++)
        std::cout << animals[iii]->getName() << " says " << animals[iii]->speak() << '\n';
 
    return 0;
}