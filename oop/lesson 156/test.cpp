#include <iostream>
#include <string>

class Fruit {
private:
    std::string m_name;
    std::string m_colour;

public:
    Fruit(std::string name, std::string colour)
    : m_name(name), m_colour(colour) {}

    std::string getName() const { return m_name; }
	std::string getColor() const { return m_colour; }
};

class Apple : public Fruit {
private:
    double fiber;

public:
    Apple(std::string name, std::string colour, double fi)
    : Fruit(name, colour), fiber(fi) {}

    double getFiber() const {
        return fiber;
    }

    friend std::ostream& operator<<(std::ostream& out, const Apple &other) {
        out << "Apple ("<< other.getName() << ' ' << other.getColor() << ' ' << other.fiber << ")\n";
        return out;
    }
};

class Banana : public Fruit {
public:
    Banana(std::string name, std::string colour) : Fruit(name, colour) {}

    friend std::ostream& operator<<(std::ostream& out, const Banana& b) {
        out <<  "Banana (" << b.getName() << ", " << b.getColor() << ")\n";
        return out;
    }
};

int main()
{
	const Apple a("Red delicious", "red", 7.3);
	std::cout << a;
 
	const Banana b("Cavendish", "yellow");
	std::cout << b;
 
	return 0;
}