///Написать программу для возведения числа в степень

#include "iostream"

int main() {

    int a;
    int b;

    std::cout << "Enter the number: ";
    std::cin >> a;

    std::cout << "Enter degree:";
    std::cin >> b;

    b -= 1;
    while (b != 0) {
        b--;
        a *= a;

    }
    std::cout << a;
    return 0;
}

//
// Created by kotozavrina on 19/10/2021.
//