#include <iostream>

class Apple {
private:
    std::string myname;
    std::string mycolor;

public:
    Apple(std::string name = "apple", std::string color = "red") :
    myname(name), mycolor(color) {}

    

    Apple() {}

    std::string getName() const {
        return myname;
    }

    std::string getColor() const {
        return mycolor;
    }

};

class Banana : public Apple {
public:
    Banana(std::string name = "banana", std::string color = "yellow") : Apple(name, color) {}


};

int main()
{
	Apple a("red");
	Banana b;
 
	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	
	return 0;
}