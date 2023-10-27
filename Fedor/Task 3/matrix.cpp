#include <iostream>



int find_min(int** matrix, int rows, int cols) {
    int min = matrix[0][0];
    for(int i = 0; i < rows; i++) 
        for(int j = 0; j < cols; j++) 
            if(matrix[i][j] < min)
                min = matrix[i][j];
    return min;
}

int find_max(int** matrix, int rows, int cols) {
    int max = matrix[0][0];
    for(int i = 0; i < rows; i++) 
        for(int j = 0; j < cols; j++) 
            if(matrix[i][j] > max)
                max = matrix[i][j];
    
    return max;
}

void print_matrix(int** matrix, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) 
            std::cout << matrix[i][j] << '\t';
        std::cout << '\n';
    }
}

int main() {
    int matrix[5][4];

    int **p = matrix;


    int k = 0;
    for(int i = 0; i < 5; i++) 
        for(int j = 0; j < 4; j++) 
            matrix[i][j] = ++k;
        

    print_matrix(reinterpret_cast<int**>(matrix), 5, 4);
        
    std::cout << '\n';
    

    int min = find_min(reinterpret_cast<int**>(matrix), 5, 4);

    int max = find_max(reinterpret_cast<int**>(matrix), 5, 4);

    std::cout << "min = " << min <<'\n';
    std::cout << "max = " << max <<'\n';
}