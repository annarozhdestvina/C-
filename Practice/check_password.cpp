#include <iostream>
#include <string>

bool IsGood(const std::string &myString) {
    if(myString.size() < 8 || myString.size() > 14) {
        return false;
    }
    
    int upper = 0;
    int lower = 0;
    int digit = 0;
    int other = 0;

    for(char c : myString) {
        if(c < 33 || c > 126)
            return false;
        if (c > 64 && c < 91) {
            upper = 1;
        }
        if (c > 96 && c < 123) {
            lower = 1;
        }

        if (c > 47 && c < 58) {
            digit = 1;
        } else 
            other = 1;
    }
    return (upper + lower + digit + other) >= 3;
}


int main() {
    std::string myString = "DFGTR43a";

    if (IsGood(myString)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}