//
// Created by kotozavrina on 08/10/2021.
//
#include "iostream"
#include "cmath"

/// 1. Ввести целое число.Получить последнюю цифру числа

int main() {
    int n;
    std::cin >> n;
    std::cout << abs(n) % 10;
}