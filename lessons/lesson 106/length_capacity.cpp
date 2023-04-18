#include <iostream>
#include <vector>

void printStack(const std::vector<int> &stack) {
    for (const auto &element : stack)
        std::cout << element << ' ';
    std::cout << "cap " << stack.capacity() << " length " << stack.size() << '\n';
}

int main() {
    std::vector<int> stack;
    printStack(stack);
    stack.push_back(7); // add element 7
    printStack(stack);

    stack.push_back(4); // add element 7
    printStack(stack);
    stack.push_back(1); // add element 7
    printStack(stack);

    std::cout << "top: " << stack.back() << '\n';

    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);




    //int* array = new int[12] {1, 5, 4, 3, 2, 5};
    std::vector<int> array {0, 3, 4, 2};
    array.resize(6); // устанавливаем длину, равную 6
    std::cout << "The length is: " << array.size() << '\n';
    std::cout << "The capacity is: " << array.capacity() << '\n';
 
    std::vector<int> array2 {0, 3, 4, 2};
    //array.resize(6); // устанавливаем длину, равную 6
    std::cout << "The length is: " << array2.size() << '\n';
    std::cout << "The capacity is: " << array2.capacity() << '\n';
 
    for (auto const &element: array)
        std::cout << element << ' ';
 
    return 0;
}