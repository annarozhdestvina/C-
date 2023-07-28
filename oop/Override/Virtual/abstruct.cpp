#include <iostream>

class Parent {
public:
    const char* sayHi() {
        return "Hi";
    }

    virtual const char* getName() {
        return "Parent";
    }

    virtual int getValue() = 0; //чистая виртуальная функция
};

int main() {
    //Parent parent; //not compile
   // parent.getValue();    ??
}