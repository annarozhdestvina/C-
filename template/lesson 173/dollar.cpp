#include <iostream>

class Dollar{
private:
    int m_dollar;

public:
    Dollar(int dollar) : m_dollar(dollar) {}

    friend bool operator>(const Dollar &d1, const Dollar &d2) {
        return (d1.m_dollar > d2.m_dollar);
    }

    friend std::ostream& operator<<(std::ostream &out, const Dollar &d1) {
        out << "dollar = " << d1.m_dollar << '\n';
        return out;
    }

    Dollar& operator+=(const Dollar d1) {
        m_dollar = m_dollar + d1.m_dollar;
        return *this;
    }

    Dollar& operator/=(const Dollar d) {
        m_dollar = m_dollar / d.m_dollar;
        return *this;
    }
};

template <class T>
T average(T *array, int length) {
    T sum = 0;
    for (int count=0; count < length; ++count)
        sum += array[count];
 
    sum /= length;
    return sum;
}

int main()
{
    Dollar array3[] = { Dollar(7), Dollar(12), Dollar(18), Dollar(15) };
    std::cout << average(array3, 4) << '\n';
 
    return 0;
}