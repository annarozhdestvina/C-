#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "A\n";
    }
};
 
class B: public A
{
public:
    B()
    {
        std::cout << "B\n";
    }
};

class C: public B {
public:
    C() {
        std::cout << "C\n";
    }
};

class D: public C {
public:
    D() {
        std::cout << "D\n";
    }
};

int main() {
    D cD;
}
 