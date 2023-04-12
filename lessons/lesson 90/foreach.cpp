#include <iostream>
#include <vector>
 
int main()
{
    int math[] = { 0, 55, 41, 5, 7, 8, 10, 12, 15, 17, 30, 41 };
    for (auto number : math) // тип number определяется автоматически исходя из типа элементов массива math
       std::cout << number << ' ';
    std::cout << '\n';

    int array[7] = { 10, 8, 6, 5, 4, 3, 1};
    for (auto element: array) 
        std::cout << element << ' ';

    std::cout << '\n';

    for(auto &number: array)
        std::cout << number <<' ';

    std::vector<int> math2 = {0, 1, 4, 5, 7, 20};
    for (const auto &number : math)
        std::cout << number << ' ';
    return 0;
}