#ifndef ARRAYINT_H
#define ARRAYINT_H

#include <cassert>
#include <iostream>
 
class ArrayInt {
private:
    int m_length;
    int *m_data;

public:
    ArrayInt() : m_length(0), m_data(nullptr) {}

    ArrayInt(int length) : m_length(length) {
        assert(length >= 0);

        if(length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }

    ~ArrayInt() {
        delete[] m_data;
    }

    void Print() {
        for(int i = 0; i < getLength(); i++)
            std::cout << *(m_data + i) << ' ';
        std::cout << '\n';
    }

    void erase() {      //очисткa массива и сбрасывание его длины на 0
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    // перегрузим оператор индексации []
    int& operator[](const int index) {
        assert(index >= 0 && "index is 0 or negative");
        assert(index < m_length && "index < length");
        return m_data[index];
    }

    int getLength() {
        return m_length;
    }

    void reallocate(int newLength) { //изменяет размер массива
        erase();                    //Процесс быстрый

        if(newLength <= 0)
            return;
        
        m_data = new int[newLength];
        m_length = newLength;
    }

    void resize(int newLength) {
        if(newLength == m_length)
            return;
        
        if(newLength <= 0){
            erase();
            return;
        }

        int* data = new int [newLength];

        if(m_length > 0) {
            int elementToCopy = (newLength > m_length) ? m_length : newLength;

            for(int i = 0; i < elementToCopy; i++) 
                data[i] = m_data[i];

            delete[] m_data;
            m_data = data;
            m_length = newLength;
        }
    }

    void insertBefore(int value, int index) {
        assert(index >= 0 && index <= m_length);

        int* data = new int[m_length + 1];
        for(int before = 0; before < index; before++) 
            data[before] = m_data[before];

        data[index] = value;
        
        for(int after = index; after < m_length; after++) 
            data[after - 1] = m_data[after];

        delete[] m_data;
        m_data = data;
        ++m_length;
    }

    void remove(int index) {
        assert(index >= 0 && index < m_length);

        if(m_length == 1) {
            erase();
            return;
        }

        int *data = new int[m_length - 1];
        for(int before = 0; before < index; before++) 
            data[before] = m_data[before];
        
        for(int after = index + 1; after < m_length; after++) 
            data[after - 1] = m_data[after];

        delete[] m_data;
        m_data = data;
        --m_length;
    }

    void insertAtBegin(int value) {
        insertBefore(value, 0);
    }

    void insertAtEnd(int value) {
        insertBefore(value, m_length);
    }
};
 
#endif