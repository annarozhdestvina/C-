#include <iostream>

class Average {
private:
    int32_t m_sum = 0;
    int8_t m_count_index = 0;

public:
    Average () {};

    Average(int sum) : m_sum{sum} {};

    friend std::ostream& operator<< (std::ostream &out, const Average &average) {
        out << static_cast<double>(average.m_sum) / average.m_count_index;
        return out;
    }

    Average& operator+=(int sum) {
        m_sum += sum;
        ++m_count_index;

        return *this;
    }

};



int main()
{
	Average avg;
	
	avg += 5;
	std::cout << avg << '\n'; // 5 / 1 = 5
	
	avg += 9;
	std::cout << avg << '\n'; // (5 + 9) / 2 = 7
 
	avg += 19;
	std::cout << avg << '\n'; // (5 + 9 + 19) / 3 = 11
 
	avg += -9;
	std::cout << avg << '\n'; // (5 + 9 + 19 - 9) / 4 = 6
 
	(avg += 7) += 11; // выполнение цепочки операций
	std::cout << avg << '\n'; // (5 + 9 + 19 - 9 + 7 + 11) / 6 = 7
 
	Average copy = avg;
	std::cout << copy << '\n';
 
	return 0;
}