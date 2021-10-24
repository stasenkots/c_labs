//
// Created by kotozavrina on 19/10/2021.
//



///Дано 2 числа.Найти НОК и НОД

#include "iostream"

#include <cmath>

// a b
// a - b
// a - b
// b - a
//b % a



int main() {

    int a;
    int b;
    int remainder = 1;

    std::cin >> a >> b;

    int product = a * b;


    if (b > a)
    {
        std::swap(a, b);
    }


    while (b != 0)
    {
        a %= b;
        std::swap(a,b);
    }


    int gcd  = a;
    int lcd = product / gcd;

    std::cout << gcd << std::endl;
    std::cout << lcd << std::endl;


    return 0;
}