//
// Created by kotozavrina on 08/10/2021.
//

/// 1.Вводяться длины сторон треугольника,проверить существует ли такой треугольник

#include <iostream>

int main() {
    double a;
    double b;
    double c;
    std::cin >> a >> b >> c;
    if (a + b <= c) {
        std::cout << "Not exist";
    } else if (b + c <= a) {
        std::cout << "Not exist";
    } else if (a + c <= b) {
        std::cout << "Not exist";
    } else {
        std::cout << "exist";
    }
    std::cout << "win";

    if (a + b > c && b + c > a && a + c > b) {
        std::cout << "exist";
    } else {
        std::cout << "Not exit";
    }

}