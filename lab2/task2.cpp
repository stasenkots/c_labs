//
// Created by kotozavrina on 08/10/2021.
//

/// 1.Вводяться 3 числа.Найти максимум среди них
#include <iostream>

int main() {
    double a;
    double b;
    double c;
    std::cin >> a >> b >> c;

    if ((a >= b) && (a >= c)) {
        std::cout << "Digit " << a << " is the maximum number";
    } else if (b >= c && b >= a) {
        std::cout << "Digit " << b << " is the maximum number";
    } else if (c >= a && c >= b) {
        std::cout << "Digit " << c << " is maximum number";
    }

    double mmax2 = a > b ? a : b;
    double mmax1 = c > mmax2 ? c : mmax2;
    std::cout << mmax1 << std::endl;

}