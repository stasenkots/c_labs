//
// Created by kotozavrina on 28/10/2021.
//

#include "iostream"

/// 3.Напишите функцию вычисляющую факториал числа(число вводиться)


int main() {

    int N;
    std::cin >> N;
    long long ans = 1;
    for (int i = 1; i <= N; ++i) {
        ans *= i;
    }

    std::cout << ans << std::endl;


}