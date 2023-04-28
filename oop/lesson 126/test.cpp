#include <iostream>

class Vector3D;

class Point3D
{
private:
	double m_x, m_y, m_z;
 
public:
	Point3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	void print()
	{
		std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}

     void moveByVector(const Vector3D &v);
};
 
class Vector3D
{
private:
	double m_x, m_y, m_z;
 
public:
	Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	void print()
	{
		std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}
    friend void Point3D::moveByVector(const Vector3D &v);

    //friend void Point3D::moveByVector(const Vector3D &v);
    //friend class Point3D; //Сделайте класс Point3D дружественным классу Vector3D
};

void Point3D::moveByVector(const Vector3D &v)
	{
		// Реализуйте эту функцию как дружественную классу Vector3D
        m_x += v.m_x;
        m_y += v.m_y;
        m_z += v.m_z;
	}

 
int main()
{
	Point3D p(3.0, 4.0, 5.0);
	Vector3D v(3.0, 3.0, -2.0);
 
    std::cout << "Vector p is:\n";
	p.print();
	p.moveByVector(v);
    std::cout << "After move vector p is:\n";
	p.print();
 
	return 0;
}