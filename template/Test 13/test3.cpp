#include <iostream>

template <class T1, class T2>
class Pair {
private:
    T1 m_first;
    T2 m_second;

public:
    Pair(const T1& first, const T2& second) :
        m_first(first), m_second(second) {}

    T1& first() {
        return m_first;
    }

    const T1& first() const {
        return m_first;
    }

    T2& second() {
        return m_second;
    }

    const T2& second() const {
        return m_second;
    }
};

template<class T2>
class StringValuePair : public Pair<std::string, T2 {
public:
    StringValuePair(const std::string& key, const T2& value) :
    Pair<std::string, T2>(key, value) {}
};



int main()
{
	Pair<int, double> p1(6, 7.8);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
 
	const Pair<double, int> p2(3.4, 5);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    StringValuePair<int> svp("Amazing", 7);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
 
 
	return 0;
}