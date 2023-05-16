#include <iostream>

class IntArray {
private:
    int m_array[10];

public:
    int& operator[] (const int index);

    void setItem(int index, int value) {
        m_array[index] = value;
    }

    int getItem(int index) {
        return m_array[index];
    }
};

int& IntArray::operator[] (const int index) {
    return m_array[index];
}

int main() 
{
    IntArray array;
    array.setItem(4, 5);
    std::cout << array.getItem(4) << '\n';

    IntArray array2;
    array2[4] = 6;
    std::cout << array2[4] << std::endl;
}