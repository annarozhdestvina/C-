#include <iostream>

static int tabs = 0;

struct Branch {
    Branch* left;
    Branch* right;
    int _data;
};

// функция внесения данных
void Add(int data, Branch*& branch) {
    if(!branch) {
        branch = new Branch;
        branch->left = 0;
        branch->right = 0;
        branch->_data = data;
        return;
    } else if(branch->_data > data) 
        Add(data, branch->left);
    else
        Add(data, branch->right);
}

void print(Branch* branch) {
    if(!branch)
        return;

    tabs += 5;

    print(branch->left);
    for(int i = 0; i < tabs; ++i)
        std::cout << ' ';
    std::cout << branch->_data << '\n';

    print(branch->right);
    tabs -= 5;
    return;
}

int pramoi_obxod_SUM(Branch*& branch) {
    if(!branch)
        return 0;
    static int sum = 0;
    sum += branch->_data;
    pramoi_obxod_SUM(branch->left);
    pramoi_obxod_SUM(branch->right);

    return sum;
}

int main() {
    Branch* b1 = nullptr;
    Add(5, b1);
    Add(7, b1);
    Add(3, b1);

    print(b1);
    std::cout << "\n SUM = ";

    std::cout << pramoi_obxod_SUM(b1);

    return 0;
}