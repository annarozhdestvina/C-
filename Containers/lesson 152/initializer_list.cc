#include <iostream>
#include <cassert>
#include <initializer_list>
 
class ArrayInt
{
private:
    int m_length;
    int *m_data;
 
public:
    ArrayInt():
        m_length(0), m_data(nullptr) {}
 
    ArrayInt(int length): m_length(length) {
        m_data = new int[length];
    }

    ArrayInt(const std::initializer_list<int> &list) : ArrayInt(list.size()) {
        int count = 0;
        for(auto &element : list){
            m_data[count] = element;
            ++count;
        }
    }
 
    ~ArrayInt() {
        delete[] m_data;
        // Нам не нужно здесь присваивать значение null для m_data или выполнять m_length = 0, так как объект будет уничтожен сразу же после выполнения этой функции
    }

    void Print() {
    for (int count=0; count < m_length; ++count)
		std::cout << m_data[count] << ' ';
    std::cout << '\n';
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
	ArrayInt array {7, 4, 3, 5, 4, 3};
    array.Print();
	
	return 0;
}