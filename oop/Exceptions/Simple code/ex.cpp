#include <iostream>
#include <string>

int main() {
    std::string path = "file.txt";
    ifstream fin;
    fin.exceptions(ifstream::badbit | ifstream::failbit);

    try {
        std::cout << "open file\n"; 
        fin.open(path);
    }
    catch(const ifsteam::failure & e) {
        std::cerr << e.what() << '\n';
    }
    
}