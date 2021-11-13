//
// Created by kotozavrina on 11/11/2021.
//


#include "iostream"
#include <time.h>
#include <cstdlib>


/// Написать функцию которая вычисляет сумму ряда 1 + 1/2 + 1/4 ... + 1/(2^n) с заданной точностью

double getSumOfRow(double eps) {
    double sum = 0;
    double term = 1;

    while (term >= eps) {
        sum += term;
        term *= 0.5;
    }

    return sum;
}


int main() {

    double eps;
    std::cin >> eps;

    std::cout << getSumOfRow(eps) << std::endl;

}
