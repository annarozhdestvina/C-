#include <iostream>
 
class Parent
{
public:
    Parent() {}
    virtual void print() { std::cout << "Parent"; }
};
 
class Child: public Parent
{
public:
    Child() {}
    virtual void print() { std::cout << "Child"; }
};
 
int main()
{
    try
    {
        try
        {
            throw Child();
        }
        catch (Parent& p)
        {
            std::cout << "Caught Parent p, which is actually a ";
            p.print();
            std::cout << "\n";
            throw; // примечание: Мы здесь повторно выбрасываем исключение
        }
    }
    catch (Parent& p)
    {
        std::cout << "Caught Parent p, which is actually a ";
        p.print();
        std::cout << "\n";
    }
 
    return 0;
}