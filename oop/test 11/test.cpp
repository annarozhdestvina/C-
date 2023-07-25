#include <iostream>

class Fruit {
private:
    std::string myname;
    std::string mycolor;

public:
    Fruit(std::string name, std::string color) : myname(name), mycolor(color) {}

    std::string getName() const {
        return myname;
    }

    std::string getColor() const {
        return mycolor;
    }
};

class Apple : public Fruit {

public:
    Apple(std::string name = "apple", std::string color = "red") :
    Fruit(name, color) {}

};

class Banana : public Fruit {
public:
    Banana(std::string name = "banana", std::string color = "yellow") : Fruit(name, color) {}

};

int main()
{
	Apple a("red");
	Banana b;
 
	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	
	return 0;
}