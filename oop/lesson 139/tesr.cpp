#include <iostream>
#include <string>

class Mystring {
    std::string mystring;

public:
    Mystring(std::string string1 = "") : mystring(string1) {}

    std::string operator()(int index, int length) {
        std::string ret;
        for ( int i = 0; i < length; i++)
            ret += mystring[index + i];
        return ret;
    } 
};


int main()
{
    Mystring string("Hello, world!");
    std::cout << string(7, 6); // начинаем с 7-го символа (индекса) и возвращаем следующие 6 символов
 
    return 0;
}