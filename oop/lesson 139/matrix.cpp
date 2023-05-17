#include <iostream>
#include <cassert>

class Matrix {
private:
    double data[5][5];

public:
    Matrix() {
        for (int row = 0; row < 5; row++) 
            for(int col = 0; col < 5; col++) 
                data[row][col] = 0.0;   
    }
    double& operator()(int row, int col);
    const double& operator()(int row, int col) const;

    void print();
};

void Matrix::print() {
    for (int row = 0; row < 5; row++) {
        for(int col = 0; col < 5; col++) {
            std::cout << data[row][col] << ' ';
        }
        std::cout <<'\n';
    }
    
}

double& Matrix::operator()(int row, int col) {
    assert(col >= 0 && col < 5);
    assert(row >= 0 && row < 5);

    return data[row][col];
}

const double& Matrix::operator()(int row, int col) const {
    assert(col >= 0 && col < 5);
    assert(row >= 0 && row < 5);

    return data[row][col];
}

int main() {
    Matrix matrix;
    matrix(2, 3) = 3.6;
    matrix.print();
    
}