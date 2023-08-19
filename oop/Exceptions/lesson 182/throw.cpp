#include <iostream>
#include <string>

int main() {
    try {
        throw -1;
    }

    catch(int a) {
        std::cerr << "we caghtan int: " << a <<'\n';
    }
    catch(double) {
        std::cerr << "we caght a double: \n";
    }
    catch (const std::string &str) {
        std::cerr << "We caught an exception of type std::string" << '\n';
    }
 
    std::cout << "Continuing our way!\n";
 
    return 0;
}