#include <iostream>
#include <iomanip>

int main() {
    const double g =9.8;
    const double v0 = 0.0;

    std::cout << "input the heigth of bulding in  meters" << '\n';
    double h =0;
    std::cin >> h;

    for (int t =0; t < 6; t ++) {
        double S = h - g * t *t /2;
        if (S < 0)
        break;
        std::cout << "S = " << S << std::setw(15) << "\tt = " << t << '\n';

    }

    // std::cout << "1" << "\tt = " << 555 << '\n';
    // std::cout << "12" << "\tt = " << 555 << '\n';
    // std::cout << "123" << "\tt = " << 555 << '\n';
    // std::cout << "1234" << "\tt = " << 555 << '\n';
    // std::cout << "12345" << "\tt = " << 555 << '\n';
    // std::cout << "123456" << "\tt = " << 555 << '\n';
    // std::cout << "1234567" << "\tt = " << 555 << '\n';
    // std::cout << "12345678" << "\tt = " << 555 << '\n';
    // std::cout << "123456789" << "\tt = " << 555 << '\n';
    // std::cout << "1234567890" << "\tt = " << 555 << '\n';
    // std::cout << "12345678901" << "\tt = " << 555 << '\n';
    // std::cout << "123456789012" << "\tt = " << 555 << '\n';
    // std::cout << "1234567890123" << "\tt = " << 555 << '\n';
    // std::cout << "12345678901234" << "\tt = " << 555 << '\n';
    // std::cout << "123456789012345" << "\tt = " << 555 << '\n';
    // std::cout << "1234567890123456" << "\tt = " << 555 << '\n';


    return 0;
}