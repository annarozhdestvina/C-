#include <iostream>

int main() {
    char ch1(97);
    char ch2('a');
    char ch3(41);
    char ch4('5');

    std::cout << ch3 << '\n';
    std::cout << ch4 << '\n';
    std::cout << ch1 << '\n';
    std::cout << 'b' << '\n';

    char ch(97);
    //int i(ch);
    std::cout << ch << '\n';
    std::cout << static_cast<int>(ch) << '\n';
    std::cout << ch << '\n';

    std::cout << "input a keyboard character: " << '\n';
    char ch5;
    std::cin >> ch5;
    std::cout <<"has ANCII code " << static_cast<int>(ch5) << '\n';

    std::cout << "\"This is quoted text\"\n";
    std::cout << "This is backslash \\" << '\n';
    std::cout << "6F in hex is char \'\x6F\'" << '\n';


    return 0;
}