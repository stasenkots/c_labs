//
// Created by kotozavrina on 13/10/2021.
//


/// .Вводятся 2 целых числа.Посчитать количество четных чисел между ними (без использования циклов)

#include <iostream>
#include <cmath>

int main() {
    int a;
    int b;

    std::cin >> a >> b;

    if (abs(a) % 2 == 1) {
        a++;
    }

    if (abs(b) % 2 == 1) {
        b -= 1;
    }

    int cnt_even = (b - a) / 2 + 1;
    std::cout << cnt_even;

}
