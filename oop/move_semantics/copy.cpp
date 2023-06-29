#include <iostream>
// #include <scassed>

class Array {
private:
    int number_;
    double *data_;
    int id_;
    static int s_counter;

public:
    Array(int number = 10) : number_(number), data_(new double[number]), id_(s_counter++) {
        std::cout << "Array created # " << id_ << "\n";
    }

    Array(const Array& other) : number_(other.number_), data_(new double[other.number_]), id_(s_counter++) {
        std::cout << "Array copy created # " << id_ << "\n";
        for(int i = 0; i < number_; i++) 
            data_[i] =other.data_[i];
    }

    double& operator[] (int index) {
        assert(0 <= index && index < number_);
        return data_[index];
    }

    void Print() const {
        std::cout << "Array # " << id_ << '\n';
        for(int i = 0; i < number_; i++) 
        {
            // std::cout << &data_[i] << '\n';
            // std::cout << data_ + i << '\n';

            std::cout << *(data_ + i) << ' ';
        }
        std::cout << '\n';
    }

    ~Array() {
        number_ = 0;
        delete[] data_;
        data_ = nullptr;
        std::cout << "~Array deleted# " << id_ <<"\n";
    }
};

int Array::s_counter = 1;

int main() {
    Array* arr = new Array[3];
    delete[] arr;
    Array m(7);
    std::cout << "m" << '\n';
    m.Print();
    std::cout << m[6] << '\n';

    Array m2;
    m2[6] = 7.76;
    std::cout << "m2" << '\n';
    m2.Print();

    Array shallow_copy(m2);
    shallow_copy[5] = 44.7;
    shallow_copy.Print();


    return 0;
}