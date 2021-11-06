//
// Created by kotozavrina on 04/11/2021.
//


#include "iostream"

///Написать программу, которая определяет максимальное число из введенной с
///клавиатуры последовательности положительных чисел (длина последовательности не
///ограничена). Для прекращения программы нужно ввести 0.




int main() {

    int a = -1;
    int max = -1;
    std::cout << "Enter any numbers:";
    std::cin >> a;

    while (a != 0) {
        if (a > max) {
            max = a;
        }
        std::cin >> a;
    }
    std::cout << "Maximum number is: " << max << std::endl;
    return 0;
}
