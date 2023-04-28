#include <iostream>
class Anything
{
private:
    static int s_value;
public:
    static int getValue() { return s_value; } // статический метод
};

class IDGenerator
{
private:
    static int s_nextID; // объявление статической переменной-члена
 
public:
     static int getNextID(); // объявление статического метода
};

int IDGenerator::s_nextID = 1;

int IDGenerator::getNextID() {
    return s_nextID++;
}
 
int Anything::s_value = 3; // определение статической переменной-члена класса
 
int main()
{
    std::cout << Anything::getValue() << '\n';

    for (int i = 0; i < 4; i++)
        std::cout << "the nest iD: " << IDGenerator::getNextID() <<'\n';
}