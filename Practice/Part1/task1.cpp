#include <iostream>

int getLengthWithoutTerminator(const char* string) {
    int length = 0;
    while (string[length]) 
        ++length;
    return length;
}
//01234
//12345 -> 5
bool outerLayers(const char* string, int length, int* innerLayerIndex, char* outerLayerSymbol);
bool innerLayer(const char* string, int length, int innerLayerIndex, char outerLayerSymbol);

bool isIcecreamSandwich(const char* string) {
    const int length = getLengthWithoutTerminator(string);
    if (length < 3)
        return false;


    int innerLayerIndex = 0;
    char outerLayerSymbol = '\0';
    const bool sameOuterLayers = outerLayers(string, length, &innerLayerIndex, &outerLayerSymbol);
    std::cout << "innerLayerIndex = " << innerLayerIndex << ' ';
    const bool singleInnerLayer = innerLayer(string, length, innerLayerIndex, outerLayerSymbol);

    return sameOuterLayers && singleInnerLayer;
}
//12345054321
//1100011
//1150511
bool innerLayer(const char* string, int length, int innerLayerIndex, char outerLayerSymbol) {
    
    const char innerLayerSymbol = string[innerLayerIndex];
    
    if (innerLayerSymbol == outerLayerSymbol)
        return false;

    for (int index = innerLayerIndex; index < length - innerLayerIndex; ++index)
        if (string[index] != innerLayerSymbol)
            return false;

    return true;
}
bool outerLayers(const char* string, int length, int* innerLayerIndex, char* outerLayerSymbol) {
    *outerLayerSymbol = string[0];
    for (int index = 0; index < length / 2 + 1; ++index) {
        if (string[index] != string[length - 1 - index])
            return false;

        if (string[index] != *outerLayerSymbol) {
            *innerLayerIndex = index;
            return true;
        }
    }
    // assert(0 && "AAAAARGH!!!!");
    return true;
}

int main() {

    std::cout << " 1: CDC\t\t\t" << (isIcecreamSandwich("CDC") == true) << '\n';
    std::cout << " 2: AAABB\t\t" << (isIcecreamSandwich("AAABB") == false) << '\n';
    std::cout << " 3: AA\t\t\t" << (isIcecreamSandwich("AA") == false) << '\n';


    std::cout << " 4: AABBBAA\t\t" << (isIcecreamSandwich("AABBBAA") == true) << '\n';
    std::cout << " 5: 3&&3\t\t" << (isIcecreamSandwich("3&&3") == true) << '\n';
    std::cout << " 6: yyyyymmmmmmmmyyyyy\t" << (isIcecreamSandwich("yyyyymmmmmmmmyyyyy") == true) << '\n';
    std::cout << " 7: hhhhhhhhmhhhhhhhh\t" << (isIcecreamSandwich("hhhhhhhhmhhhhhhhh") == true) << '\n';

    std::cout << " 8: BBBBB\t\t" << (isIcecreamSandwich("BBBBB") == false) << '\n';
    std::cout << " 9: AAACCCAA\t\t" << (isIcecreamSandwich("AAACCCAA") == false) << '\n';
    std::cout << "10: AACDCAA\t\t" << (isIcecreamSandwich("AACDCAA") == false) << '\n';
    std::cout << "11: A\t\t\t" << (isIcecreamSandwich("A") == false) << '\n';
    std::cout << "12: 1234456\t\t" << (isIcecreamSandwich("1234456") == false) << '\n';
    std::cout << "13: \t\t\t" << (isIcecreamSandwich("") == false) << '\n';
    std::cout << "14: CDDC\t\t" << (isIcecreamSandwich("CDDC") == true) << '\n';
    std::cout << "15: CDDDC\t\t" << (isIcecreamSandwich("CDDDC") == true) << '\n';
    std::cout << "16: CCDDCC\t\t" << (isIcecreamSandwich("CCDDCC") == true) << '\n';
    std::cout << "17: CCCDDCCC\t\t" << (isIcecreamSandwich("CCCDDCCC") == true) << '\n';

}