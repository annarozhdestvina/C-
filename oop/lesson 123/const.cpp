#include <iostream>

class Anything {
private:
    int m_value;
public:
    Anything(): m_value(0) {}
    void setValue(int value) {
        m_value = value;
    }
    int getValue() {
        return m_value;
    }
};

int main() {
    Anything anything;
    anything.setValue(8);
    std::cout << anything.getValue();
}