#include <iostream>

class Parent {
public:
    Parent() {
        std::cout << "Parent has been created\n";
    }

    virtual ~Parent() {
        std::cout << "Parent Destructor\n";
    }
};

class Child : public Parent {
public:
    Child() {
        std::cout << "Child has been created\n";
    }

    ~Child() override {   // чтобы компилятор смотрел точно ли мы переопредили тот самый деструктор
        std::cout << "Child Destructor\n";
    }
};

int main() {
    // Child d1;

    // Child *child_ptr = new Child;
    // delete child_ptr;

    Parent *childptr = new Child;
    delete childptr;


    return 0;
}