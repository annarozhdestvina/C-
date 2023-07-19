#include <string>
#include <iostream>
 
class Human
{
public:
    std::string m_name;
    int m_age;
 
    Human(std::string name = "", int age = 0)
        : m_name(name), m_age(age)
    {
    }
 
    std::string getName() const { return m_name; }
    int getAge() const { return m_age; }
 
};

class BasketballPlayer : public Human
{
public:
    double m_gameAverage;
    int m_points;
 
    BasketballPlayer(double gameAverage = 0.0, int points = 0)
       : m_gameAverage(gameAverage), m_points(points)
    {
    }
};

int main() {
    BasketballPlayer anton;
    anton.m_name = "Anton";
    std::cout << anton.getName();

    return 0;
}