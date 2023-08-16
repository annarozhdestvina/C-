#include <iostream>

template <class T>
class Pair1 {
private:
    T m_first;
    T m_second;

public:
    Pair1(const T& first, const T& second) : 
        m_first(first), m_second(second) {}

    T& first() {
        return m_first;
    }
    
    const T& first() const {
        return m_first;
    }

    T& second() {
        return m_second;
    }

    const T& second() const {
        return m_second;
    }

    // friend 

};

int main()
{
	Pair1<int> p1(6, 9);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
 
	const Pair1<double> p2(3.4, 7.8);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
 
	return 0;
}