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

class S21Matrix {
    private:
        // Attributes
        int rows_, cols_;         // Rows and columns
        double **matrix_;         // Pointer to the memory where the matrix is allocated

    public:
        //S21Matrix();              // Default constructor
        //~S21Matrix();             // Destructor

        void SumMatrix(const S21Matrix& other); 
        // Other methods..
        S21Matrix(int rows, int columns): rows_(rows), cols_(columns) {
            //allocation(rows_, cols_);
            double *pointer = new double[rows_ * cols_ *sizeof(double)];
            double **matrix_local = new double*[rows_ * sizeof(double*)];

            for(int i = 0; i < rows; i++) {
                *(matrix_local + i) = pointer + i*cols_;
            }
            matrix_ = matrix_local;
        }

        void fill() {
            for(int i =0; i < rows_; i++) {
                for(int j =0; j < cols_; j++) {
                    matrix_[i][j] = i+j;
                }
            }
        }

        void print() {
            for(int i =0; i < rows_; i++) {
                for(int j =0; j < cols_; j++) {
                    std::cout<< matrix_[i][j] << ' ';
                }
                std::cout << '\n';
            }
        }

        /*void allocation( double ***matrix, int rows, int columns) {
            double *pointer = new double[rows_ * cols_ *sizeof(double)];
            double **matrix_local = new double*[rows_ * sizeof(double*)];

            for(int i = 0; i < rows; i++) {
                *(matrix_local + i) = pointer + i*cols_;
            }

            *matrix = matrix_local;
        }*/
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


    S21Matrix mat(7, 6);
    mat.fill();
    mat.print();
    return 0;
}