#include <iostream>

class Point {
private:
    double m_x, m_y, m_z;
public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0): m_x(x), m_y(y), m_z(z) {}

    friend std::ostream &operator<< (std::ostream &out, const Point& point); 
};

std::ostream &operator<< (std::ostream &out, const Point &point) {
    out << "point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")\n";
    return out;
}

int main() {
    Point p1(0.6, 5.5, 7.4);
    std::cout << p1;
    Point point2(8.7, 9.0, 2.3);
    std::cout << point2;
}