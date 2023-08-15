#include <iostream>
 
template <class T>
class Repository {
private:
    T m_value;
public:
    Repository(T value) {
         m_value = value;
    }
 
    ~Repository() {}
 
    void print() {
        std::cout << m_value << '\n';
    }
};

template <typename T>
class Repository<T*> {
private:
    T* m_value;

public:
    Repository(T* value) {
        m_value = new T(*value);
    }

    ~Repository() {
        delete m_value;
    }

    void print() {
        std::cout << *m_value << '\n';
    }
};

int main() {
    Repository<int> myint(8);
    myint.print();

    int x = 9;
    Repository<int*> myintptr(&x);

    x = 10;
    myintptr.print();



    return 0;
}