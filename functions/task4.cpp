//
// Created by kotozavrina on 12/11/2021.
//

#include "iostream"

/// Вывести все простые числа в интервале 1..n

int main() {
    int endInterval;
    std::cout << "Enter the end of interval: ";
    std::cin >> endInterval;
    for (int num = 1; num <= endInterval; num++) {
        bool isPrimary = true;
        for (int divisor = 2; divisor < num; divisor++) {
            if (num % divisor == 0) {
                isPrimary = false;
                break;
            }
        }
        if (isPrimary) {
            std::cout << num << std::endl;
        }
    }


}
