#include <iostream> 
#include <string>

class Something {
private:
    std::string m_string;

public:
    Something(int a) {
        m_string.resize(a);
    }

    Something(const char *string) {
        m_string = string;
    }

    friend std::ostream& operator<<(std::ostream& out, const Something &s);
};

std::ostream& operator<<(std::ostream& out, const Something &s) {
    out << s.m_string;
    return out;
}

int main() {
    Something mystring = 'a';
    std::cout << mystring;

    return 0;
}