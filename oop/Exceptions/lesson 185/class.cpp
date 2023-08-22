#include <iostream>

class ArrayException {
private:
    std::string m_error;

public:
    ArrayException(std::string error) : m_error(error) {}

    const char* getException() {
        return m_error.c_str();
    }
};

class ArrayInt {
private:
    int m_array[4];

public:
    ArrayInt() {}

    int getLength() {
        return 4;
    }

    int& operator[](const int index) {
        if(index < 0 || index >= getLength())
            throw ArrayException("index is invalid!!!");
        return m_array[index];
    }
};


int main() {
    ArrayInt array1;

    try {
        int value = array1[0];
    }
    catch(ArrayException &exception) {
        std::cerr << "an error " << exception.getException();
    }


    try {
        int value = array1[7];
    }
    catch(ArrayException &exception) {
        std::cerr << "an error: " << exception.getException();
    }
}