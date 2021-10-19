//
// Created by kotozavrina on 08/10/2021.
//

#include "iostream"

/// 2.Ввести число.Получить целую и дробную часть числа

int main() {
    double n;
    std::cin >> n;
    //12.23
    int int_part = n;//12
    double frac_part = n - int_part;//0.23
    std::cout << int_part << std::endl << frac_part << std::endl;
}