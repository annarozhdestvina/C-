#include <iostream>

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
        std::cout << "S = " << S  << "\tt = " << t << '\n';

    }



    return 0;
}