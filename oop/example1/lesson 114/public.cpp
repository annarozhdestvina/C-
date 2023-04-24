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

class Stack {
    int _array[100];
    int _length;
public:

    Stack() {
        std::cout << "default constructor!\n";
        reset();
    }

    void reset() {
        for(int i = 0; i < 10; i++) 
            _array[i] = 0;
        _length = 0;
    }

    void print() {
        std::cout << "( ";
        for (int i = 0; i < 10; i++) {
            if(_array[i] != 0)
                std::cout << _array[i] << ' ';
        }
        std::cout << ")\n"; 
    }

    void push(int number) {
        _array[_length] = number;
        _length++;
    }

    void pop() {
        _length--;
        _array[_length] = 0;
        //std::cout << _array[_length] << '\n';
        // std::cout << _length <<'\n';
       // _length--;
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
 
    Stack stack;
	stack.reset();
 
	stack.print();
 
	 stack.push(3);
	 stack.push(7);
	 stack.push(5);
	 stack.print();
 
	 stack.pop();
	 stack.print();
 
	 stack.pop();
	 stack.pop();
 
	 stack.print();
 


    return 0;
}