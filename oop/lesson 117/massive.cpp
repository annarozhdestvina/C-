#include <iostream>

class Values {
private:
    const int m_array[7];

public:
   // Values(): m_array {1, 2, 3, 4, 5, 6} {}

    Values(): m_array {} {}

    void print() {
        for(int i = 0; i < 6; i++)
            std::cout << m_array[i] << ' ';
    }
};

int main() {
    Values array;
    array.print();
}