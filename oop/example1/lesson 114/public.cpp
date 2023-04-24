#include <iostream>

class DataClass {
    int m_day;
    int m_month;
    int m_year;
public:
    void setData(int day, int month, int year) {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    void print() {
        std::cout <<m_day<<'/'<<m_month<<'/'<<m_year;
    }
};

int main() {
    DataClass date;

    date.setData(03, 55, 2023);
    date.print();


    return 0;
}