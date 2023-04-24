#include <iostream>

class DataClass {
    int m_day;
    int m_month;
    int m_year;
public:
    void setData(int day, int month, int year) {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    void print() {
        std::cout <<m_day<<'/'<<m_month<<'/'<<m_year;
    }

    void copyFrom(const DataClass &b) {
        m_day = b.m_day;
        m_month = b.m_month;
        m_year = b.m_year;
    }
};

class Numbers {
private:
    double m_a;
    double m_b;
    double m_c;
public: 
    void setValues(double a, double b, double c) {
        m_a = a;
        m_b = b;
        m_c = c;
    }

    void print() {
        std::cout <<"< " << m_a<<", "<<m_b<<", "<<m_c<< ">\n";
    }

    int isEqual(const Numbers &b) {
        if(m_a == b.m_a && m_b == b.m_b && m_c == b.m_c)
            return true;
        else 
            return false;
    }
};

int main() {
    DataClass date;

    date.setData(03, 55, 2023);
    date.print();

    DataClass copy;
    copy.copyFrom(date);
    copy.print();

    Numbers points;
    points.setValues(3.0, 4.66, 7.44);
    points.print();

    Numbers point1;
    point1.setValues(3.0, 4.0, 5.0);
 
    Numbers point2;
    point2.setValues(3.0, 4.0, 5.0);
 
    if (point1.isEqual(point2))
        std::cout << "point1 and point2 are equal\n";
    else
        std::cout << "point1 and point2 are not equal\n";
 
    Numbers point3;
    point3.setValues(7.0, 8.0, 9.0);
 
    if (point1.isEqual(point3))
        std::cout << "point1 and point3 are equal\n";
    else
        std::cout << "point1 and point3 are not equal\n";
 



    return 0;
}