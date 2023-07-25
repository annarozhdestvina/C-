#include <iostream>
#include <string>
#include <vector>

void convertToASCII(std::string letter)
{
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i);
        // if (int(x) < 33 && int(x) > 126)
        std::cout << int(x) << std::endl;
    }
}

int main() {
    std::string myString;
    std::getline(std::cin, myString);

    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;

    if(myString.size() < 8 || myString.size() > 14) {
        std::cout << "NO";
    } else if (myString.size() > 8 || myString.size() < 14) {

    for (int i = 0; i < static_cast<int>(myString.length()); i ++) {
        char x = myString.at(i);
        int b = int(x);
        if (b >= 0 && b < 32) {
            std::cout << "NO";
            break;
        }
        if (b > 100 && b < 133) {
            counter1++;
        }
        if (b > 140 && b < 173) {
            counter2++;
        }
        if ((b > 40 && b < 101) || (b > 172 && b < 177)) {
            counter3++;
        }

        // if(counter < 2) {
        //     std::cout <<"NO";
        // } else {
        //     std::cout << "YES";
        // }
    }
    } else if(counter1 > 0 && counter2 > 0 && counter3 > 0) {
            std::cout <<"YES";
        } else {
            std::cout << "NO";
        }

    // for (int i = 0; i < myString.length(); i ++) {
    //     char x = myString.at(i);
    //     int b = int(x);
    //     if (b > 100 && b < 133) {
    //         counter++;
    //     }
    //     if (b > 140 && b < 173) {
    //         counter++;
    //     }
    //     if ((b > 40 && b < 101) || (b > 172 && b < 177)) {
    //         counter++;
    //     }

    //     if(counter < 2)
    //     std::cout <<"NO";
    // }
    // convertToASCII(myString);
    
    // std::cout << myString;
    return 0;
}