#include <iostream>
 
class A
{
public:
    A() { std::cout << "A\n"; }
};
 
class B
{
private:
    A m_a; // B содержит A, как переменную-член
 
public:
    B() { std::cout << "B\n"; }
};

class Ball {
private: 
    std::string m_color;   //("red");
    double m_radius;

public:

    Ball() {
        m_color = "Red";
        m_radius = 20.0;
    }
    void setColour(std::string color) {
        m_color = color;
    }

    void setRad(int rad) {
        m_radius = rad;
    }

    void setColour_and_Rad(std::string color, int rad) {
        m_color = color;
        m_radius = rad;
    }

    void print() {
        std::cout << "rad = " << m_radius << '\n';
        std::cout << "color is: " << m_color << '\n';
    }
};
 
int main()
{
    B b;
    Ball def;
    def.print();

    //Ball black("black");
    Ball black;
    black.setColour("black");
    black.print();

    //Ball blth("black", 30);
    Ball blth;
    blth.print();
    return 0;
}