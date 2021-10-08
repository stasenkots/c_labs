//
// Created by kotozavrina on 08/10/2021.
//

#include "iostream"

/// 2.Ввести число.Получить целую и дробную часть числа

int main() {
    double n;
    std::cin >> n;
    int int_part = n;
    double frac_part = n - int_part;
    std::cout << int_part << std::endl << frac_part << std::endl;
}