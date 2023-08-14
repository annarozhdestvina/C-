#include <iostream>

template <class T, int size>
class StaticArrayBase {
protected:
    T m_array[size];

public:
    T* getArray() {
        return m_array;
    }

    T& operator[](int index) {
        assert(index >= 0 && index < size && "unoppropriate index");
        return m_array[index];
    }

    virtual void print() {
        for(int i = 0; i < size; i++)
            std::cout << m_array[i] << ' ';
        std::cout << '\n';
    }
};

template <class T, int size>
class StaticArray : public StaticArrayBase<T, size> {
public:
    StaticArray() {}
};

template <int size>
class StaticArray<double, size> : public StaticArrayBase<double, size> {
public:
    virtual void print() override {
        for(int i = 0; i < size; i++) 
            std::cout << std::scientific << this->m_array[i] << ' ';
        std::cout << '\n';
    }
};

int main()
{
	// Объявляем целочисленный массив длиной 5
	StaticArray<int, 5> intArray;
 
	// Заполняем его, а затем выводим
	for (int count = 0; count < 5; ++count)
		intArray[count] = count;
	intArray.print();
	
	// Объявляем массив типа double длиной 4
	StaticArray<double, 4> doubleArray;
 
	// Заполняем его, а затем выводим
	for (int count = 0; count < 4; ++count)
		doubleArray[count] = (4. + 0.1*count);
	doubleArray.print();
 
	return 0;
}