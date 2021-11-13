//
// Created by kotozavrina on 11/11/2021.
//

#include "iostream"

/// Написать функцию которая печатает значения функции y = kx + c,
/// для промежутка [a,b] c шагом s (k,c,a,b,s - задаются пользователем)

void printTableXY(double a, double b, double s, double k, double c) {
    std::cout << "y\tx" << std::endl;
    double eps = s / 1000;
    for (double x = a; x <= b + eps; x += s) {
        double y = k * x + c;
        std::cout << y << "\t" << x << std::endl;
    }


}

int main() {

    double k = 2;
    double c = 1;
    double a = 0;
    double b = 2;
    double s = 0.1;

    printTableXY(a, b, s, k, c);

}