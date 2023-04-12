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
    std::cout << '\n';

    std::string enter;
    int i =0;
    int j=0;
    const std::string names[] = {"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};
    std::cout << "enter a name: \n";
    std::getline(std::cin, enter);
    for (auto picked: names) 
        if(enter == picked) {
            i++;
        } else {
            j++;
        }

    if (i) {
        std::cout << enter << " was found\n";
        } else {
        std::cout << enter << " was not found\n"; 
    }
        //std::cout << picked << ' ';
    return 0;
}