#include <iostream>
#include <vector>

class Solution {
    private:
        std::vector<int> solution;
        int m_counter;
public:
    int removeDuplicates(std::vector<int>& nums) {
        int k = 0;
        int counter = 0;
        std::vector<int> solution1;
        int n = nums.size();
        solution1.reserve(n);
    for(int i =0; i < nums.size(); i++) {
        if(nums[i] != nums[i+1]) {
            k++;
            solution1.push_back(nums[i]);
            counter++;
        }
    }
    nums = std::move(solution1);
    solution = nums;
    m_counter = k;

    return k;
    }

    void Print() {
        std::cout << "my solution is: \n";
         for(auto const &element : solution)
        std::cout << element << ' ';
    std::cout <<'\n';
    std::cout << "k = " << m_counter;
    }
};

int main() {
    Solution Ass;
    std::vector<int> numbers {1, 1, 1, 2, 3};
    Ass.removeDuplicates(numbers);

    Ass.Print();

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
    int counter = 0;
    std::vector<int> solution;
    solution.reserve(n);


     for(int i =0; i < array.size(); i++) {
        if(array[i] != array[i+1]) {
            k++;
            solution.push_back(array[i]);
            counter++;
        }
    }

    // for(int i =0; i < array.size(); i++) {
    //     // solution[0] = array[0];
    //     if(array[i] != array[i+1]) {
    //         k++;
    //         solution.resize(k);
    //         solution[counter] = array[i];
    //         counter++;
    //     }
    // }

    // int g = 0;
    // int l =0;

    // for(int i =0; i < solution.size(); i++) {
    //     if(solution[i] !=0) {
    //         g++;
    //         array2.resize(g);
    //         array2[l] = solution[i];
    //         l++;
    //         std::cout << "array2: " <<array2[i] << ' ';
    //     }
    // }
    // std::cout << '\n';

    for(auto const &element : solution)
        std::cout << element << ' ';
    std::cout <<'\n';

    // for(auto const &element : array2)
    //     std::cout << element << ' ';
    // std::cout << '\n';

    return 0;
}