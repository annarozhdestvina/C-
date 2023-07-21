#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        
    }
};

int main() {
    std::vector<int> array;
    std::vector<int> array2;

   int n;
   std::cout << "input n:";
   std::cin >> n;
   array.resize(n);
   for(int i =0; i < n; i++)    
    std::cin >> array[i];

    for(auto const &element : array)
        std::cout << element << ' ';
    std::cout << '\n';

    int k = 0;
    int counter = 1;
    std::vector<int> solution;

    for(int i =0; i < array.size(); i++) {
        // solution[0] = array[0];
        if(array[i] != array[i+1]) {
            k++;
            counter++;
            solution.resize(i+1);
            solution[i] = array[i];
        } else {
            // solution.resize(counter);
            // solution[i+1] = array[i];

        } 
    }
    int g = 0;
    int l =0;

    for(int i =0; i < solution.size(); i++) {
        if(solution[i] !=0) {
            g++;
            array2.resize(g);
            array2[l] = solution[i];
            l++;
            std::cout << "array2: " <<array2[i] << ' ';
        }
    }
    std::cout << '\n';

    for(auto const &element : solution)
        std::cout << element << ' ';
    std::cout <<'\n';

    for(auto const &element : array2)
        std::cout << element << ' ';
    std::cout << '\n';

    return 0;
}