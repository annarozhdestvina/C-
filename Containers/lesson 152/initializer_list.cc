#include <iostream>
#include <cassert> // для assert()
 
class ArrayInt
{
private:
    int m_length;
    int *m_data;
 
public:
    ArrayInt():
        m_length(0), m_data(nullptr)
    {
    }
 
    ArrayInt(int length):
        m_length(length)
    {
        m_data = new int[length];
    }
 
    ~ArrayInt()
    {
        delete[] m_data;
        // Нам не нужно здесь присваивать значение null для m_data или выполнять m_length = 0, так как объект будет уничтожен сразу же после выполнения этой функции
    }
 
    int& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }
 
    int getLength() { return m_length; }
};

int main()
{
	ArrayInt array(7);
	array[0] = 7;
	array[1] = 6;
	array[2] = 5;
	array[3] = 4;
	array[4] = 3;
	array[5] = 2;
	array[6] = 1;
 
	for (int count=0; count < 7; ++count)
		std::cout << array[count] << ' ';
 
	return 0;
}