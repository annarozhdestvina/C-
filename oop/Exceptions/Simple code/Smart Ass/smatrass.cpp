#include <iostream>

// smart pointer - это объектная оболочка
// может быть классом

template<typename T>
class SmartPointer {
public:
    SmartPointer(T *ptr) {
        this->ptr_ = ptr; 
        std::cout << "pointer created\n";
    }

    ~SmartPointer() {
        delete ptr_;
        std::cout << "pointer deleted\n";
    }

    T& operator*() {
        return *ptr_;
    }

private:
    T* ptr_;
};

int main() {
    // int *ptr = new int(5); // находится в куче

    // std::cout << *ptr <<'\n';
    // delete ptr;  // иначе память закончится

    SmartPointer<int> pointer = new int(5);
}