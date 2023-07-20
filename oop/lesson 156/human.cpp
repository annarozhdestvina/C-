#include <iostream>
#include <string>
 
class Human {
private:
    std::string m_name;
    int m_age;
public:
 
    Human(std::string name = "", int age = 0)
        : m_name(name), m_age(age )
    {
    }
 
    std::string getName() const { return m_name; }
    int getAge() const { return m_age; }
};
 
// BasketballPlayer открыто наследует класс Human
class BasketballPlayer: public Human {
private:
    double m_gameAverage;
    int m_points;
public:
 
    BasketballPlayer(std::string name = "", int age = 0, double gameAverage = 0.0, int points = 0) 
       : Human(name, age), m_gameAverage(gameAverage), m_points(points)
    {}

    double getGameAverage() const {
        return m_gameAverage;
    }

    int getPoints() const {
        return m_points;
    }

    void Print() {
        std::cout << getName() <<'\n';
        std::cout << getAge() <<'\n';
        std::cout << getPoints() <<'\n';
    }
};

int main() {
    BasketballPlayer anton("anton Ivanov", 45, 300, 310);
    anton.Print();
}