#include <iostream>
 
class Ball {
private: 
    std::string m_color;   //("red");
    double m_radius;

public:

    Ball(std::string color = "Rad", double rad = 20.0) {
        m_color = color;
        m_radius = rad;
    }

    Ball(double rad) {
        m_radius = rad;
    }

    void print() {
        std::cout << "rad = " << m_radius << '\n';
        std::cout << "color is: " << m_color << '\n';
    }
};
 
int main()
{

    Ball def;
	def.print();
 
	Ball black("black");
	black.print();
	
	Ball thirty(30.0);
	thirty.print();
	
	Ball blackThirty("black", 30.0);
	blackThirty.print();
    return 0;
}