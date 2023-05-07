#include <iostream>

class Array {
private:
    int length_;
    int* array_;

public:
    Array(int length): length_(length) {
        array_ = new int[length_];
        std::cout << "arrr\n"; 
    }
    
    ~Array() {
        delete []array_;
        length_ = 0;
        std::cout << "~end\n"; 
    }

    void fill() {
        for(int i =0; i < length_; i++) {
            array_[i] = i+2;
        }
    }

    void print() {
        for(int i =0; i < length_; i++) {
            std::cout << array_[i] << ' ';
        }
        std::cout << '\n';
    }

};

void myfun() {
    // Array *b = new Array(6);
     Array *a= new Array(5);
    // Array *a= Array b(5);
    // Array a(8);
    a->fill();
    a->print();
}

int main() {
    std::cout << "before myfun\n";
    myfun();
    std::cout << "after myfun\n";
    return 0;
}