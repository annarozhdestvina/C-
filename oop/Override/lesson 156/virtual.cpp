#include <iostream>

class Parent {
public:
    virtual ~Parent() {
        std::cout << "~parent\n";
    }
};

class Child : public Parent {
private:
    int *array;
public:
    Child(int len) {
        array = new int[len];
    }

    virtual ~Child() {
        delete[] array;
        std::cout << "~Child\n";
    }
};

int main() {
    Child *child = new Child(7);
    Parent *parent = child;
    delete parent;
}