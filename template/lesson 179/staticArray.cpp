#include <iostream>
#include <cstring>
#include <string.h>

template <class T, int size>
class StaticArray {
private:
    T m_array[size];

public:
    T* getArray() {
        return m_array;
    }

    T& operator[](int index) {
        assert(index >= 0 && index < size && "index is unoppropriate");
        return m_array[index];
    }
};

template <typename T, int size>
void print(StaticArray<T, size> &array) {
    for (int i = 0; i < size; i++) 
        std::cout << array[i] << ' ';
    std::cout << '\n';
}


int main() {
    StaticArray<int, 5> int5;
    int5[0] = 0;
    int5[1] = 7;
    int5[2] = 6;
    int5[3] = 55;
    int5[4] = 90;

    print(int5);


    char text[] = "Print this!";
    char dest[50];
    stpcpy(dest, text);
    std::cout << dest;


    StaticArray<char, 14> char14;
    strncpy(char14.getArray(), "Hello, World!", 14);
    print(char14);

    return 0;
}