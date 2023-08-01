#include <iostream>

template <class T, int size>

class StaticArray {
private:
    T m_array[size];

public:
    T* getArray();

    T& operator[](int index) {
        return m_array[index];
    }
};

template <class T, int size>
T* StaticArray<T, size>::getArray() {
    return m_array;
}

int main() {
        // Объявляем целочисленный массив из 10 элементов
    StaticArray<int, 10> intArray;
 
    // Заполняем массив значениями
    for (int count=0; count < 10; ++count)
        intArray[count] = count;
 
    // Выводим элементы массива в обратном порядке 
    for (int count=9; count >= 0; --count)
        std::cout << intArray[count] << " ";
    std::cout << '\n';
 
    // Объявляем массив типа double из 5 элементов
    StaticArray<double, 5> doubleArray;
 
    // Заполняем массив значениями
    for (int count=0; count < 5; ++count)
        doubleArray[count] = 5.5 + 0.1*count;
 
    // Выводим элементы массива 
    for (int count=0; count < 5; ++count)
        std::cout << doubleArray[count] << ' ';
 
    return 0;
}