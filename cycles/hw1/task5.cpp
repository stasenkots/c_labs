//
// Created by kotozavrina on 28/10/2021.
//

#include "iostream"

/// 5.Напишите функцию вычисляющую число в степени(степень >=0)

int main() {

    int num;
    int deg;
    std::cin >> num;
    std::cin >> deg;

    int ans = 1;

    for (int i = 0; i < deg; ++i) {
        ans *= num;
    }

    std::cout << ans;


}