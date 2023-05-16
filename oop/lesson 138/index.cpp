#include <iostream>

class IntArray {
private:
    int m_array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

public:
    int& operator[] (const int index);
    const int& operator[] (const int index) const;

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

const int& IntArray::operator[] (const int index) const {
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

    const IntArray conarray;
    std::cout << conarray[2];
}