#include <iostream>
 
class A
{
private:
    int *m_array;
public:
    A(int a) 
    {
        m_array = new int[a];
        std::cout << "A: " << a << '\n';
    }

    ~A() {
        delete[] m_array;
        std::cout << "~A allocated\n";
    }
};
 
class B: public A
{
private:
    int *b_array;
public:
    B(int a, double b)
    : A(a)
    {
        b_array = new int[a];
        std::cout << "B: " << b << '\n';
    }

    ~B() {
        delete[] b_array;
        std::cout << "~B allocated\n";
    }
};

class C: public B
{
private:
    int* c_array;
public:
    C(int a , double b , char c)
    : B(a, b)
    {
        c_array = new int[a];
        std::cout << "C: " << c << '\n';
    }

    ~C() {
        delete[] c_array;
        std::cout << "~C allocated\n";
    }
};
 
int main()
{
    C c(7, 5.4, 'D');
 
    return 0;
}