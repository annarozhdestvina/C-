#include <iostream>

enum Type {
    INT,
    DOUBLE,
    CSTRING
};

void printValue (void* ptr, Type myType) {
    switch (myType) {
        case INT:
            std::cout << *static_cast<int*>(ptr) << '\n';
            break;
        case DOUBLE:
            std::cout << *static_cast<double*>(ptr) << '\n';
            break;
        case CSTRING:
            std::cout << static_cast<char*>(ptr) << '\n';
            break;
    }
}

int main() {
    int nValue = 7;
    double dValue =9.3;
    char szValue[] = "Azzaza";
    printValue(&nValue, INT); 
    printValue(&dValue, DOUBLE); 
    printValue(&szValue, CSTRING); 

    int value = 7;
    int *ptr = &value;
    std::cout << *ptr << std::endl;

    int **prtprt = &ptr;
    std::cout << **prtprt << std::endl;

    int **prtprt1 = nullptr;

    int **array = new int*[20];
    for(int i = 0; i < 15; i++) {
        array[i] = new int[7];
    }

    for(int i = 0; i < 15; i++) {
        delete[] array[i];
    }
    delete[] array;

    auto array2 = new int[15][7];

    return 0;
}