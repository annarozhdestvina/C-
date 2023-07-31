/*a) Создайте абстрактный класс Shape. Этот класс должен иметь три метода:
   чистую виртуальную функцию print() с параметром типа std::ostream;
   перегрузку operator<<;
   пустой виртуальный деструктор.*/

#include <iostream>

class Shape {
public:
    virtual ~Shape() {}

    virtual std::ostream& print(std::ostream &out) const = 0;

    friend std::ostream& operator<<(std::ostream &out, const Shape &p) {
		return p.print(out);
	}
};

class Point
{
private:
	int m_x = 0;
	int m_y = 0;
	int m_z = 0;
 
public:
	Point(int x, int y, int z)
		: m_x(x), m_y(y), m_z(z)
	{}
 
	friend std::ostream& operator<<(std::ostream &out, const Point &p)
	{
		out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")";
		return out;
	}
};

class Triangle : public Shape {
private:
    Point m_x;
    Point m_y;
    Point m_z;

public:
    Triangle(const Point& p1, const Point& p2, const Point& p3) : m_x(p1), m_y(p2), m_z(p3) {}

    virtual std::ostream& print(std::ostream &out) const override {
		out << "Triangle(" << m_x << ", " << m_y << ", " << m_z << ")";
		return out;
	}
};

class Circle : public Shape {
private:
    Point m_centre;
    int m_radius;

public:
    Circle(const Point& centre, int rad) : m_centre(centre), m_radius(rad) {}

    virtual std::ostream& print(std::ostream &out) const override {
        out << "Circle (" << m_centre << ") rad = " << m_radius;
        return out;
    }
};




int main() {
    Circle c(Point(1, 2, 3), 7);
    std::cout << c << '\n';
 
    Triangle t(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9));
    std::cout << t << '\n';
 
    return 0;
}