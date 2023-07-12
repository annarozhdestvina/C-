#include <iostream>

class IntArray {
private:
    int m_length;
    int *m_data;
public:
    IntArray(int length) : m_length(length) {
        assert (length > 0 && "array length < 0");
        m_data = new int[length] { 0 }; // заполнили нулями
    }

    IntArray(const IntArray &array) : m_length(array.m_length) {
        m_data = new int [m_length];

        for(int i =0; i < array.m_length; i++) 
            m_data[i] = array.m_data[i];
    }

    ~IntArray() {
        delete[] m_data;
    }

    friend std::ostream& operator<< (std::ostream &out, const IntArray &array) {
        for(int i = 0; i < array.m_length; i++)
            out << array.m_data[i] << ' ';
        return out;
    } 

    int& operator[] (const int index) {
        assert (index >= 0);
        assert (index < m_length);
        return m_data[index];
    }

    IntArray& operator=(const IntArray &array) {
        if(this == &array)
            return *this;
        
        delete[] m_data;
        m_length = array.m_length;
        m_data = new int[m_length];

        for(int i = 0; i <array.m_length; i++)
            m_data[i] = array.m_data[i];

        return *this;
    }
};

IntArray fillArray()
{
	IntArray a(6);
	a[0] = 6;
	a[1] = 7;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
    a[5] = 8;
 
	return a;
}

int main() {

    IntArray a = fillArray();
	std::cout << a << '\n';
 
	IntArray b(1);
	a = a;
	b = a;
 
	std::cout << b << '\n';


    return 0;
}