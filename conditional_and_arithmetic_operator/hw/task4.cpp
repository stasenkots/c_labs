//
// Created by kotozavrina on 13/10/2021.
//

/// Вводятся 3 числа.Вывести их в порядке возрастания

#include <iostream>

int main() {
    double a;
    double b;
    double c;

    std::cin >> a >> b >> c;

    double max2 = a > b ? a : b;
    double max = c > max2 ? c : max2;

    double min2 = a < b ? a : b;
    double min = c < min2 ? c : min2;

    double avg = a + b + c - min - max;

    std::cout << min << std::endl << avg << std::endl << max << std::endl;
}
